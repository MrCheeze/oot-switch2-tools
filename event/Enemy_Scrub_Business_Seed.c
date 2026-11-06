-------- EventFlow: Enemy_Scrub_Business_Seed --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataString64', 'EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataString64', 'EventQueryIsEmptyGameDataString64', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerZeldaNotesAddUseScrubBusiness']
queries: ['EventQueryTalkChoice8', 'EventQueryRandomChoice4', 'EventQueryRandomChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsAnyBottleEmpty']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerSetDisplayHeartGauge', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventOpenNumDisplayForShop']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerThrowScurbBusinessSeed']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Enemy_Scrub_Business_Seed[seed]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventScrubBusinessSeedAppear', 'EventTriggerRequestDeath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Business[InitGameData(Enemy_Scrub_Business)]
entrypoint: InitGameData(Enemy_Scrub_Business)
actions: ['EventScrubBusinessWriteGameDataLeastItemName']
queries: []
params: None

void Enemy_Scrub_Business_Seed_01() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_Seed_IsShopping', 'Value': True})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsAppear_GanondorfDeadBody'}) {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード長い)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_ScrubBusinessSeed', 'Num': -1, 'IsGetEvent': False})

    fork {
        Player_Event.EventPlayerThrowScurbBusinessSeed({'IsWaitEnd': True})
    } {
        Enemy_Scrub_Business_Seed[seed].EventScrubBusinessSeedAppear({'IsWaitEnd': True})
    }

    Enemy_Scrub_Business_Seed[seed].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Event_Appear_Wait', 'IsWaitEnd': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsAppear_GanondorfDeadBody'}) {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Shop_ScrubBusiness', 'CommandLife': 0, 'IsReleaseDucking': False})
    }

    call InitGameData({'OverwriteIndex': 2, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})


    call InitTalk.InitTalk_Enemy_ScrubBusiness({'LookAtInstanceName': 'seed', 'LookAtActorName': 'Enemy_Scrub_Business_Seed', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_00', 'Value': 'Item_Bottle_RedPotion'})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_01', 'Value': 'Item_Bottle_GreenPotion'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Enemy_Scrub_Business_Common.Bottle_Replace({'GameDataName': 'Scrub_Business_TempItemName_01'})

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Unopened01', 'Value': False})

    call MagicCheck()


    call SetThird({'GameDataName': 'Scrub_Business_TempItemName_02'})

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call SetFourth({'GameDataName_FirstSale': 'Scrub_Business_TempItemName_02', 'GameDataName': 'Scrub_Business_TempItemName_03'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Scrub_Business_Seed_FirstTalk', 'Index': -1}) {

        call Greeting()

        switchcall CheckBottle() {
          case 1087347522:
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
            UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
            UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': ''})

            call ChoiceTalk_Normal()

            Event57:
            switch GameSystemActor.EventQueryTalkChoice8() {
              case 0:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                call Variable({'GameData_LeastItem': 'Scrub_Business_TempItemName_00'})

                Event23:

                call ReturnItemSelect()

              case 1:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                call Variable({'GameData_LeastItem': 'Scrub_Business_TempItemName_01'})

                goto Event23
              case 2:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                call Variable({'GameData_LeastItem': 'Scrub_Business_TempItemName_02'})

                goto Event23
              case 3:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                call Variable({'GameData_LeastItem': 'Scrub_Business_TempItemName_03'})

                goto Event23
              case 4:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                fork {
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                } {
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                }

                UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                Event88:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_Seed_IsShopping', 'Value': False})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_IsBuy'}) {
                    Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_08', 'ASName': 'Talk', 'MaintainPerformanceState': 0})

                    fork {
                        GameSystemActor.EventTriggerZeldaNotesAddUseScrubBusiness({'Frame': 0})
                    } {
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'ScrubBusiness_UseNum', 'Index': -1, 'Value': 0})
                    }

                    Event69:
                    Enemy_Scrub_Business_Seed[seed].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Event_Disappear', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Enemy_Scrub_Business_Seed[seed].EventTriggerRequestDeath({'DeathReason': 10})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                } else
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'ScrubBusiness_UseNum', 'Value': 7}) {
                  case 0:
                    Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_09', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_ScrubBusinessSeed', 'IsGetEvent': False})
                    Event44:
                    Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_13', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'ScrubBusiness_UseNum', 'Value': 1, 'Index': -1})
                    goto Event69
                  case [1, 2]:
                    Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_14', 'MaintainPerformanceState': 0})
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_ScrubBusinessSeed', 'IsGetEvent': False})
                    goto Event44
                }
            }
          case 2554984776:
            Event184:

            call CloseShop()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Enemy_Scrub_Business_Seed_FirstTalk', 'Index': -1, 'Value': True})
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_01', 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel4': 104, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0})
        switchcall CheckBottle() {
          case 1087347522:
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
            UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
            UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': ''})
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03', 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MaintainPerformanceState': 1})
            goto Event57
          case 2554984776:
            goto Event184
        }
    }
}

