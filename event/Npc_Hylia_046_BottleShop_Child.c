-------- EventFlow: Npc_Hylia_046_BottleShop_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetSelectBottleInfoToShop', 'EventTriggerBalloonMessage', 'EventTriggerRemoveShopSelectedItemFromBottle', 'EventTriggerIncreaseRupeeBySell', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS']
queries: ['EventQueryCheckLoseMoneyIfSell', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventOpenNumDisplayForShop', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasAnyBottle']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoiceAndSetActorName', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_046_BottleShop_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_051_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

void Talk() {

    call waitNPC_Hylia_046_Hylia_051()


    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_046_BottleShop_HaveTalkedFirestTalk', 'Index': -1}) {
        if !PouchSystemActor.EventQueryHasAnyBottle() {
            Event79:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_046'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BlueFire'}) {

                    call Bottle_BlueFire_FirstTalk()

                    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'HasAnyBottle_Bug', 'ChoiceExcludeGameData1': 'HasAnyBottle_Fish', 'ChoiceExcludeGameData3': 'HasAnyBottle_BlueFire', 'ChoiceExcludeGameData4': 'HasAnySellableBottle_Npc_Hylia_046', 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceActorParam2': 'Pouch_Bottle_Bug', 'ChoiceActorParam3': 'Pouch_Bottle_BlueFire', 'ChoiceActorParam4': '', 'ChoiceActorParam5': '', 'ChoiceActorParam1': 'Pouch_Bottle_Fish'})
                    UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
                    UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': True})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
                    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 1})
                    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        Event119:
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 4, 'BoolValue': False})

                        Npc_EventStarter.EventTriggerSetSelectBottleInfoToShop({'BottleItem': 4})
                        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                        call Sell_AfterCheckingLoseMoney({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_12', 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_05'})

                      case 1:
                        Event120:
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 8, 'BoolValue': False})

                        Npc_EventStarter.EventTriggerSetSelectBottleInfoToShop({'BottleItem': 8})
                        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                        call Sell_AfterCheckingLoseMoney({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_13', 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_06'})

                      case 2:
                        Event121:
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})

                        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 3, 'BoolValue': False})

                        Npc_EventStarter.EventTriggerSetSelectBottleInfoToShop({'BottleItem': 3})
                        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                        call Sell_AfterCheckingLoseMoney({'MessageId_IfLose': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_11', 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_04'})

                      case 3:
                        Event13:

                        call DontSell()

                    }
                } else {
                    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'HasAnyBottle_Bug', 'ChoiceExcludeGameData1': 'HasAnyBottle_Fish', 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'ChoiceActorParam2': 'Pouch_Bottle_Bug', 'ChoiceActorParam4': '', 'ChoiceActorParam5': '', 'ChoiceActorParam1': 'Pouch_Bottle_Fish', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'HasAnySellableBottle_Npc_Hylia_046', 'IsInvertGameData4': False, 'ChoiceActorParam3': ''})
                    UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
                    UISystemActor.EventOpenNumDisplayForShop({'ShopType': 2, 'IsWaitEnd': True, 'IsNeedMaxNum': True})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
                    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 5, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 1})
                    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event119
                      case 1:
                        goto Event120
                      case 2:
                        goto Event13
                    }
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BlueFire'}) {

                call Bottle_BlueFire_FirstTalk()

            }
            Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BlueFire'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_21', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_21_2', 'MaintainPerformanceState': 0})
                }
            } else
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_18', 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_23', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_02', 'MaintainPerformanceState': 0})
        }
    } else {

        call FirstTalk()

    }
}

