-------- EventFlow: Enemy_Scrub_Business_Dream --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub']
queries: ['EventQueryIsGameDataString64', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Business
entrypoint: None()
actions: ['EventTalk', 'EventScrubBusinessOnIsFinishDoEvent', 'EventScrubBusinessTurnAround', 'EventScrubBusinessWriteGameDataBancItemName']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveFromSpecificBottle', 'EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryHasRuppe', 'EventQueryIsAnyBottleEmpty', 'EventQueryCanAddToPorch', 'EventQueryIsExistInPouch', 'EventQueryHasAnyBottle']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge', 'EventCloseRupeeDisplay', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventOpenNumDisplayForShop']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)]
entrypoint: Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)
actions: ['EventTalk', 'EventEnemyTurnToPlayer', 'EventPlayAS']
queries: []
params: None

Actor: Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)]
entrypoint: SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)
actions: ['EventTalk', 'EventScrubBusinessOnIsFinishDoEvent', 'EventPlayAS', 'EventTriggerRequestDeath']
queries: []
params: None

void Variable() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_RedPotion'}) {

        call Shop_Scrub_Dream_Bottle({'Item': 0, 'DisplayActor': 'Item_Bottle_RedPotion', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_RedPotion_01', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_GreenPotion'}) {

        call Shop_Scrub_Dream_Bottle({'Item': 1, 'DisplayActor': 'Item_Bottle_GreenPotion', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_GreenPotion_01', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_Bug'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Bottle({'Item': 8, 'DisplayActor': 'Item_Bottle_Bug', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Insect_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 100})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Bottle_BluePotion'}) {

        call Shop_Scrub_Dream_Bottle({'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_GreenPotion_01', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Item': 2, 'Price': 200, 'DisplayActor': 'Item_Bottle_BluePotion'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuSeedBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Price': 30, 'Actor': 'Shop_DekuSeedBundle_01', 'NecessaryActor': 'Item_BulletBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuSeed_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuSeedBundle_02'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BulletBag_Small', 'Price': 15, 'Actor': 'Shop_DekuSeedBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuSeed_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuNutBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Shop_DekuNutBundle_01', 'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNuts_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 120})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStick'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 10, 'Actor': 'Shop_DekuStick', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStick_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuStickBundle_Medium'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuStick_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Shop_DekuStickBundle_Medium', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 120})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Item_BombBundle_Small', 'NecessaryActor': 'Item_BombBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Price': 120, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_02'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BombBag_Small', 'Price': 60, 'Actor': 'Shop_BombBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Arrow_01', 'Price': 20, 'Actor': 'Shop_ArrowBundle_01', 'NecessaryActor': 'Item_Quiver_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_ArrowBundle_02'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Quiver_Small', 'Actor': 'Shop_ArrowBundle_02', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Arrow_02', 'Price': 50, 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 5, 'Actor': 'Shop_Heart', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_02', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Heart_Bundle'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Heart_03', 'Actor': 'Shop_Heart_Bundle', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_021', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_023', 'Price': 30, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Weapon_Shield_Deku'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 40, 'Actor': 'Shop_Weapon_Shield_Deku', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Shield_Deku_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombchuBundle_01'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_BombBag_Small', 'Price': 100, 'Actor': 'Shop_BombchuBundle_01', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bombchu_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_ScrubBusinessSeed'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 30, 'Actor': 'Obj_ScrubBusinessSeed', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_BusinessSeed_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_Weapon_Shield_Hylian'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'Price': 40, 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Shop_Weapon_Shield_Hylian', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Dream_01'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart_Container'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DreamBossStage_Enemy_GerudoThief_01', 'Index': -1}) {
            Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'Talk', 'ChoiceNumber': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_17', 'MaintainPerformanceState': 0})
        } else {

            call HeartContainer()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DreamBossStage_Enemy_GerudoThief_01', 'Index': -1, 'Value': True})
            }
        }
    } else {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Shop_MagicJar_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Magic_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_022', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_024', 'NecessaryActor': 'Item_DinFire', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 30})

    }
}

void Variable_OneTime() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Obj_Heart_Container'}) {

        call HeartContainer()

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'Actor': 'Item_BombBundle_Small', 'NecessaryActor': 'Item_BombBag_Small', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Bomb_01', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Longshot'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_Longshot', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_12', 'Price': 50, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuNutBundle_01'}) {

        call SimpleShopSub_Scrub_Business_Seed_Consume({'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'NecessaryActor': 'Item_NutBag_Small', 'Actor': 'Shop_DekuNutBundle_01', 'SellerMessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_DekuNuts_01', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business")})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Sword_Giant'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Shop_Sword_Giant', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_16', 'Price': 300, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Sword_Biggoron'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_Sword_Biggoron', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_07', 'Price': 1000, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Arrow_Fire'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_Arrow_Fire', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_04', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Arrow_Ice'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_Arrow_Ice', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_05', 'Price': 100, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_DinFire'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_DinFire', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_03', 'Price': 150, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_NayruLove'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_NayruLove', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_06', 'Price': 300, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_GlassTruth'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'ActorName': 'Item_GlassTruth', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_15', 'Price': 50, 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_Adult_HoverBoot'}) {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_14', 'Price': 50, 'ActorName': 'Item_HoverBoot', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    } else
    if GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_Adult__HeavyBoot'}) in [0, 1] {

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_OneTime({'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_13', 'Price': 50, 'ActorName': 'Item_HeavyBoot', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'LookActorName': 'Enemy_Scrub_Business'})

    }
}