void Variable() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_RedPotion', 'GameDataName': 'GameData_LeastItem'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'Item': 0, 'DisplayActor': 'Item_Bottle_RedPotion', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_RedPotion_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_GreenPotion', 'GameDataName': 'GameData_LeastItem'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_GreenPotion_01', 'Item': 1, 'DisplayActor': 'Item_Bottle_GreenPotion', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Item_Bottle_Bug', 'GameDataName': 'GameData_LeastItem'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Bottle({'Price': 30, 'Item': 8, 'DisplayActor': 'Item_Bottle_Bug', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Insect_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_BombBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 35, 'Actor': 'Item_BombBundle_Small', 'NecessaryActor': 'Item_BombBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_01', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_DekuNutBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 20, 'Actor': 'Shop_DekuNutBundle_01', 'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNuts_01', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_DekuStickBundle_Medium'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStick_01', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Price': 40, 'Actor': 'Shop_DekuStickBundle_Medium', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_DekuSeedBundle_02'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BulletBag_Small', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Shop_DekuSeedBundle_02', 'Price': 15, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuSeed_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_ArrowBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Arrow_01', 'Price': 20, 'Actor': 'Shop_ArrowBundle_01', 'NecessaryActor': 'Item_Quiver_Small', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Shop_BombchuBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BombBag_Small', 'Price': 100, 'Actor': 'Shop_BombchuBundle_01', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bombchu_01', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Weapon_Shield_Deku'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 40, 'Actor': 'Shop_Weapon_Shield_Deku', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Shield_Deku_01', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed"), 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_11'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameData_LeastItem', 'Value': 'Obj_Heart'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Actor': 'Shop_Heart', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Price': 10, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Shop_Heart_Bundle', 'GameDataName': 'GameData_LeastItem'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_03', 'Actor': 'Shop_Heart_Bundle', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Price': 20, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    } else {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Shop_MagicJar_Small', 'Price': 10, 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Magic_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_022', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_024', 'NecessaryActor': 'Item_DinFire', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business_Seed", sub_name="seed")})

    }
}

void SetThird() {
    if !GameDataActor.EventQueryIsEmptyGameDataString64({'Index': -1, 'GameDataName': 'GameDataName'}) {
        GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'Value': 'Shop_DekuNutBundle_01', 'GameDataName': 'GameDataName'})
    }
}

void SetFourth() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_Seed_IsShopping'}) {
        Event6:
        if !GameDataActor.EventQueryIsEmptyGameDataString64({'Index': -1, 'GameDataName': 'GameDataName'}) {
            Event121:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle'}) {
                Event12:
                GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'Value': 'Item_Bottle_Bug', 'GameDataName': 'GameDataName'})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Letter'}) {
                goto Event12
            } else
            if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName_FirstSale', 'Value': 'Shop_DekuNutBundle_01'}) {
                GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'Value': 'Shop_DekuStickBundle_Medium', 'GameDataName': 'GameDataName'})
            } else {
                GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'Value': 'Shop_DekuNutBundle_01', 'GameDataName': 'GameDataName'})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_ForcedSellingSticks'}) {
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName_FirstSale', 'Value': 'Shop_DekuStickBundle_Medium'}) {
            goto Event6
        } else {
            GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'Value': 'Shop_DekuStickBundle_Medium', 'GameDataName': 'GameDataName'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_ForcedSellingBug'}) {
        goto Event121
    } else
    goto Event6
}