void Sell_InputReturn_AfterSell() {
    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'HasAnyBottle_Bug', 'ChoiceExcludeGameData1': 'HasAnyBottle_Fish', 'ChoiceExcludeGameData3': 'HasAnyBottle_BlueFire', 'ChoiceExcludeGameData4': 'HasAnySellableBottle_Npc_Hylia_046', 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceActorParam2': 'Pouch_Bottle_Bug', 'ChoiceActorParam3': 'Pouch_Bottle_BlueFire', 'ChoiceActorParam4': '', 'ChoiceActorParam5': '', 'ChoiceActorParam1': 'Pouch_Bottle_Fish'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_27', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 1})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        goto Event119
      case 1:
        goto Event120
      case 2:
        goto Event121
      case 3:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call DontSell()

        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void Sell_AfterCheckingLoseMoney() {
    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    switch Npc_EventStarter.EventQueryCheckLoseMoneyIfSell() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'MessageId_IfLose', 'MaintainPerformanceState': 1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_14', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
            } {

                call NpcCommon.ShowItem_Sell({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_15', 'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 120})

            }

            Event134:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_EventStarter.EventTriggerIncreaseRupeeBySell()
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_046'}) {

                call Sell_InputReturn_AfterSell()

            } else {
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_22', 'MaintainPerformanceState': 0})
                GameSystemActor.EventTriggerRequestAutoSave()
            }
        } else {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_26'})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'MessageId_IfLose', 'MaintainPerformanceState': 1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_16', 'ChoiceLabel1': 0, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 1})
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
            } {

                call NpcCommon.ShowItem_Sell({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_17', 'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 120})

            }

            goto Event134
        } else {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_25'})

            Event27:
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HasAnySellableBottle_Npc_Hylia_046'}) {

                call Sell_InputReturn()

            } else {
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_22', 'MaintainPerformanceState': 0})
            }
        }
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 5, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 1})
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_EventStarter.EventTriggerRemoveShopSelectedItemFromBottle()
            } {

                call NpcCommon.ShowItem_Sell({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_28', 'NpcReceiveASName': 'Receive', 'NpcReceiveAnimeFrames': 120})

            }

            goto Event134
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_18'})

        } else {

            call NpcCommon.ShowItem_Cancel({'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_23'})

        }
        goto Event27
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Npc_Hylia_051_Adult_ArrivedAction2'}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_07'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_08'})
        }
    } else
    if !EventWorldManagerController.EventQueryTimeDivision() {
        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_01'})
          case 1:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_02'})
          case 2:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_03'})
        }
    } else
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_04'})
      case 1:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_05'})
      case 2:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Near_06'})
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
            Event34:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_046_Child_GlassTruth'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_046_Child_GlassTruth'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:GlassTruth', 'MaintainPerformanceState': 0})
            }
        } else {
            Event48:
            switchcall Mask_Talk() {
              case fnv1a("Mask_Talk"):
                Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                    Npc_Hylia_046_BottleShop_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                }
                Npc_Hylia_046_BottleShop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_10', 'MaintainPerformanceState': 0, 'ASName': ''})
            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        goto Event34
    } else {
        goto Event48
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_09', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_103', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Mask_101', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void FirstTalk() {
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BlueFire'}) {
            Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_30', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_046_BottleShop_Child_Bottle_BlueFire_FirstTalk_Event130', 'Value': True, 'Index': -1})
            Event155:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_046_BottleShop_HaveTalkedFirestTalk'})
            if !PouchSystemActor.EventQueryHasAnyBottle() {
                goto Event79
            } else {
                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_32', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_30_2', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_046_BottleShop_Child_FirstTalk_Event60', 'Value': True, 'Index': -1})
            goto Event155
        }
    } else {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_33', 'MaintainPerformanceState': 0})
    }
}

void DontSell() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_18', 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_23', 'MaintainPerformanceState': 0})
    }
}

void Sell_InputReturn() {
    GameDataActor.EventTriggerExcludeNextTalkChoiceAndSetActorName({'ChoiceExcludeGameData5': '', 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'HasAnyBottle_Bug', 'ChoiceExcludeGameData1': 'HasAnyBottle_Fish', 'ChoiceExcludeGameData3': 'HasAnyBottle_BlueFire', 'ChoiceExcludeGameData4': 'HasAnySellableBottle_Npc_Hylia_046', 'IsInvertGameData1': True, 'IsInvertGameData2': True, 'IsInvertGameData3': True, 'IsInvertGameData4': True, 'ChoiceActorParam2': 'Pouch_Bottle_Bug', 'ChoiceActorParam3': 'Pouch_Bottle_BlueFire', 'ChoiceActorParam4': '', 'ChoiceActorParam5': '', 'ChoiceActorParam1': 'Pouch_Bottle_Fish'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 9, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_34', 'MaintainPerformanceState': 1})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        goto Event119
      case 1:
        goto Event120
      case 2:
        goto Event121
      case 3:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        goto Event13
    }
}

void Bottle_BlueFire_FirstTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_046_BottleShop_Child_FirstTalk_Event60', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_046_BottleShop_Child_Bottle_BlueFire_FirstTalk_Event130', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_046_BottleShop_Child:Talk_101', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_046_BottleShop_Child_Bottle_BlueFire_FirstTalk_Event130', 'Value': True, 'Index': -1})
    }
}

void waitNPC_Hylia_046_Hylia_051() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_051_Adult_ArrivedAction2', 'Index': -1}) {
        Npc_Hylia_051_Adult.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_Hylia_051_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
}
