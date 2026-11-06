-------- EventFlow: Npc_Hylia_048_BottleShop --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetSelectBottleInfoToShop', 'EventTriggerLookAtObject', 'EventTriggerRemoveShopSelectedItemFromBottle', 'EventTriggerIncreaseRupeeBySell', 'EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart']
queries: ['EventQueryIsGhostShopSellByBottleContent', 'EventQueryCheckLoseMoneyIfSell', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCheckLoseMoneyIfSellSome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerExcludeNextTalkChoiceAndSetActorName', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventOpenNumDisplayForShop', 'EventWaitStableNumDisplay', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_048_BottleShop
entrypoint: None()
actions: ['EventTalk', 'EventWaitFinishKnockAction', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {
    Npc_Hylia_048_BottleShop.EventWaitFinishKnockAction({'IsWaitEnd': True})

    call Mask_All()

    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'GhostShop_CouponNum', 'DstGameDataName': 'GhostShop_CouponNum_ForMessage', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_Talk_Event5', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_Talk_Event181', 'Index': -1}) {
                Event82:
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_26', 'MaintainPerformanceState': 0})
                }
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 100}) {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'ChoiceLabel4': 12, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_05', 'ChoiceLabel2': 8, 'ChoiceLabel3': 7, 'MaintainPerformanceState': 0})
                    Event65:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event74:

                        call Sell()

                      case 1:
                        Event73:

                        call AboutPow()

                        Event60:

                        call BacktoChoice()

                      case 2:

                        call AboutPoint()

                        goto Event60
                      case 3:
                        Event52:

                        call Bye()

                    }
                  case [1, 2]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_02', 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'ChoiceLabel2': 8, 'MaintainPerformanceState': 0})
                    Event108:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event74
                      case 1:
                        goto Event73
                      case 2:

                        call CheckPoint()

                        goto Event60
                      case 3:
                        goto Event52
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_Talk_Event181', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_61', 'MaintainPerformanceState': 0})
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 100}) {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'ChoiceLabel2': 8, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_19'})
                    goto Event108
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'ChoiceLabel4': 12, 'ChoiceLabel2': 8, 'ChoiceLabel3': 7, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_19'})
                    goto Event65
                }
            }
        } else
        goto Event82
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_Talk_Event5', 'Value': True, 'Index': -1})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_Talk_Event181', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_14', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_25', 'MaintainPerformanceState': 0})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SubEvent_GhostShop', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_19', 'ChoiceLabel1': 4, 'ChoiceNumber': 4, 'ChoiceLabel4': 12, 'MaintainPerformanceState': 0, 'ChoiceLabel2': 8, 'ChoiceLabel3': 7})
            goto Event65
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_14', 'MaintainPerformanceState': 0})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SubEvent_GhostShop', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_19', 'ChoiceNumber': 3, 'ChoiceLabel1': 4, 'ChoiceLabel2': 8, 'ChoiceLabel3': 12, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event74
              case 1:
                goto Event73
              case 2:
                goto Event52
            }
        }
    }
}

void Sell_InputReturn() {
    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceExcludeGameData1': 'HasAnyBottle_Poe', 'ChoiceExcludeGameData2': 'HasAnyBottle_BigPoe', 'ChoiceExcludeGameData3': 'HasAnySellableBottle_Npc_Hylia_048', 'ChoiceExcludeGameData4': '', 'ChoiceActorParam1': 'Pouch_Bottle_Poe', 'ChoiceActorParam2': 'Pouch_Bottle_BigPoe', 'ChoiceActorParam3': '', 'ChoiceActorParam4': '', 'ChoiceActorParam5': ''})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceNumber': 3, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_43', 'MaintainPerformanceState': 1})
    Event176:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Event135:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': False})

        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 7, 'BoolValue': False})

        Npc_EventStarter.EventTriggerSetSelectBottleInfoToShop({'BottleItem': 7})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call Sell_AfterCheckingLoseMoney_Pow({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_90', 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_39'})

      case 1:
        Event132:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': False})

        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 6, 'BoolValue': False})

        Npc_EventStarter.EventTriggerSetSelectBottleInfoToShop({'BottleItem': 6})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
          case 0:
            Event39:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_SellTalk'}) {

                call Sell_AfterCheckingLoseMoney({'ChoiceLabel1': 2, 'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_38', 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_37'})

            } else {

                call Sell_AfterCheckingLoseMoney({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_91', 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_40'})

            }
          case 1:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_SellTalk'}) {

                call Sell_AfterCheckingLoseMoney({'ChoiceLabel1': 2, 'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_38', 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_62'})

            } else {

                call Sell_AfterCheckingLoseMoney({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_91', 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_59'})

            }
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 900}) {
              case 0:
                goto Event39
              case [1, 2]:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_SellTalk'}) {

                    call Sell_AfterCheckingLoseMoney_900({'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_58', 'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_104'})

                } else {

                    call Sell_AfterCheckingLoseMoney_900({'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_57', 'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_102'})

                }
            }
        }
      case 2:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': False})
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_96', 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    }
}