void HeartContainer() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 2}) {
      case [0, 1]:

        call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Obj_Heart_Container', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 200})

      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 4}) {
          case [0, 1]:

            call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Obj_Heart_Container', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 250})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Index': -1, 'Value': 6}) {
              case [0, 1]:

                call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Obj_Heart_Container', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 300})

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DreamWorld_BossRushBossCount', 'Index': -1, 'Value': 9}) {
                  case 0:

                    call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Obj_Heart_Container', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 350})

                  case [1, 2]:

                    call Enemy_Scrub_Business_Common.SimpleShopSub_Scrub_Business_Seed_Consume({'NecessaryActor': 'Item_Wallet_Small', 'PouchFull_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_004', 'PouchEnough_MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_007', 'Actor': 'Obj_Heart_Container', 'SellerMessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_02', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'Price': 400})

                }
            }
        }
    }
}

void Shop_Scrub_Dream_Bottle() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ASName': 'Talk', 'MessageId': 'SellerMessageId', 'MaintainPerformanceState': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
                Event81:

                call Dm_SY_GetInEvent.GetInEventInBottle_2DShop({'PriceGameData': 'SimpleShop_Price', 'ActorName': 'DisplayActor', 'BottleItem': 'Item', 'Npc_EventStarter': 'Enemy_Scrub_Business', 'ASName': 'Talk_Wait'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_BuySuccess'})
                Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)].EventEnemyTurnToPlayer({'IsWaitEnd': True})
                Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk', 'IsWaitEnd': False})
            } else {
                Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': 'Talk', 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_09', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    fork {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 0})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 1})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 2})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 4})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 7})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 10})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 11})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 8})
                    } {
                        PouchSystemActor.EventTriggerRemoveFromSpecificBottle({'Item': 9})
                    }

                    goto Event81
                } else {
                    Event95:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
                }
            }
        } else {
            Enemy_Scrub_Business[Shop_Scrub_Dream_Bottle(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_10', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
            goto Event95
        }
    } else {
        goto Event95
    }
}

void Bottle_Shop() {
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
    Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_00', 'MaintainPerformanceState': 0})
    if !PouchSystemActor.EventQueryHasAnyBottle() {
        Event92:
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_09', 'ASName': 'Talk', 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel1': 101, 'MaintainPerformanceState': 1})
        Event124:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable({'GameDataName': 'Scrub_Business_TempItemName_00'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                Event129:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_005', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                Event132:
                switch GameSystemActor.EventQueryRandomChoice4() {
                  case 0:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_002', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    Event141:
                    Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                  case 1:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_014', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event141
                  case 2:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_015', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event141
                  case 3:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_016', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event141
                }
            } else {
                Event39:

                call ReturnItemSelect()

            }
          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable({'GameDataName': 'Scrub_Business_TempItemName_01'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                goto Event129
            } else {
                goto Event39
            }
          case 2:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable({'GameDataName': 'Scrub_Business_TempItemName_02'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                goto Event129
            } else {
                goto Event39
            }
          case 3:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
                goto Event132
            } else
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_017', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                Event142:
                Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
              case 1:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event142
              case 2:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_019', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event142
              case 3:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_020', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event142
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 0})
        Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_18', 'MaintainPerformanceState': 0})

        call Dm_SY_GetInEvent.GetInEvent_NotTurn_2DShop({'ASName': 'Talk_Wait', 'ActorName': 'Item_Bottle', 'Enemy_Scrub_Business': ActorIdentifier(name="Enemy_Scrub_Business"), 'PriceGameData': 'SimpleShop_Price'})

        Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_19', 'MaintainPerformanceState': 0})
        goto Event92
    }
}

void SimpleShopSub_Scrub_Business_Seed_Consume() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ASName': 'Talk', 'MessageId': 'SellerMessageId', 'MaintainPerformanceState': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'NecessaryActor'}) {
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
                switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Actor'}) {
                  case 0:
                    Event187:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False, 'Index': -1})
                    if PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'NecessaryActor'}) {
                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'Actor': 'NecessaryActor', 'IsEquipDIrect': False, 'IsGetEvent': False, 'IsSetMessageTargetActorName': False})
                    }

                    call Dm_SY_GetInEvent.GetInEvent_NotTurn_2DShop({'ASName': 'Talk_Wait', 'ActorName': 'Actor', 'Enemy_Scrub_Business': 'Enemy_Scrub_Business', 'PriceGameData': 'SimpleShop_Price'})

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ScrubBusiness_BuySuccess'})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'}) {
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_025', 'MaintainPerformanceState': 0})
                        UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Escape', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTriggerRequestDeath({'DeathReason': 10})
                    }
                  case 1:
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 2, 'ASName': 'Talk', 'MessageId': 'PouchEnough_MessageId', 'ChoiceLabel1': 1, 'MaintainPerformanceState': 1})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event187
                    } else {
                        Event184:
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess', 'Value': False})
                        UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UI_IsShopRecoveryNotice'})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                        Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                    }
                  case 2:
                    Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'PouchFull_MessageId', 'MaintainPerformanceState': 0})
                    goto Event184
                }
            } else {
                Event171:
                Enemy_Scrub_Business[SimpleShopSub_Scrub_Business_Seed_Consume(Enemy_Scrub_Business)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Seed_10', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event184
            }
        } else
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            goto Event187
        } else {
            goto Event171
        }
    } else {
        goto Event184
    }
}

