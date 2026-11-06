-------- EventFlow: SimpleShop --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddGameDataIntToRupee', 'EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryHasRuppe', 'EventQueryCanAddToPorch', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetMessageLogDisableSectionEnd', 'EventTriggerCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Heart_Piece[SimpleShopRoot_Npc_Goron_Medigoron_Adult(DisplayItemActor)]
entrypoint: SimpleShopRoot_Npc_Goron_Medigoron_Adult(DisplayItemActor)
actions: []
queries: []
params: None

void Sub_ShopCancel() {
    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
    UISystemActor.EventTriggerCloseRupeeDisplay()
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
}

void SimpleShopRoot() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'ActorName'}) {
              case 0:
                Event124:

                call Sub_SimpleShop_Buy({'ActorName': 'ActorName', 'Payment_MessageId': 'Payment_MessageId', 'WaitingAnimeFrames': 160, 'Frames': 230})

              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_044_Adult:Talk_07', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    goto Event124
                } else {
                    Event148:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                    call Sub_ShopCancel({'MessageId': 'ShopCancel_MessageId'})

                }
              case 2:

                call Sub_ShopCancel({'MessageId': 'FullofPouche_MessageId'})

            }
        } else {

            call Sub_ShopCancel({'MessageId': 'LackRupee_MessageId'})

        }
    } else {
        goto Event148
    }
}

void SimpleShopRoot_Npc_Goron_Medigoron_Adult() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'ActorName'}) {
              case 0:
                Event114:
                Player_Event.EventTriggerParticipateEvent()
                GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
                } {
                    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                } {
                    Npc_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Receive', 'IsWaitEnd': True})
                } {
                    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 110})
                    PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'SimpleShop_Price'})
                }

                UISystemActor.EventTriggerCloseRupeeDisplay()
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_Medigoron_Adult:Talk_33', 'MaintainPerformanceState': 0, 'ASName': 'Handover'})

                call Dm_SY_GetInEvent.GetInEventItemSwordMedigoron({'ActorName': 'ActorName', 'ASName': 'Wait', 'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter"), 'Target': 3, 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'Payment_MessageId', 'MaintainPerformanceState': 0})
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Sword_BrokenGiant'}) {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Weapon_Sword_BrokenGiant', 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Num': -1, 'IsGetEvent': False})
                }
                GameSystemActor.EventTriggerRequestAutoSave()
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_044_Adult:Talk_07', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event114
                } else {
                    Event116:

                    call Sub_ShopCancel({'MessageId': 'ShopCancel_MessageId'})

                }
              case 2:

                call Sub_ShopCancel({'MessageId': 'FullofPouche_MessageId'})

            }
        } else {

            call Sub_ShopCancel({'MessageId': 'LackRupee_MessageId'})

        }
    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        goto Event116
    }
}

void SimpleShopRoot_3Choices() {
    Event99:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 'Price'}) {
            switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'ActorName'}) {
              case 0:

                call Sub_SimpleShop_Buy_MagicBean({'ActorName': 'ActorName', 'Payment_MessageId': 'Payment_MessageId'})

                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': 0, 'Value': 1, 'GameDataName': 'Get_MagicBeans'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MagicBean_Explanation'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Get_MagicBean_After', 'Value': True})
              case 2:

                call Sub_ShopCancel_MagicBean({'MessageId': 'FullofPouche_MessageId'})

                Event131:
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'DeleteChoice_GameDataName'})
            }
        } else {

            call Sub_ShopCancel_MagicBean({'MessageId': 'LackRupee_MessageId'})

            goto Event131
        }
      case 1:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_23', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_20', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
            Event77:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DeleteChoice_GameDataName'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'DeleteChoice_GameDataName'})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ProgressBranch_GameDataName'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 'ChoiceLabel3', 'MessageId': 'Description_MessageId', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 'ChoiceLabel3', 'MessageId': 'Description_DMessageId', 'MaintainPerformanceState': 0})
            }
            goto Event99
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_24', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
            EventCamera.EventTriggerCameraSavePoint()
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'IdealDistance': 3.0, 'TargetActorName': 'Obj_SmallFarm_A_02', 'ToleranceYDownwardAngle': 30.0, 'ToleranceYUpwardAngle': 55.0, 'TargetOffset': [0.0, 0.20000000298023224, 0.0]})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_25', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            goto Event77
        }
      case 2:

        call Sub_ShopCancel_MagicBean({'MessageId': 'ShopCancel_MessageId'})

        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'DeleteChoice_GameDataName'})
    }
}

void Sub_SimpleShop_Buy() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 110, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }


    fork {
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Receive'})
    } {
        PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'SimpleShop_Price'})
    }

    UISystemActor.EventTriggerCloseRupeeDisplay()

    call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS({'ReceiveItem': 'ActorName', 'WaitingAnimeFrames': 'WaitingAnimeFrames', 'NpcShowItemASName': 'Handover', 'Frames': 'Frames', 'ASName': 'Rest', 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'Payment_MessageId', 'ASName': '', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_044_Buy'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Sub_ShopCancel_MagicBean() {
    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Index': -1, 'Value': False})
    UISystemActor.EventTriggerCloseRupeeDisplay()
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'MessageId', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
}

void Sub_SimpleShop_Buy_MagicBean() {
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Receive'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'SimpleShop_Price'})
    }

    UISystemActor.EventTriggerCloseRupeeDisplay()
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_28', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'ASName': 'Rest', 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'ReveiveItem': 'Item_MagicBean', 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Gimmick_MagicBeanSoil_ZoraRiver', 'Index': -1}) {
        Event184:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Eat_Talk', 'MessageId': 'Payment_MessageId', 'MaintainPerformanceState': 0})
        Event181:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_MagicBean_After', 'Index': -1}) {
        goto Event184
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_12', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 360.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'IdealDistance': 3.0, 'TargetActorName': 'Obj_SmallFarm_A_02', 'ToleranceYDownwardAngle': 30.0, 'ToleranceYUpwardAngle': 55.0, 'TargetOffset': [0.0, 0.20000000298023224, 0.0]})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_21', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_047_Child:Talk_22', 'ASName': 'Act_Eat_Talk', 'MaintainPerformanceState': 0})
        goto Event181
    }
}
