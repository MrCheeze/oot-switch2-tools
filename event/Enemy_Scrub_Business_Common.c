-------- EventFlow: Enemy_Scrub_Business_Common --------

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch', 'EventQueryHasRuppe', 'EventQueryIsAnyBottleEmpty', 'EventQueryCanAddToPorch', 'EventQueryHasAnyBottle']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataString64', 'EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataString64']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Business
entrypoint: None()
actions: ['EventTalk', 'EventScrubBusinessOnIsFinishDoEvent', 'EventScrubBusinessTurnAround', 'EventScrubBusinessWriteGameDataHaveTalked', 'EventScrubBusinessWriteGameDataBancItemName']
queries: ['EventQueryScrubBusinessTalkType', 'EventQueryScrubBusinessIsFirstTalk']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryRandomChoice4', 'EventQueryIsDreamWorld', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge', 'EventCloseRupeeDisplay', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventOpenNumDisplayForShop', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFront']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)]
entrypoint: SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)
actions: ['EventTalk']
queries: []
params: None

Actor: Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)]
entrypoint: SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)
actions: ['EventTalk', 'EventScrubBusinessOnIsFinishDoEvent', 'EventPlayAS', 'EventTriggerRequestDeath']
queries: []
params: None

Actor: Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)]
entrypoint: SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)
actions: ['EventTalk', 'EventScrubBusinessOnIsFinishDoEvent', 'EventPlayAS', 'EventTriggerRequestDeath']
queries: []
params: None