void ReturnItemSelect() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_12', 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel1': 101, 'MaintainPerformanceState': 1})
    goto Event124
}

void Onetime_Shop() {
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
    Enemy_Scrub_Business.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_01', 'MaintainPerformanceState': 0})
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})

    call Onetime_NoItemCheck()

    UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Container', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
        Event196:

        call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_00'})

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'}) {
        Event190:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem01'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem02'}) {

                call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_02'})

            } else {

                call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_01'})

            }
        } else {
            goto Event196
        }
    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'DreamWorld_Scrub_Dream_SoldItem01', 'ChoiceExcludeGameData2': 'DreamWorld_Scrub_Dream_SoldItem02', 'ChoiceExcludeGameData3': 'DreamWorld_Scrub_Dream_SoldItem03'})
        Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_09', 'ASName': 'Talk', 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel1': 101, 'MaintainPerformanceState': 1})
        Event208:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_00'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem01', 'Value': True})
            }
            Event241:

            call ReturnItemSelect_Onetime()

          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_01'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem02'})
            }
            goto Event241
          case 2:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

            call Variable_OneTime({'GameDataName': 'Scrub_Business_TempItemName_02'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem03'})
            }
            goto Event241
          case 3:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
            UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ScrubBusiness_BuySuccess'}) {
                switch GameSystemActor.EventQueryRandomChoice4() {
                  case 0:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_002', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    Event222:
                    Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
                  case 1:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_014', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event222
                  case 2:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_015', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event222
                  case 3:
                    Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_016', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                    goto Event222
                }
            } else
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_017', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                Event223:
                Enemy_Scrub_Business.EventScrubBusinessOnIsFinishDoEvent({'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
              case 1:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_018', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event223
              case 2:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_019', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event223
              case 3:
                Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_020', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
                goto Event223
            }
        }
    }
}

void ReturnItemSelect_Onetime() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem02'}) {
            Event199:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'})
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Scrub_Business_Dream:Talk_17', 'MaintainPerformanceState': 0})
            goto Event190
        } else
        Event198:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem03'}) {
            goto Event199
        } else
        Event232:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubBusiness_BuySuccess', 'Index': -1}) {
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Common_005', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'DreamWorld_Scrub_Dream_SoldItem01', 'ChoiceExcludeGameData2': 'DreamWorld_Scrub_Dream_SoldItem02', 'ChoiceExcludeGameData3': 'DreamWorld_Scrub_Dream_SoldItem03'})
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_11', 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel1': 101, 'MaintainPerformanceState': 1})
            goto Event208
        } else {
            GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorNameForScrub({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'DreamWorld_Scrub_Dream_SoldItem01', 'ChoiceExcludeGameData2': 'DreamWorld_Scrub_Dream_SoldItem02', 'ChoiceExcludeGameData3': 'DreamWorld_Scrub_Dream_SoldItem03'})
            Enemy_Scrub_Business.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 50, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Business_Greeting_12', 'ChoiceLabel2': 102, 'ChoiceLabel3': 103, 'ChoiceLabel1': 101, 'MaintainPerformanceState': 1})
            goto Event208
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem02'}) {
        goto Event198
    } else
    goto Event232
}

void Onetime_NoItemCheck() {
    if GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Container', 'GameDataName': 'Scrub_Business_TempItemName_00'}) {
        switchcall Iteem_Check_Onetime({'GameDataName': 'Scrub_Business_TempItemName_01'}) {
          case 3013883440:
            switchcall Iteem_Check_Onetime({'GameDataName': 'Scrub_Business_TempItemName_02'}) {
              case 1642511898:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem03'})
            }
          case 1642511898:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem02'})
            switchcall Iteem_Check_Onetime({'GameDataName': 'Scrub_Business_TempItemName_02'}) {
              case 1642511898:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_SoldItem03'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_Scrub_Dream_OneItem'})
            }
        }
    }
}

void Iteem_Check_Onetime() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_Heart_Container', 'GameDataName': 'GameDataName'}) {
        Event273:
        return 3013883440
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_BombBundle_01'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Longshot'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Shop_DekuNutBundle_01'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Sword_Giant'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Weapon_Sword_Biggoron'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Arrow_Fire'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_Arrow_Ice'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_DinFire'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Item_NayruLove'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_GlassTruth'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_Adult_HoverBoot'}) {
        goto Event273
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'GameDataName', 'Value': 'Armor_Adult__HeavyBoot'}) {
        goto Event273
    } else {
        return 1642511898
    }
}