void Sell_AfterCheckingLoseMoney() {
    switch Npc_EventStarter.EventQueryCheckLoseMoneyIfSell() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId_IfLose'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_Full'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_99', 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 1})
            Event16:
            if !GameSystemActor.EventQueryTalkChoice2() {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
                  case [0, 2]:
                    Event153:

                    fork {
                        Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
                    } {

                        call NpcCommon.ShowItem_Sell({'NpcReceiveASName': 'Receive', 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_93', 'NpcReceiveAnimeFrames': 135})

                    }

                    Event149:
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_EventStarter.EventTriggerIncreaseRupeeBySell()
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GhostShop_IsCompleted_Exp'}) {
                        if Npc_EventStarter.EventQueryIsGhostShopSellByBottleContent() in [0, 1] {
                            Event11:
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_048'}) {
                                Event4:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_08', 'IsCloseDialog': True, 'MaintainPerformanceState': 1})

                                call Sell_InputReturn2()

                            } else {
                                Event226:
                                UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_100', 'MaintainPerformanceState': 0})
                                GameSystemActor.EventTriggerRequestAutoSave()
                            }
                        }
                    } else
                    if !Npc_EventStarter.EventQueryIsGhostShopSellByBottleContent() {
                        goto Event11
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_SellTalk'})
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_06', 'IsWaitEnd': True, 'MaintainPerformanceState': 1})
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Value': 100, 'Index': -1})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_03', 'EndDialogOption': 0, 'IsCloseDialog': True, 'MaintainPerformanceState': 1})
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_048'}) {
                            goto Event4
                        } else
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
                          case [0, 1]:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_63'})
                            goto Event226
                          case 2:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_07', 'MaintainPerformanceState': 1})
                            goto Event226
                        }
                    }
                  case 1:
                    Event250:

                    fork {
                        Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
                    } {

                        call NpcCommon.ShowItem_Sell({'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 135, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_103'})

                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_EventStarter.EventTriggerIncreaseRupeeBySell()
                    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Value': 100, 'Index': -1})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

                    call HappyCamera()

                    Npc_Hylia_048_BottleShop.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_64'})
                    Npc_Hylia_048_BottleShop.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

                    fork {
                        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    }

                    Npc_Hylia_048_BottleShop.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_65'})

                    call Dm_SY_GetInEvent.GetInEvent_Poeshop({'ASName': 'Act_SitChair_Wait', 'Target': 3, 'NpcActorName': 'Npc_Hylia_048_BottleShop', 'NpcInstanceName': '', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_048_BottleShop"), 'ActorName': 'Item_Bottle'})

                    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_66'})
                    GameSystemActor.EventTriggerRequestAutoSave()
                }
            } else {
                Event129:

                call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_98'})

                Event43:

                call Sell_InputReturn()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_Full'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_92', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
            goto Event16
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId_IfLose'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hylia_048_BottleShop_Overflow'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_101', 'MaintainPerformanceState': 1})
            Event27:
            if !GameSystemActor.EventQueryTalkChoice2() {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
                  case [0, 2]:
                    Event150:

                    fork {
                        Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
                    } {

                        call NpcCommon.ShowItem_Sell({'NpcReceiveASName': 'Receive', 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_95', 'NpcReceiveAnimeFrames': 135})

                    }

                    goto Event149
                  case 1:
                    goto Event250
                }
            } else {
                Event156:

                call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_97'})

                goto Event43
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Hylia_048_BottleShop_Overflow'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_94', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
            goto Event27
        }
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId'})
        if !GameSystemActor.EventQueryTalkChoice2() {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
              case [0, 2]:
                Event145:

                fork {
                    Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
                } {

                    call NpcCommon.ShowItem_Sell({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_11', 'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 135})

                }

                goto Event149
              case 1:
                goto Event250
            }
        } else
        Event93:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_34'})

        } else {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_35'})

        }
        goto Event43
    }
}