void Enemy_Scrub_Business_GreenPotion_01() {

    call Enemy_Scrub_Business_Seed({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_RedPotion_01() {

    call Enemy_Scrub_Business_Seed({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_DekuNutsPouch_01() {

    call SimpleShopRoot_Enemy_Scrub_Business_Pouch({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_06', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05_Irregular'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Lostwood_Enemy_Scrub_Business_DekuNutsPouch_01', 'Index': -1, 'Value': True})
    }
}

void Enemy_Scrub_Business_DekuStickPouch_01() {

    call SimpleShopRoot_Enemy_Scrub_Business_Pouch({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_06', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05_Irregular'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'LostWood_Enemy_Scrub_Business_DekuStickPouch_01'})
    }
}

void Enemy_Scrub_Business_DekuSeed_01() {
    Event22:

    call Enemy_Scrub_Business_Seed({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_DekuNuts_01() {

    call Enemy_Scrub_Business_Seed({'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_IrregularVariation_00', 'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Variation_00'})

}

void Enemy_Scrub_Business_Bomb_01() {

    call Enemy_Scrub_Business_Seed({'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Variation_01', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_IrregularVariation_01'})

}

void Enemy_Scrub_Business_Arrow_01() {

    call Enemy_Scrub_Business_Seed({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_Heart() {

    call Secret()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HyruleField_Enemy_Scrub_Business_HeartPiece_01'})
    }
}

void Enemy_Scrub_Business_Shield_Deku() {

    call Enemy_Scrub_Business_Seed({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_DekuSeed_01_Fear() {
    goto Event22
}

void Enemy_Scrub_Business_Seed() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call InitTalk.InitTalk_Enemy_ScrubBusiness({'LookAtInstanceName': '', 'LookAtActorName': 'Enemy_Scrub_Business', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Business")})

    } {
        Enemy_Scrub_Business.EventScrubBusinessTurnAround({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_BuySuccess'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_IsBuy'})
    Enemy_Scrub_Business.EventScrubBusinessWriteGameDataBancItemName({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Shop_ScrubBusiness', 'CommandLife': 0, 'IsReleaseDucking': False})
    if !GameSystemActor.EventQueryIsDreamWorld() {
        Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_00', 'MaintainPerformanceState': 0})
        if !PouchSystemActor.EventQueryHasAnyBottle() {
            Event19:

            call Enemy_Scrub_Business_Dream.Bottle_Shop()

        } else {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_18', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 0})

            call Dm_SY_GetInEvent.GetInEvent_NotTurn_2DShop({'ASName': 'Talk_Wait', 'ActorName': 'Item_Bottle', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'PriceGameData': 'SimpleShop_Price'})

            Player_Event.EventTriggerPlayerRequestLookAtTheFront()
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_19', 'MaintainPerformanceState': 0})
            goto Event19
        }
    } else
    if !Enemy_Scrub_Business.EventQueryScrubBusinessIsFirstTalk() {
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'Greeting_01', 'MaintainPerformanceState': 0})
        Event190:

        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_00', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened01'})


        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_01', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened02'})


        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_02', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened03'})

        Event119:
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData3': 'Enemy_Scrub_Business_Unopened03', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_09', 'ASName': 'Talk', 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'MaintainPerformanceState': 1})
        Event120:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            if !GameSystemActor.EventQueryIsDreamWorld() {

                call Enemy_Scrub_Business_Dream.Variable({'GameDataName': 'Scrub_Business_TempItemName_00'})

            } else {

                call Variable({'GameDataName': 'Scrub_Business_TempItemName_00'})

            }
            Event34:

            call ReturnItemSelect()

          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            if !GameSystemActor.EventQueryIsDreamWorld() {

                call Enemy_Scrub_Business_Dream.Variable({'GameDataName': 'Scrub_Business_TempItemName_01'})

            } else {

                call Variable({'GameDataName': 'Scrub_Business_TempItemName_01'})

            }
            goto Event34
          case 2:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            if !GameSystemActor.EventQueryIsDreamWorld() {

                call Enemy_Scrub_Business_Dream.Variable({'GameDataName': 'Scrub_Business_TempItemName_02'})

            } else {

                call Variable({'GameDataName': 'Scrub_Business_TempItemName_02'})

            }
            goto Event34
          case 3:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})

            fork {
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            } {
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            }

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_IsBuy'}) {
                switch GameSystemActor.EventQueryRandomChoice4() {
                  case 0:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_002', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    Event595:
                    GameSystemActor.EventTriggerRequestAutoSave()
                    Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                  case 1:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_014', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event595
                  case 2:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_015', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event595
                  case 3:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_016', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event595
                }
            } else {
                switchcall CanBuy_CheckAll() {
                  case 4214916587:
                    switch GameSystemActor.EventQueryRandomChoice4() {
                      case 0:
                        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_017', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                        Event140:
                        Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                      case 1:
                        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                        goto Event140
                      case 2:
                        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_019', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                        goto Event140
                      case 3:
                        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_020', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                        goto Event140
                    }
                  case 620952561:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'MaintainPerformanceState': 0})
                    goto Event140
                }
            }
        }
    } else {
        Enemy_Scrub_Business.EventScrubBusinessWriteGameDataHaveTalked({'IsWaitEnd': True})
        if !Enemy_Scrub_Business.EventQueryScrubBusinessTalkType() {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting_00', 'MaintainPerformanceState': 0})
        } else {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting02', 'MaintainPerformanceState': 0})
        }
        goto Event190
    }
}

void SimpleShopSub_Scrub_Business_Seed_Bottle() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': False})
    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'MessageId': 'SellerMessageId', 'ASName': 'Talk', 'MaintainPerformanceState': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {

                call Dm_SY_GetInEvent.GetInEventInBottle_2DShop({'ActorName': 'DisplayActor', 'BottleItem': 'Item', 'Npc_EventStarter': 'Enemy_Scrub_Business', 'PriceGameData': 'SimpleShop_Price', 'ASName': 'Talk_Wait'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_IsBuy', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_BuySuccess'})
                Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_005', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            } else {
                Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_010', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                Event248:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess', 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            }
        } else {
            Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_10', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
            goto Event248
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': True})
        goto Event248
    }
}

void SimpleShopSub_Scrub_Business_Seed_Consume() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ASName': 'Talk', 'MaintainPerformanceState': 1, 'MessageId': 'SellerMessageId'})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Actor'}) {
              case 0:
                Event262:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False, 'Index': -1})

                call Dm_SY_GetInEvent.GetInEvent_NotTurn_2DShop({'PriceGameData': 'SimpleShop_Price', 'ASName': 'Talk_Wait', 'Enemy_Scrub_Business': 'Enemy_Scrub_Business', 'ActorName': 'Actor'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_IsBuy', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_BuySuccess'})
                if !GameSystemActor.EventQueryIsDreamWorld() {
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Container', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_025', 'MaintainPerformanceState': 0})
                        UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Escape', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTriggerRequestDeath({'DeathReason': 10})
                    }
                } else {
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_005', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                }
              case 1:
                Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 1, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 2, 'ASName': 'Talk', 'MaintainPerformanceState': 1, 'MessageId': 'PouchEnough_MessageId'})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event262
                } else {
                    Event72:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess', 'Value': False})
                    if !GameSystemActor.EventQueryIsDreamWorld() {
                        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Container', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
                            UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                            Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                    }
                }
              case 2:
                Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'PouchFull_MessageId'})
                goto Event72
            }
        } else {
            Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_10', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
            goto Event72
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': True})
        goto Event72
    }
}

