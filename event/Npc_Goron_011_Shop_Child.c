-------- EventFlow: Npc_Goron_011_Shop_Child --------

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsEmotion']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_WallCrack_Broke', 'Value': False})

    fork {

        call DisplayShop.EventCamera({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'GoronCity_Shop_Talking'})

    } {

        call InitTalk.InitTalk_DirectShop({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    }


    call DisplayShop.DisplayShop_Porter_Check()

    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Gauntlet_Goron'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_Talk_Event10', 'Index': -1}) {

            call OMEN()

            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_05', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            Event17:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'GoronCity_Shop_Talking', 'EmotionType': 1, 'ASName': 'Act_Joy_Wait'})

                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01_GoronJoy', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
                }
                goto Event17
              case 1:

                call FlavorTalkFlow({'FlavorTalk_GameDataName': 'GoronCity_Shop_FlavorTalk_Int'})

              case 2:
                switchcall DisplayShop.DisplayShop_ZeldaNotes_Flow() {
                  case 1655997989:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_52', 'MaintainPerformanceState': 0})
                    goto Event17
                  case 2160637662:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
                    goto Event17
                }
              case 3:

                call Goodby()


                call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_Talk_Event10', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_04', 'ChoiceLabel1': 9011, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            goto Event17
        }
    } else
    if !Npc_EventStarter.EventQueryHaveTalked() {

        call OMEN()

        Event21:
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_01', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
        Event32:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'GoronCity_Shop_Talking', 'ASName': 'Wait', 'EmotionType': 0})

            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
            goto Event32
          case 1:

            call FlavorTalkFlow({'FlavorTalk_GameDataName': 'GoronCity_Shop_FlavorTalk_Int'})

          case 2:
            switchcall DisplayShop.DisplayShop_ZeldaNotes_Flow() {
              case 1655997989:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_52', 'MaintainPerformanceState': 0})
                goto Event32
              case 2160637662:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
                goto Event32
            }
          case 3:

            call Goodby()


            call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

        }
    } else
    switch Npc_EventStarter.EventQueryIsEmotion() {
      case [0, 1, 2, 3, 5]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_08'})
        goto Event21
      case 4:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_00', 'MaintainPerformanceState': 0})
        goto Event21
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest', 'Value': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GoronCity_Shop_WallCrack_Broke', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Near_01'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Goodby() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_06_2', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_07_2', 'MaintainPerformanceState': 0})
        }
        Event29:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GoronCity_Shop_SelectBomb'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Child_ClearNormalEmotion', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Child_ResetDamageNum', 'Value': True})
        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'GoronCity_Shop_FlavorTalk_Int'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnteringStore_Hello_Standby'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest'})
        }
        UISystemActor.EventTriggerCloseNumDisplay()
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_06', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Talk_07', 'MaintainPerformanceState': 0})
    }
    goto Event29
}

void FlavorTalkFlow() {
    UISystemActor.EventTriggerCloseNumDisplay()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        Event45:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_FlavorTalkFlow_02_Event27', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_02_1', 'MaintainPerformanceState': 0})
                Event46:
                GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                Event52:

                call ReChoice()

            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_FlavorTalkFlow_02_Event27', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_02', 'MaintainPerformanceState': 0})
                goto Event46
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_02_2', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
            goto Event52
          case 2:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_03_GoronJoy', 'MaintainPerformanceState': 0})
            goto Event45
          case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Gauntlet_Goron'}) {
        Event8:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_Talk_Event13'}) {
                Event33:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_6', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                Event83:

                call ReChoice()

            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Child_Talk_Event13'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_2', 'MaintainPerformanceState': 0})
                goto Event33
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_3', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'FlavorTalk_GameDataName'})
            goto Event83
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_DodongoCavernOpne_Exp'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_7', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_1', 'MaintainPerformanceState': 0})
            }
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 3})
            goto Event83
          case 3:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_03', 'MaintainPerformanceState': 0})
            goto Event8
          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
        }
    } else
    Event34:
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_1', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Event50:

        call ReChoice()

      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_4', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'FlavorTalk_GameDataName'})
        goto Event50
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:FlavorTalk_01_5', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 3})
        goto Event50
      case 3:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_03', 'MaintainPerformanceState': 0})
        goto Event34
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
    }
}

void ReChoice() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {

        call ReChoice_Get_StoneOfFire_IsCompleted()

    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_02', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    }
    goto Event32
}

void OMEN() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:GlassTruth', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_09'})
        }
    } else {

        call NpcCommon.Mask_Talk_Common({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_103', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Mask_09'})

    }
}

void ReChoice_Get_StoneOfFire_IsCompleted() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01_GoronJoy', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_02_GoronJoy', 'MaintainPerformanceState': 0})
    }
    goto Event17
}