void Sell() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_048'}) {
        UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceExcludeGameData1': 'HasAnyBottle_Poe', 'ChoiceExcludeGameData2': 'HasAnyBottle_BigPoe', 'ChoiceExcludeGameData3': 'HasAnySellableBottle_Npc_Hylia_048', 'ChoiceExcludeGameData4': '', 'ChoiceActorParam1': 'Pouch_Bottle_Poe', 'ChoiceActorParam2': 'Pouch_Bottle_BigPoe', 'ChoiceActorParam3': '', 'ChoiceActorParam4': '', 'ChoiceActorParam5': ''})
        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_09', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'MaintainPerformanceState': 1})
        goto Event176
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GhostShop_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_42', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_28', 'MaintainPerformanceState': 0})
    }

    call BacktoChoice()

}

void AboutPow() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event283', 'Index': -1}) {
        Event35:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_15', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GhostShop_IsCompleted_Exp'}) {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_32', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_33', 'MaintainPerformanceState': 0})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 13, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_41', 'ChoiceLabel2': 17, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 0}) {
                  case [0, 1]:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_46', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_50', 'MaintainPerformanceState': 0})
                    }
                    Event302:

                    call SuggestCantera()

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_82'})

                    call NpcCommon.SuggestCamera_Reset_NPCLookOnly({'TurnTargetActorName': 'Npc_Hylia_048_BottleShop', 'NpcActor': ActorIdentifier(name="Npc_Hylia_048_BottleShop"), 'TurnTargetInstanceName': ''})

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_76'})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_49', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_53', 'MaintainPerformanceState': 0})
                    }
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_80'})
                    goto Event302
                }
            } else {
                Event50:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_74', 'ChoiceNumber': 0})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_60', 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_aboutTalkBigPow'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_77'})
                    Event301:

                    call SuggestCantera()

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_82'})

                    call NpcCommon.SuggestCamera_Reset_NPCLookOnly({'TurnTargetActorName': 'Npc_Hylia_048_BottleShop', 'NpcActor': ActorIdentifier(name="Npc_Hylia_048_BottleShop"), 'TurnTargetInstanceName': ''})

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_73', 'ChoiceNumber': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_aboutTalkBigPow'})
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event49', 'Index': -1}) {
                    goto Event301
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event49', 'Value': True, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 9, 'ChoiceLabel2': 17, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_70', 'ChoiceNumber': 0})
                    goto Event301
                }
            } else {
                goto Event50
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event281', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event282', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event283', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_68'})
            goto Event35
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event282', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_69'})
            goto Event35
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_048_BottleShop_AboutPow_Event281', 'Value': True, 'Index': -1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_67'})
        goto Event35
    }
}

void AboutPoint() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_24', 'MaintainPerformanceState': 0})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_63'})
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_07', 'MaintainPerformanceState': 0})
    }
}

void CheckPoint() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GhostShop_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_27', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_18', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_71'})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 400}) {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_63'})
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_07', 'MaintainPerformanceState': 0})
        }
    }
}

void BacktoChoice() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Index': -1, 'Value': 100}) {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_16', 'ChoiceLabel4': 12, 'ChoiceLabel2': 8, 'ChoiceLabel3': 7, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Event118:

                call Sell()

              case 1:
                Event121:

                call AboutPow()

                Event71:

                call BacktoChoice()

              case 2:

                call AboutPoint()

                goto Event71
              case 3:
                Event59:

                call Bye()

            }
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_16', 'ChoiceLabel4': 12, 'ChoiceLabel3': 15, 'ChoiceLabel2': 8, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                goto Event118
              case 1:
                goto Event121
              case 2:

                call CheckPoint()

                goto Event71
              case 3:
                goto Event59
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'ChoiceLabel1': 4, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_16', 'ChoiceNumber': 3, 'ChoiceLabel2': 8, 'ChoiceLabel3': 12, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            goto Event118
          case 1:
            goto Event121
          case 2:
            goto Event59
        }
    }
}

void Bye() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_29', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_31', 'MaintainPerformanceState': 0})
    }
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}

