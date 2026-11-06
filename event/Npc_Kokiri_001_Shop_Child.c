-------- EventFlow: Npc_Kokiri_001_Shop_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerKokiriRequestComeCloserFairy']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool', 'EventQueryCheckIsGet', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_010_Child
entrypoint: None()
actions: ['EventTriggerSetRecentTalkFlag', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerCloseNumDisplay', 'EventOpenNumDisplayForShop', 'EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {

    fork {

        call DisplayShop.EventCamera({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'KokiriForest_Shop_Talking'})

    } {

        call InitTalk.InitTalk_DirectShop({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    }


    call DisplayShop.DisplayShop_Porter_Check()

    Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
    Npc_EventStarter.EventTriggerAIScheduleSelectSchedule()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kokiri_001_Shop_Child_Navi_HasTalked', 'Index': -1, 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_001_Shop_Child_Talk_Arrival'}) {
            Event31:

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0001'})

        } else {
            Event32:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_001_Shop_Child_Talk_Arrival'})

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0005'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_001_Shop_Child_Talk_Arrival'}) {

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0001'})

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_001_Shop_Child_Talk_Arrival'})

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0006'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_DekuTree_IsAfter_Step02_Exp'}) {
        switchcall present_DekuSheld() {
          case 1921628046:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_Talking'})

            call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

          case 231157969:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_001_Shop_Child_Talk_Arrival'}) {
                goto Event31
            } else {
                goto Event32
            }
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 9014, 'ChoiceLabel3': 9016, 'ChoiceLabel2': 9015, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0010', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 9014, 'ChoiceLabel3': 9016, 'ChoiceLabel2': 9015, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0009', 'MaintainPerformanceState': 0})
        }
        Event19:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'KokiriForest_Shop_Talking', 'ASName': 'Talk', 'EmotionType': 0})

            if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Weapon_Shield_Deku'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Meet_DekuTree_BoughtDekuShield', 'Index': -1}) {
                    Event92:
                    if !GameSystemActor.EventQueryRandomChoice2() {

                        call ReTurnTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_01'})

                    } else {

                        call ReTurnTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_02'})

                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_Talking'})

                    call Npc_Kokiri_010_Child.DekuShield_TutorialTalk()

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Meet_DekuTree_BoughtDekuShield', 'Index': -1, 'Value': True})
                    Npc_Kokiri_010_Child.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
                    Npc_Kokiri_010_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})
                }
            } else
            goto Event92
          case 1:

            call FlavorTalkFlow_DekuSheldOnly({'FlavorTalk_GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})

          case 2:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})

            call ThanksBuying()

            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_Talking'})

            call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 9014, 'ChoiceLabel3': 9016, 'ChoiceLabel2': 9015, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0004', 'MaintainPerformanceState': 0})
        goto Event19
    }
}

void ThanksBuying() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0007', 'MaintainPerformanceState': 0})
        } else {
            Event5:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0002', 'MaintainPerformanceState': 0})
        }
        Event41:
        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})
        UISystemActor.EventTriggerCloseNumDisplay()
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        goto Event5
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0008', 'MaintainPerformanceState': 0})
    }
    goto Event41
}

void FlavorTalkFlow_Default() {
    UISystemActor.EventTriggerCloseNumDisplay()
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_01', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Event102:
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
        if !GameSystemActor.EventQueryRandomChoice2() {

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_01'})

        } else {

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_02'})

        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_02_1', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
        goto Event102
      case 2:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_99', 'MaintainPerformanceState': 0})

        call FlavorTalkFlow_Default({'FlavorTalk_GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})

      case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
    }
}

void Choices() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9014, 'MessageId': 'MessageId', 'ChoiceLabel2': 9015, 'ChoiceLabel4': 9016, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    Event48:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'KokiriForest_Shop_Talking', 'ASName': 'Talk', 'EmotionType': 0})

        Event87:
        if !GameSystemActor.EventQueryRandomChoice2() {

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_01'})

        } else {

            call Choices({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_02'})

        }
      case 1:

        call FlavorTalkFlow_Default({'FlavorTalk_GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})

      case 2:
        switchcall DisplayShop.DisplayShop_ZeldaNotes_Flow() {
          case 1655997989:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_52', 'ChoiceLabel1': 9014, 'ChoiceLabel2': 9015, 'ChoiceLabel4': 9016, 'MaintainPerformanceState': 0})
            goto Event48
          case 2160637662:
            goto Event87
        }
      case 3:

        call ThanksBuying()

        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Shop_Talking'})

        call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

    }
}

void ReTurnTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 9014, 'ChoiceLabel3': 9016, 'ChoiceLabel2': 9015, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    goto Event19
}

void FlavorTalkFlow_DekuSheldOnly() {
    UISystemActor.EventTriggerCloseNumDisplay()
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_03', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Event106:
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
        if !GameSystemActor.EventQueryRandomChoice2() {

            call ReTurnTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_01'})

        } else {

            call ReTurnTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:ReChoiceTalk_02'})

        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_01', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
        goto Event106
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_02_1', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 3})
        goto Event106
      case 3:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:FlavorTalk_99', 'MaintainPerformanceState': 0})

        call FlavorTalkFlow_DekuSheldOnly({'FlavorTalk_GameDataName': 'KokiriForest_Shop_FlavorTalk_Int'})

      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
    }
}

void present_DekuSheld() {
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Shield_Deku', 'WeaponSlot': 4}) {
        return 231157969
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Npc_Kokiri_001_Shop_Child_PresentDekuShield'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0102', 'MaintainPerformanceState': 0})

        call Dm_SY_GetInEvent.GetInEvent_Mask({'ActorName': 'Obj_Shield_Deku'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0103', 'MaintainPerformanceState': 0})
        Event81:
        return 1921628046
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0100', 'MaintainPerformanceState': 0})

        call Dm_SY_GetInEvent.GetInEvent_Mask({'ActorName': 'Obj_Shield_Deku'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Talk_0101', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_Npc_Kokiri_001_Shop_Child_PresentDekuShield'})
        goto Event81
    }
}