void Variable() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_RedPotion'}) {

        call SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'Item': 0, 'DisplayActor': 'Item_Bottle_RedPotion', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_RedPotion_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_GreenPotion'}) {

        call SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_GreenPotion_01', 'Item': 1, 'DisplayActor': 'Item_Bottle_GreenPotion', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_Bug'}) {

        call SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'Item': 8, 'DisplayActor': 'Item_Bottle_Bug', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Insect_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuSeedBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 30, 'Actor': 'Shop_DekuSeedBundle_01', 'NecessaryActor': 'Item_BulletBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuSeed_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuSeedBundle_02'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BulletBag_Small', 'Price': 15, 'Actor': 'Shop_DekuSeedBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuSeed_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuNutBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 20, 'Actor': 'Shop_DekuNutBundle_01', 'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNuts_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStick'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 10, 'Actor': 'Shop_DekuStick', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStick_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStickBundle_Medium'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStick_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Price': 40, 'Actor': 'Shop_DekuStickBundle_Medium', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 35, 'Actor': 'Item_BombBundle_Small', 'NecessaryActor': 'Item_BombBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_02'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BombBag_Small', 'Price': 60, 'Actor': 'Shop_BombBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Arrow_01', 'Price': 20, 'Actor': 'Shop_ArrowBundle_01', 'NecessaryActor': 'Item_Quiver_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_02'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Quiver_Small', 'Actor': 'Shop_ArrowBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Arrow_02', 'Price': 50, 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Actor': 'Shop_Heart', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 10})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Heart_Bundle'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_03', 'Actor': 'Shop_Heart_Bundle', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 20})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Shield_Deku'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 40, 'Actor': 'Shop_Weapon_Shield_Deku', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Shield_Deku_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombchuBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BombBag_Small', 'Price': 100, 'Actor': 'Shop_BombchuBundle_01', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bombchu_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_ScrubBusinessSeed'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 30, 'Actor': 'Obj_ScrubBusinessSeed', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_BusinessSeed_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Shop_MagicJar_Small', 'Price': 10, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Magic_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_022', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_024', 'NecessaryActor': 'Item_DinFire', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    }
}

void Unopened_Check() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Shop_DekuSeedBundle_01'}) {
        Event180:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Weapon_Range_SlingShot'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDate_Unopend'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Shop_DekuSeedBundle_02'}) {
        goto Event180
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Item_Bottle_GreenPotion'}) {
        Event435:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_DinFire'}) {
            Event187:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_MP', 'Index': -1}) {
            goto Event187
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Arrow_Fire'}) {
            goto Event187
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Arrow_Ice'}) {
            goto Event187
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Armor_GlassTruth'}) {
            goto Event187
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDate_Unopend'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Obj_MagicJar_Small'}) {
        goto Event435
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Shop_ArrowBundle_01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Weapon_Range_Bow'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else {
            GameDataActor.EventTriggerSetGameDataString64({'Value': 'Obj_Heart', 'Index': -1, 'GameDataName': 'GameData_Item'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Shop_ArrowBundle_02'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Weapon_Range_Bow'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else {
            GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Shop_Heart_Bundle'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Item_Bottle_RedPotion'}) {
        Event166:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle'}) {
            Event169:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Letter'}) {
            goto Event169
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDate_Unopend'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Item_Bottle_GreenPotion'}) {
        goto Event166
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Item_Bottle_Bug'}) {
        goto Event166
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_Item', 'Value': 'Item_ScrubBusinessSeed'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_ScrubBusinessSeed'}) {
            Event247:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bomb'}) {
            goto Event247
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDate_Unopend'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDate_Unopend', 'Value': False})
    }
}

