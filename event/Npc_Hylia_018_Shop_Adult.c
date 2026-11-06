-------- EventFlow: Npc_Hylia_018_Shop_Adult --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_018_Shop_Adult
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryGameDataIntBranch', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenNumDisplayForShop', 'EventTriggerSetDisplayHeartGauge', 'EventTriggerCloseNumDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    fork {

        call DisplayShop.EventCamera({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking'})

    } {

        call InitTalk.InitTalk_DirectShop({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    }


    call DisplayShop.DisplayShop_Porter_Check()

    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_NandemoShop_FirstTalk'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_NandemoShop_FirstTalk'})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:Talk_01', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    Event15:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking', 'ASName': 'Wait', 'EmotionType': 0})

        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:ReChoiceTalk_02', 'MaintainPerformanceState': 0})
        goto Event15
      case 1:

        call FlavorTalkFlow_Default({'FlavorTalk_GameDataName': 'KakarikoVillage_Hylia_018_Shop_FlavorTalk_Int'})

      case 2:
        switchcall DisplayShop.DisplayShop_ZeldaNotes_Flow() {
          case 1655997989:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_52', 'MaintainPerformanceState': 0})
            goto Event15
          case 2160637662:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:ReChoiceTalk_02', 'MaintainPerformanceState': 0})
            goto Event15
        }
      case 3:

        call Npc_Hylia_018_Shop_Child.ThanksBuying()


        call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

    }
}

void CheckRestrictedDoor() {

    call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 0, 'StartTime': 20}) {
        Npc_Hylia_018_Shop_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_05', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_NandemoShop_FirstTalk'})
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 4, 'StartTime': 0}) {
        Npc_Hylia_018_Shop_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_20', 'MaintainPerformanceState': 0})

        call NaviEventCommon.NaviMove_PlayerHomePos_Door()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_Navi_05', 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 7}) {
        Npc_Hylia_018_Shop_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_17', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_NandemoShop_FirstTalk'})
    } else {
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void ReChoice_Default() {
    goto Event15
}

void FlavorTalkFlow_Default() {
    UISystemActor.EventTriggerCloseNumDisplay()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
                Event18:
                switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_02', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                    Event36:

                    call Npc_Hylia_018_Shop_Child.ReChoiceTalk()


                    call ReChoice_Default()

                  case 1:
                    Event32:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_01', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
                    goto Event36
                  case 2:
                    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_00', 'MaintainPerformanceState': 0})
                    goto Event18
                  case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                    GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
                }
            } else
            Event38:
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_04', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                goto Event36
              case 1:
                goto Event32
              case 2:
                GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_00', 'MaintainPerformanceState': 0})
                goto Event38
              case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
            }
        } else
        Event46:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
          case 0:
            Event58:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_07', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            goto Event36
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_05', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
            goto Event36
          case 2:
            Event50:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_01', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 3})
            goto Event36
          case 3:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_00', 'MaintainPerformanceState': 0})
            goto Event46
          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
        }
    } else
    Event30:
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsAfter_Step03_Exp'}) {
            goto Event58
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_06', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            goto Event36
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_03', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
        goto Event36
      case 2:
        goto Event50
      case 3:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Adult:FlavorTalk_00', 'MaintainPerformanceState': 0})
        goto Event30
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
    }
}
