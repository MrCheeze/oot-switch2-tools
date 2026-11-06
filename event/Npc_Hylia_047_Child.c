-------- EventFlow: Npc_Hylia_047_Child --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryGameDataIntBranch', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTriggerLookAtObject']
queries: ['EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MagicBean_Talked', 'Index': -1, 'Value': True})

    call Mask_All()

    switchcall NpcCommon.CheckAlreadyMaskTalked() {
      case 0x4deaea8c:
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_00', 'MaintainPerformanceState': 0})
        }
        Event0:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Get_MagicBeans'}) {
          case 0:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_01', 'Price': 10, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_01'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'Price': 10, 'MinusRupeeValue': -10, 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_12', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16'})

          case 1:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_02', 'Price': 20, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_02_01'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'Price': 20, 'MinusRupeeValue': -20, 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_101'})

          case 2:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_03', 'Price': 30, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_03_01'})


            call AfterPaymentTalk_Random({'Price': 30, 'MinusRupeeValue': -30})

          case 3:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_04', 'Price': 40, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_00_04_01'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'Price': 40, 'MinusRupeeValue': -40, 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_102'})

          case 4:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_04', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_04_01', 'Price': 50, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_04_02'})


            call AfterPaymentTalk_Random({'Price': 50, 'MinusRupeeValue': -50})

          case 5:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_05', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_05_01', 'Price': 60, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_05_02'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'Price': 60, 'MinusRupeeValue': -60, 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_103'})

          case 6:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_06', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_06_01', 'Price': 70, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_06_02'})


            call AfterPaymentTalk_Random({'Price': 70, 'MinusRupeeValue': -70})

          case 7:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_07', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_07_01', 'Price': 80, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_07_02'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'Price': 80, 'MinusRupeeValue': -80, 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_104'})

          case 8:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_08', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_08_01', 'Price': 90, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_08_02'})


            call AfterPaymentTalk_Random({'Price': 90, 'MinusRupeeValue': -90})

          case 9:

            call SellBeans({'MessageId_01': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_09', 'MessageId_02': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_09_01', 'Price': 100, 'MessageId_03': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_09_02'})


            call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'Price': 100, 'MinusRupeeValue': -100, 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_105'})

          case 10:
            if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_14', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_17', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_13', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_26', 'ASName': '', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
            }
        }
      case 0x2fe33985:
        goto Event0
    }
}

void Near() {
    if GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Get_MagicBeans'}) in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_047_Child:Balloon_00', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 150})
    }
}

void SellBeans() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SimpleShop_Price', 'Value': 'Price'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_MagicBean_After', 'Index': -1}) {
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'MessageId': 'MessageId_03', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'MessageId_01', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'MessageId': 'MessageId_02', 'MaintainPerformanceState': 0})
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_047_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_047_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:GlassTruth', 'ASName': '', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case fnv1a("Mask_Talk"):
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_SettingAllAS({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_047_Child:Mask_103', 'ASName': 'Act_Eat'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void AfterPaymentTalk_Random() {
    if !GameSystemActor.EventQueryRandomChoice2() {

        call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Price': 'Price', 'MinusRupeeValue': 'MinusRupeeValue', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_106'})

    } else {

        call SimpleShop.SimpleShopRoot_3Choices({'ShopCancel_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'LackRupee_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_11', 'FullofPouche_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_10', 'ActorName': 'Item_MagicBean', 'ChoiceLabel1': 1, 'ChoiceLabel3': 2, 'ChoiceLabel2': 0, 'DeleteChoice_GameDataName': 'MagicBean_Explanation', 'ProgressBranch_GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Description_DMessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Arg_ASName': 'Act_Eat', 'Description_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_16', 'Price': 'Price', 'MinusRupeeValue': 'MinusRupeeValue', 'Payment_MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_107'})

    }
}