void SimpleShopRoot_Enemy_Scrub_Business_Pouch() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call InitTalk.InitTalk_Enemy_ScrubBusiness({'LookAtInstanceName': '', 'LookAtActorName': 'Enemy_Scrub_Business', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Business")})

    } {
        Enemy_Scrub_Business.EventScrubBusinessTurnAround({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_BuySuccess'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 0})
    Enemy_Scrub_Business.EventScrubBusinessWriteGameDataBancItemName({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Shop_ScrubBusiness', 'CommandLife': 0, 'IsReleaseDucking': False})
    if !GameSystemActor.EventQueryIsDreamWorld() {
        Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_01', 'MaintainPerformanceState': 0})

        call Enemy_Scrub_Business_Dream.Onetime_Shop()

    } else
    if !Enemy_Scrub_Business.EventQueryScrubBusinessIsFirstTalk() {
        Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'Greeting_01', 'MaintainPerformanceState': 0, 'IsWaitEnd': True})
        Event273:
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': True})
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Piece', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
            GameDataActor.EventTriggerSetGameDataString64({'Value': 'Obj_Heart_Piece', 'GameDataName': 'Shop_SelectItemName', 'Index': -1})

            call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Obj_Heart_Piece', 'Price': 100, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

        } else
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_StickBag_Medium', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_DekuStick'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_StickBag_Medium'}) {

                    call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_StickBag_Large', 'Price': 40, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStickPouch_01', 'LookActorName': 'Enemy_Scrub_Business', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

                } else {

                    call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_StickBag_Medium', 'Price': 40, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStickPouch_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

                }
            } else {

                call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_StickBag_Medium', 'Price': 40, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStickPouch_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

            }
        } else
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_NutBag_Medium', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_NutBag_Medium'}) {

                call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_NutBag_Large', 'Price': 40, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNutsPouch_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

            } else {

                call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_NutBag_Medium', 'Price': 40, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNutsPouch_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
        }
    } else {
        Enemy_Scrub_Business.EventScrubBusinessWriteGameDataHaveTalked({'IsWaitEnd': True})
        if !Enemy_Scrub_Business.EventQueryScrubBusinessTalkType() {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting_00', 'MaintainPerformanceState': 0})
        } else {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting02', 'MaintainPerformanceState': 0})
        }
        goto Event273
    }
}

void SimpleShopSub_Scrub_Business_OneTime() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': False})
    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ASName': 'Talk', 'MessageId': 'SellerMessageId', 'MaintainPerformanceState': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {

            call Dm_SY_GetInEvent.GetInEvent_NotTurn_2DShop({'PriceGameData': 'SimpleShop_Price', 'ASName': 'Talk_Wait', 'Enemy_Scrub_Business': 'Enemy_Scrub_Business', 'ActorName': 'ActorName'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_IsBuy', 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_BuySuccess'})
            if !GameSystemActor.EventQueryIsDreamWorld() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'}) {
                    Event292:
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_025', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    if !GameSystemActor.EventQueryIsDreamWorld() {
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Escape', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTriggerRequestDeath({'DeathReason': 10})
                    } else {
                        GameSystemActor.EventTriggerRequestAutoSave()
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Escape', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTriggerRequestDeath({'DeathReason': 10})
                    }
                }
            } else {
                goto Event292
            }
        } else {
            Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_003'})
            Event291:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess', 'Value': False})
            if !GameSystemActor.EventQueryIsDreamWorld() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'}) {
                    Event277:
                    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_OneTime(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                }
            } else {
                goto Event277
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel', 'Value': True})
        goto Event291
    }
}

void ReturnItemSelect() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel'}) {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData3': 'Enemy_Scrub_Business_Unopened03', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_10'})
        goto Event120
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData3': 'Enemy_Scrub_Business_Unopened03', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_11', 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'MaintainPerformanceState': 1})
        goto Event120
    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData3': 'Enemy_Scrub_Business_Unopened03', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_12', 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'MaintainPerformanceState': 1})
        goto Event120
    }
}