void Sell_InputReturn2() {
    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceExcludeGameData1': 'HasAnyBottle_Poe', 'ChoiceExcludeGameData2': 'HasAnyBottle_BigPoe', 'ChoiceExcludeGameData3': 'HasAnySellableBottle_Npc_Hylia_048', 'ChoiceExcludeGameData4': '', 'ChoiceActorParam1': 'Pouch_Bottle_Poe', 'ChoiceActorParam2': 'Pouch_Bottle_BigPoe', 'ChoiceActorParam3': '', 'ChoiceActorParam4': '', 'ChoiceActorParam5': ''})
    UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_09', 'ChoiceNumber': 3, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel4': 0, 'IsCloseDialog': True, 'ChoiceLabel3': 5, 'MaintainPerformanceState': 1})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        goto Event135
      case 1:
        goto Event132
      case 2:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': False})
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_96', 'EndDialogOption': 2, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_048_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case fnv1a("Mask_Talk"):
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_05', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_09', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_06', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void HappyCamera() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Hylia_048_BottleShop.EventTriggerRequestLookAtTheFront()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_048_BottleShop', 'PosVector': [0.18000000715255737, 1.100000023841858, 1.8200000524520874], 'AtVector': [-0.019999999552965164, 0.8899999856948853, -0.6299999952316284], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_048_BottleShop', 'PosVector': [0.14000000059604645, 1.1100000143051147, 1.3799999952316284], 'AtVector': [-0.019999999552965164, 0.9300000071525574, -0.6299999952316284], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_048_BottleShop.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_10', 'ASName': 'Act_Talk_Overjoyed', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Sell_AfterCheckingLoseMoney_Pow() {
    switch Npc_EventStarter.EventQueryCheckLoseMoneyIfSell() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'MessageId_IfLose', 'MaintainPerformanceState': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_Full'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_99', 'MaintainPerformanceState': 1})
            Event205:
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event153
            } else {
                goto Event129
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_Full'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_92', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
            goto Event205
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'MessageId_IfLose', 'MaintainPerformanceState': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hylia_048_BottleShop_Overflow'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_101', 'MaintainPerformanceState': 1})
            Event209:
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event150
            } else {
                goto Event156
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Hylia_048_BottleShop_Overflow'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_94', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
            goto Event209
        }
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 1})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event145
        } else
        goto Event93
    }
}

void Sell_AfterCheckingLoseMoney_900() {
    switch PouchSystemActor.EventQueryCheckLoseMoneyIfSellSome({'Price': 200}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId_IfLose'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_Full'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_105', 'ChoiceNumber': 2, 'ChoiceLabel1': 19})
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
            } {

                call NpcCommon.ShowItem_Sell({'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 135, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_93'})

            }

            Event224:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GhostShop_CouponNum', 'Value': 100, 'Index': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call HappyCamera()

            Npc_Hylia_048_BottleShop.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_23', 'MaintainPerformanceState': 0})
            Npc_Hylia_048_BottleShop.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

            fork {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            }

            switch PouchSystemActor.EventQueryCheckLoseMoneyIfSellSome({'Price': 200}) {
              case 0:
                Event169:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_13', 'MaintainPerformanceState': 0})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GhostShop', 'StepName': 'Complete', 'IsWaitEnd': True})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                GameSystemActor.EventTriggerRequestAutoSave()
              case [1, 2]:
                Npc_Hylia_048_BottleShop.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_56', 'MaintainPerformanceState': 0})

                call Dm_SY_GetInEvent.GetInEvent_Poeshop({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_048_BottleShop"), 'Target': 3, 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': '', 'ActorName': 'Obj_Rupee_Gold', 'ASName': 'Wait'})

                goto Event169
            }
        } else {
            Event212:

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_108'})

            goto Event43
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId_IfLose'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Hylia_048_BottleShop_Overflow'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_106', 'ChoiceLabel1': 19})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event199:

            fork {
                Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
            } {

                call NpcCommon.ShowItem_Sell({'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 135, 'MessageId': 'EventFlowMsg/Npc_Hylia_048_BottleShop:Talk_103'})

            }

            goto Event224
        } else {
            goto Event212
        }
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1, 'MessageId': 'MessageId', 'ChoiceLabel1': 18})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event199
        } else
        goto Event93
    }
}

void SuggestCantera() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter.EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        Npc_EventStarter.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TrunPos'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True, 'ActorName': 'DestinationAnchor', 'Target': 5, 'InstanceName': 'TrunPos'})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'PosVector': [15.571999549865723, 103.37000274658203, 55.89400100708008], 'AtVector': [18.27199935913086, 102.68099975585938, 56.8380012512207]})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsEnableRevertFast': False, 'AtVector': [18.27199935913086, 102.68099975585938, 56.8380012512207], 'IsWaitEnd': False, 'MoveTime': 120, 'PosVector': [15.706999778747559, 103.33499908447266, 55.941001892089844], 'EnableCameraAlpha': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_048_BottleShop_HaveSeeCamera'})
}