void InitGameData() {
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_00', 'Value': ''})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_01', 'Value': ''})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_02', 'Value': ''})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_03', 'Value': ''})
    Enemy_Scrub_Business[InitGameData(Enemy_Scrub_Business)].EventScrubBusinessWriteGameDataLeastItemName({'IsWaitEnd': True, 'OverwriteIndex': 'OverwriteIndex'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_BuySuccess'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ScrubBusiness_IsBuy'})
}

void ReturnItemSelect() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuyCancel'}) {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': ''})
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_05'})
        goto Event57
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': ''})
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_04'})
        goto Event57
    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData1': 'Enemy_Scrub_Business_Unopened01', 'ChoiceExcludeGameData2': 'Enemy_Scrub_Business_Unopened02', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': ''})
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_06'})
        goto Event57
    }
}

void Greeting() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'ScrubBusiness_UseNum', 'Value': 7}) {
      case 0:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02', 'ChoiceNumber': 0, 'ASName': 'Talk', 'MaintainPerformanceState': 0})
          case 1:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_01', 'MaintainPerformanceState': 0})
          case 2:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_02', 'MaintainPerformanceState': 0})
        }
      case 1:
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_03', 'MaintainPerformanceState': 0})
      case 2:
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_04', 'MaintainPerformanceState': 0})
    }
}

void ChoiceTalk_Normal() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'ScrubBusiness_UseNum', 'Value': 7}) {
      case 0:
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03_01', 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MaintainPerformanceState': 1})
          case 1:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03_02', 'MaintainPerformanceState': 1})
          case 2:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03_03', 'MaintainPerformanceState': 1})
          case 3:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03_04', 'MaintainPerformanceState': 1})
        }
      case [1, 2]:
        Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 101, 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceNumber': 5, 'ASName': 'Talk', 'ChoiceLabel4': 104, 'EndDialogOption': 3, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_03_05', 'MaintainPerformanceState': 1})
    }
}

void MagicCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Arrow_Fire'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Arrow_Ice'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Arrow_Light'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Armor_GlassTruth'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FaroreWind'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FairyBless_MPDouble'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_NayruLove'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_DinFire'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_MP', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'Scrub_Business_TempItemName_01', 'Value': 'Shop_Heart_Bundle'})
    }
}

void Bottle() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle'}) {
        Event157:
        if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
            return 2246359087
        } else {
            return 2141585244
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Letter'}) {
        goto Event157
    } else {
        return 1642511898
    }
}

void CheckBottle() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'ScrubBusiness_UseNum', 'Value': 7}) {
      case 0:
        switchcall Bottle() {
          case 2141585244:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_Seed_FullBottle'}) {
                Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_06'})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event180:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_Seed_OpenShop_FullBottle'})
                    return 1087347522
                } else {
                    Event169:
                    return 2554984776
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_Seed_FullBottle'})
                Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_05', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event180
                } else {
                    goto Event169
                }
            }
          case [2246359087, 1642511898]:
            Event181:
            return 1087347522
        }
      case 1:
        switchcall Bottle() {
          case 2141585244:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_07'})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event180
            } else {
                goto Event169
            }
          case [2246359087, 1642511898]:
            goto Event181
        }
      case 2:
        switchcall Bottle() {
          case 2141585244:
            Enemy_Scrub_Business_Seed[seed].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_02_08'})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event180
            } else {
                goto Event169
            }
          case [2246359087, 1642511898]:
            goto Event181
        }
    }
}

void CloseShop() {
    goto Event88
}