void Enemy_Scrub_Business_Potion() {

    call Enemy_Scrub_Business_Seed({'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Variation_00', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_IrregularVariation_00'})

}

void Enemy_Scrub_Business_Item() {

    call Enemy_Scrub_Business_DlyingUp({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'GameData_Greeting': 'Enemy_Scrub_Business_RedPotion_01_Talk', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

}

void Enemy_Scrub_Business_DlyingUp() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call InitTalk.InitTalk_Enemy_ScrubBusiness({'LookAtInstanceName': '', 'LookAtActorName': 'Enemy_Scrub_Business', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Business")})

    } {
        Enemy_Scrub_Business.EventScrubBusinessTurnAround({'IsWaitEnd': True})
    }


    call Enemy_Scrub_Business_Seed.InitGameData({'OverwriteIndex': 0, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_02', 'Value': 'Item_ScrubBusinessSeed'})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_03', 'Value': ''})

    call Enemy_Scrub_Business_Seed.SetThird({'GameDataName': 'Scrub_Business_TempItemName_00'})

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Enemy_Scrub_Business_Seed.SetFourth({'GameDataName_FirstSale': 'Scrub_Business_TempItemName_00', 'GameDataName': 'Scrub_Business_TempItemName_01'})

    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Shop_ScrubBusiness', 'CommandLife': 0, 'IsReleaseDucking': False})
    if !Enemy_Scrub_Business.EventQueryScrubBusinessIsFirstTalk() {
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'Greeting_01', 'MaintainPerformanceState': 0})
        Event149:

        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_00', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened01'})


        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_01', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened02'})


        call Unopened_Check({'GameData_Item': 'Scrub_Business_TempItemName_02', 'GameDate_Unopend': 'Enemy_Scrub_Business_Unopened03'})

        goto Event119
    } else {
        Enemy_Scrub_Business.EventScrubBusinessWriteGameDataHaveTalked({'IsWaitEnd': True})
        if !Enemy_Scrub_Business.EventQueryScrubBusinessTalkType() {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting_00', 'MaintainPerformanceState': 0})
        } else {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'Greeting02', 'MaintainPerformanceState': 0})
        }
        goto Event149
    }
}

void CanBuy_CheckAll() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_00', 'Value': ''}) {
        Event325:
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': '', 'GameDataName': 'Scrub_Business_TempItemName_01'}) {
            Event327:
            if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': '', 'GameDataName': 'Scrub_Business_TempItemName_02'}) {
                Event392:
                return 4214916587
            } else {
                switchcall CanBuy_Check({'GameDataName': 'Scrub_Business_TempItemName_02'}) {
                  case 4214916587:
                    goto Event392
                  case 620952561:
                    return 620952561
                }
            }
        } else {
            switchcall CanBuy_Check({'GameDataName': 'Scrub_Business_TempItemName_01'}) {
              case 4214916587:
                return 4214916587
              case 620952561:
                goto Event327
            }
        }
    } else {
        switchcall CanBuy_Check({'GameDataName': 'Scrub_Business_TempItemName_00'}) {
          case 4214916587:
            return 4214916587
          case 620952561:
            goto Event325
        }
    }
}

void CanBuy_Check() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_RedPotion', 'GameDataName': 'GameDataName'}) {
        Event332:
        if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
            return 4214916587
        } else {
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_GreenPotion', 'GameDataName': 'GameDataName'}) {
        goto Event332
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_Bug', 'GameDataName': 'GameDataName'}) {
        goto Event332
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Shop_DekuSeedBundle_01', 'GameDataName': 'GameDataName'}) {
        Event342:
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_DekuSeed'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Shop_DekuSeedBundle_02', 'GameDataName': 'GameDataName'}) {
        goto Event342
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuNutBundle_01'}) {
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_DekuStick'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStick'}) {
        Event351:
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_DekuNut'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStickBundle_Medium'}) {
        goto Event351
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Shop_BombBundle_01', 'GameDataName': 'GameDataName'}) {
        Event361:
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Bomb'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Shop_BombBundle_02', 'GameDataName': 'GameDataName'}) {
        goto Event361
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_01'}) {
        Event363:
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Arrow_Normal'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_02'}) {
        goto Event363
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart'}) {
        Event370:
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Obj_Heart'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Heart_Bundle'}) {
        goto Event370
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Shield_Deku'}) {
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Shop_Weapon_Shield_Deku'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombchuBundle_01'}) {
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Bombchu'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_ScrubBusinessSeed'}) {
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_ScrubBusinessSeed'}) {
          case [0, 1]:
            return 4214916587
          case 2:
            return 620952561
        }
    } else
    switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Shop_MagicJar_Small'}) {
      case [0, 1]:
        return 4214916587
      case 2:
        return 620952561
    }
}

void Bottle_Replace() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Letter'}) {
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_RedPotion'}) {
            GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart'})
        } else
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_GreenPotion'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_DinFire'}) {
                GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_MagicJar_Small'})
            } else {
                GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Heart_Bundle'})
            }
        }
    }
}

void Enemy_Scrub_Business_Heart_02() {

    call SimpleShopRoot_Enemy_Scrub_Business_Pouch({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_06', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_05_Irregular'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DeathMountain_Enemy_Scrub_Business_HeartPiece_01'})
    }
}

void Secret() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {

        call InitTalk.InitTalk_Enemy_ScrubBusiness({'LookAtInstanceName': '', 'LookAtActorName': 'Enemy_Scrub_Business', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Business")})

    } {
        Enemy_Scrub_Business.EventScrubBusinessTurnAround({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_BuySuccess'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_ChoicesBool_00', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_ChoicesBool_01', 'Value': False})
    Enemy_Scrub_Business.EventScrubBusinessWriteGameDataBancItemName({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Shop_ScrubBusiness', 'CommandLife': 0, 'IsReleaseDucking': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_IrregularTalk'}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            Event713:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_Success'}) {
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_12'})
                Event8:
                UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
                GameDataActor.EventTriggerSetGameDataString64({'Value': 'Obj_Heart_Piece', 'GameDataName': 'Shop_SelectItemName', 'Index': -1})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Value': True, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': True})
                UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})

                call SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Obj_Heart_Piece', 'Price': 100, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_01', 'LookActorName': 'Enemy_Scrub_Business', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

            } else {
                switchcall FirstTalk_Secret({'GameDataName': 'Enemy_Scrub_Business_Secret_FirstTalkChild'}) {
                  case 2851091674:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_Scrub_Business_Secret_Success'})
                    goto Event8
                }
            }
        } else
        if !Enemy_Scrub_Business.EventQueryScrubBusinessIsFirstTalk() {
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_10'})
        } else {
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_11'})
        }
        Enemy_Scrub_Business.EventScrubBusinessWriteGameDataHaveTalked({'IsWaitEnd': True})
    } else
    if !Player_Event.EventQueryPlayerIsChild() {
        goto Event713
    } else {
        switchcall FirstTalk_Secret({'GameDataName': 'Enemy_Scrub_Business_Secret_FirstTalkAdult'}) {
          case 2851091674:
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_07'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Enemy_Scrub_Business_Secret_IrregularTalk', 'Index': -1, 'Value': True})
        }
    }
}

void FirstTalk_Secret() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_01'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note07'}) {
            Event638:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GameDataName', 'Value': True, 'Index': -1})
            Enemy_Scrub_Business.EventScrubBusinessWriteGameDataHaveTalked({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note07'}) {
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_02', 'ChoiceLabel3': 152, 'ChoiceNumber': 4, 'ChoiceLabel4': 154, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 157, 'ChoiceLabel2': 158})
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case [0, 1]:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_FalseFirst'}) {
                        switch GameSystemActor.EventQueryRandomChoice3() {
                          case 0:
                            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_04_02'})
                            Event641:
                            return 380659055
                          case 1:
                            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_04_03'})
                            goto Event641
                          case 2:
                            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_04_04'})
                            goto Event641
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_Scrub_Business_Secret_FalseFirst'})
                        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_04_01'})
                        goto Event641
                    }
                  case 2:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_06'})
                    return 2851091674
                  case 3:
                    Event636:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_04'})
                    goto Event641
                }
            } else {
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_02', 'ChoiceNumber': 1, 'ChoiceLabel1': 153, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                goto Event636
            }
        } else {
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_09'})
            goto Event641
        }
    } else {
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Secret_00'})
        goto Event638
    }
}

void Enemy_Scrub_Business_Item_SellBug() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_ForcedSellingBug', 'Value': True})

    call Enemy_Scrub_Business_DlyingUp({'Greeting_00': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01', 'Greeting_01': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_02', 'GameData_Greeting': 'Enemy_Scrub_Business_RedPotion_01_Talk', 'Greeting02': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_01_Irregular'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_ForcedSellingBug', 'Value': False})
}
