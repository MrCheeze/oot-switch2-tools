-------- EventFlow: DisplayShop --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventCloseShopBuyScreen', 'EventWaitShopBuyScreenDecideGoodsInput', 'EventOpenShopBuyScreen', 'EventTriggerChangeEmotion', 'EventTriggerResetHavePlayedGetEventAtShopFlag', 'EventTriggerInitializeBuyShop', 'EventPlayAS', 'EventTriggerAddShopItemSoldNum', 'EventTriggerPayItemPriceAtShop', 'EventTriggerShopItemPutInPouch', 'EventTriggerShopItemGetDemoEnd', 'EventTriggerGetItemAtShop', 'EventTriggerGetBottleItemAtShop', 'EventTriggerShopItemFocus', 'EventTriggerShopItemSelect', 'EventTriggerBorrowMaskAtShop', 'EventTriggerVisibleItemAtShop', 'EventTriggerRemoveOwnedMask', 'EventTriggerSendMessageToShopBoard', 'EventTriggerShopItemSetModelLodManual']
queries: ['EventQueryCheckBuyResult', 'EventQueryIsShopBuyScreenDecideGoods', 'EventQueryCheckShopSelectItemName', 'EventQueryHavePlayedGetEventAtShop', 'EventQueryCheckIsSoldOutSelectItem', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataString64', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryCheckIsGet']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerRequestAutoSave', 'EventAIScheduleNPCForceResetMaskTalkFlag', 'EventTriggerSendErrorToEventResource', 'EventPorterSendRupee', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice3', 'EventQueryCheckPorterEnable', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryCheckPorterSendRupeeLimit', 'EventQueryZeldaNotesSendRupeeResult']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorchByGameData', 'EventQueryIsAnyBottleEmpty', 'EventQueryIsExistInPouch', 'EventQueryHasRuppe', 'EventQueryIsExistInPouchWithNameGameData']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerCloseNumDisplay', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventWaitStableNumDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: []
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage', 'EventTriggerSetModelAlpha']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Root_Buy() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GameDataName', 'Value': True})
    Npc_EventStarter.EventTriggerResetHavePlayedGetEventAtShopFlag()
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 'EmotionType', 'IsActFaceOnly': False})

    call Buy_Start()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Npc_EventStarter.EventOpenShopBuyScreen({'IsWaitEnd': True})
    Event19:
    Npc_EventStarter.EventWaitShopBuyScreenDecideGoodsInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopBuyScreenDecideGoods() {
        Npc_EventStarter.EventCloseShopBuyScreen({'IsWaitEnd': True})

        call OutOfStockCheck({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

    } else {
        Event90:

        call Buy_End()

        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'GameDataName'})
    }
}

void Buy_ReturnStart() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call CameraDof_DisplayShop_OffFocus({'RequiredFrame': 20})

    Event59:
    Npc_EventStarter.EventOpenShopBuyScreen({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Index': -1, 'Value': True})
    goto Event19
}

void Buy_End() {
    Npc_EventStarter.EventTriggerInitializeBuyShop()
    Npc_EventStarter.EventCloseShopBuyScreen({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Value': False, 'Index': -1})
    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
}

void EventCamera() {

    call InitSetting_ShopEvent({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'PositionOffset': [0.0, 0.0, 2.299999952316284]})

}

void Root_HappyMaskShop() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'MessageId': 'MessageId_StartTalk', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})

    call Buy_Start()

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Event55:
    Npc_EventStarter.EventOpenShopBuyScreen({'IsWaitEnd': True})
    Npc_EventStarter.EventWaitShopBuyScreenDecideGoodsInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopBuyScreenDecideGoods() {
        switch Npc_EventStarter.EventQueryCheckIsSoldOutSelectItem() {
          case 0:
            if !PouchSystemActor.EventQueryIsExistInPouchWithNameGameData({'Num': 1, 'ActorName': 'Shop_SelectItemName'}) {
                Event182:
                Npc_EventStarter.EventCloseShopBuyScreen({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HappyMaskShop_RentedMaskChoice', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_102', 'MaintainPerformanceState': 0})
                    Event288:

                    call HappyMaskShop_ReturnStart_NoDofReset()

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_101', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_RentedMaskChoice', 'Index': -1, 'Value': True})
                    goto Event288
                }
            } else {
                Npc_EventStarter.EventCloseShopBuyScreen({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HappyMaskShop_NotRentalMaskChoice', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_202', 'MaintainPerformanceState': 0})
                    Event24:

                    call HappyMaskShop_ReturnStart_NoDofReset()

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_201', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_NotRentalMaskChoice', 'Index': -1, 'Value': True})
                    goto Event24
                }
            }
          case 1:
            goto Event182
          case 2:

            call CameraDof_DisplayShop_InFocus()

            Npc_EventStarter.EventTriggerShopItemFocus()
            Npc_EventStarter.EventCloseShopBuyScreen({'IsWaitEnd': True})

            call MaskSoldCheck()

        }
    } else {

        call Buy_End()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_NotRentalMaskChoice', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_RentedMaskChoice', 'Index': -1, 'Value': False})
    }
}

void HappyMaskShop_ReturnStart() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call CameraDof_DisplayShop_OffFocus({'RequiredFrame': 20})

    goto Event55
}

void AssignCamera() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Shop_Talking', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveTime': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ShopOwnerActorName', 'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.2599999904632568, 2.509999990463257], 'AtVector': [0.0, 1.2799999713897705, 0.8999999761581421], 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveTime': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ShopOwnerActorName', 'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.3700000047683716, 0.8999999761581421], 'PosVector': [0.0, 1.4199999570846558, 2.509999990463257], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Hylia_018_Shop_Talking', 'Index': -1}) {
        Event248:
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 56.0, 'AtVector': [0.0, 1.2999999523162842, 1.0], 'CameraCollisionMode': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.100000023841858, 2.4000000953674316], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 56.0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'AtVector': [0.0, 1.600000023841858, 1.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.600000023841858, 2.4000000953674316], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking', 'Index': -1}) {
        goto Event248
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Hylia_020_Shop_Talking', 'Index': -1}) {
        Event246:
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 50.0, 'AtVector': [0.0, 1.2200000286102295, 0.8299999833106995], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.0399999618530273, 2.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.4700000286102295, -0.20000000298023224], 'PosVector': [0.0, 1.5499999523162842, 2.9000000953674316], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Hylia_020_Shop_Talking', 'Index': -1}) {
        goto Event246
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_HappyMaskShop_Talking', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.4600000381469727, -0.8399999737739563], 'PosVector': [0.0, 1.100000023841858, 2.299999952316284], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Hylia_021_Shop_Talking', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.350000023841858, 0.11999999731779099], 'PosVector': [0.0, 1.149999976158142, 2.3299999237060547], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GoronCity_Shop_Talking', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'CameraCollisionMode': 1, 'TargetFovy': 53.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.4500000476837158, 0.11999999731779099], 'PosVector': [0.0, 1.2050000429153442, 2.450000047683716], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'CameraCollisionMode': 1, 'TargetFovy': 53.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.5499999523162842, 0.11999999731779099], 'PosVector': [0.0, 1.5499999523162842, 2.549999952316284], 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZoraDomain_Shop_Talking', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 52.0, 'PosVector': [0.0, 1.1399999856948853, 2.5299999713897705], 'AtVector': [0.0, 1.2699999809265137, 1.3300000429153442], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'Actor1ActorName': 'ShopOwnerActorName', 'TargetFovy': 52.0, 'PosVector': [0.0, 1.649999976158142, 2.5299999713897705], 'AtVector': [0.0, 1.5700000524520874, 1.3300000429153442], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }
}

void Outofstock_SelectBomb() {
    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
      case [0, 1, 2, 3, 5, 6, 7, 8]:
        Event10:

        call Outofstock_SelectArrow({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

      case 4:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
            goto Event10
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'}) {

            call OutOfStock_Talk({'GameDataName': 'GoronCity_Shop_SelectBomb', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_10', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_12', 'ShopOwnerActorName': 'ShopOwnerActorName'})

            Event28:
            Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
            Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

            call Buy_ReturnStart_NoDofReset({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_018_Shop_Talking'}) {

            call OutOfStock_Talk({'GameDataName': 'Market_Shop_SelectBomb', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_10', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_12', 'ShopOwnerActorName': 'ShopOwnerActorName'})

            goto Event28
        } else {
            goto Event10
        }
    }
}

void NormalFlow() {
    switch Npc_EventStarter.EventQueryCheckIsSoldOutSelectItem() {
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_21', 'MaintainPerformanceState': 0})

        call Buy_ReturnStart_NoDofReset({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

      case 2:
        switchcall SelectItem_CheckAvailable({'ASName': 'ASName'}) {
          case fnv1a("Available"):

            call CameraDof_DisplayShop_InFocus()

            Npc_EventStarter.EventTriggerShopItemFocus()
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case [0, 1, 2, 3, 4, 8]:
                Event16:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MaintainPerformanceState': 1})
                Event17:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event27:
                    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                      case [0, 1, 2, 3, 4, 6, 7, 8]:
                        switch PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'Shop_SelectItemName'}) {
                          case 0:
                            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                              case [0, 1, 2, 3, 4, 5, 7, 8]:
                                Event6:
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False, 'Index': -1})
                                if !Npc_EventStarter.EventQueryHavePlayedGetEventAtShop() {
                                    Npc_EventStarter.EventTriggerPayItemPriceAtShop()
                                    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                                      case [0, 1]:

                                        fork {
                                            switchcall Goron_ShopCheck() {
                                              case 0x42c29c19:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ASName': 'ASName', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_07_4_GoronJoy', 'MaintainPerformanceState': 0})
                                              case 0x41c29a86:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07_4', 'ASName': 'ASName', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                                            }
                                        } {

                                            call ShopItem_Buy_SecondMove()

                                        }

                                        Event276:
                                        Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
                                        Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

                                        call Buy_ReturnStart_FromShopGet_AfterShowStock({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                                      case [2, 3, 4, 5, 6, 7, 8]:

                                        fork {
                                            switchcall Goron_ShopCheck() {
                                              case 0x42c29c19:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ASName': 'ASName', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_07_2_GoronJoy', 'MaintainPerformanceState': 0})
                                              case 0x41c29a86:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07_2', 'ASName': 'ASName', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                                            }
                                        } {

                                            call ShopItem_Buy_SecondMove()

                                        }

                                        goto Event276
                                    }
                                } else {
                                    switchcall ShopCheck() {
                                      case fnv1a("1"):

                                        call Dm_SY_ShopGet.ShopGet_SoldOut()

                                        Event115:
                                        Npc_EventStarter.EventTriggerPayItemPriceAtShop()
                                        UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                        switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                                          case [0, 1]:
                                            Npc_EventStarter.EventTriggerGetItemAtShop({'IsGetEvent': True})

                                            call Dm_SY_Get.CheckHeart_Shop({'GameDataName': 'Shop_SelectItemName'})

                                            Event517:

                                            fork {

                                                call EventCamera({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName'})

                                            } {
                                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                                EventEffectEmitter.EventEffectStopGetItem()
                                            } {
                                                switchcall ShopCheck() {
                                                  case fnv1a("1"):
                                                    Npc_EventStarter.EventTriggerAddShopItemSoldNum()
                                                    Npc_EventStarter.EventTriggerShopItemGetDemoEnd()
                                                    Npc_EventStarter.EventTriggerSendMessageToShopBoard()
                                                    EventSystemActor[1].EventWait({'Frames': 1, 'IsWaitEnd': True})
                                                    Npc_EventStarter.EventTriggerVisibleItemAtShop()
                                                  case fnv1a("0"):
                                                    Npc_EventStarter.EventTriggerShopItemGetDemoEnd()
                                                    Npc_EventStarter.EventTriggerSendMessageToShopBoard()
                                                }
                                            }

                                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                            GameSystemActor.EventTriggerRequestAutoSave()

                                            call ActionGuide.ActionGuideForShop()

                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_DekuTree_IsAfter_Step02_Exp'}) {
                                                Event523:
                                                switchcall Goron_ShopCheck() {
                                                  case 0x42c29c19:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07_GoronJoy', 'MaintainPerformanceState': 0})
                                                    Event267:
                                                    Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
                                                    Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

                                                    call Buy_ReturnStart_FromShopGet({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                                                  case 0x41c29a86:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                                                    goto Event267
                                                }
                                            } else
                                            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Weapon_Shield_Deku'}) {
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07_Kokiri_Only', 'MaintainPerformanceState': 0})
                                                Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
                                                Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

                                                call Forced_Buy_End({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName'})

                                            } else {
                                                goto Event523
                                            }
                                          case [2, 3, 4, 5, 6, 7, 8]:
                                            Npc_EventStarter.EventTriggerGetItemAtShop({'IsGetEvent': False})
                                            goto Event517
                                        }
                                      case fnv1a("0"):

                                        call Dm_SY_ShopGet.ShopGet()

                                        Npc_EventStarter.EventTriggerVisibleItemAtShop()
                                        Npc_EventStarter.EventTriggerAddShopItemSoldNum()
                                        goto Event115
                                    }
                                }
                              case 6:
                                if Player_Event.EventQueryPlayerIsChild() {
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Shop_SelectActor_Shield_Deku'})
                                }
                                goto Event6
                            }
                          case 1:
                            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                              case 0:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_06', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MaintainPerformanceState': 0})
                                Event91:
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event6
                                } else {

                                    call Buy_ReturnStart({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                                }
                              case 1:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_16', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
                                goto Event91
                              case [2, 4, 5, 6, 7, 8]:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_04', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MaintainPerformanceState': 0})
                                goto Event91
                              case 3:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_42', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
                                goto Event91
                            }
                          case 2:
                            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ポーチいっぱい判定のフローを見直してください'})
                        }
                      case 5:
                        if !Npc_EventStarter.EventQueryHavePlayedGetEventAtShop() {
                            Npc_EventStarter.EventTriggerPayItemPriceAtShop()

                            fork {
                                switchcall Goron_ShopCheck() {
                                  case 0x42c29c19:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_07_3_GoronJoy', 'MaintainPerformanceState': 0})
                                  case 0x41c29a86:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07_3', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
                                }
                            } {
                                Npc_EventStarter.EventTriggerShopItemPutInPouch()

                                fork {
                                    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                } {

                                    call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 30})

                                }

                                Npc_EventStarter.EventTriggerAddShopItemSoldNum()
                                Npc_EventStarter.EventTriggerGetBottleItemAtShop()
                                GameSystemActor.EventTriggerRequestAutoSave()
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            }

                            Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
                            Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

                            call Buy_ReturnStart_FromShopGet_AfterShowStock({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                        } else {

                            call Dm_SY_ShopGet.ShopGet()


                            fork {
                                Npc_EventStarter.EventTriggerShopItemGetDemoEnd()
                                Npc_EventStarter.EventTriggerAddShopItemSoldNum()
                                Npc_EventStarter.EventTriggerSendMessageToShopBoard()
                            } {
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                EventEffectEmitter.EventEffectStopGetItem()
                            }

                            Npc_EventStarter.EventTriggerPayItemPriceAtShop()
                            UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            Npc_EventStarter.EventTriggerGetBottleItemAtShop()

                            call EventCamera({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName'})

                            GameSystemActor.EventTriggerRequestAutoSave()

                            call ActionGuide.ActionGuideForShop()

                            switchcall Goron_ShopCheck() {
                              case 0x42c29c19:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_07_GoronJoy', 'MaintainPerformanceState': 0})
                                Event145:
                                Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
                                Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

                                call Buy_ReturnStart_FromShopGet({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                              case 0x41c29a86:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_07', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                                goto Event145
                            }
                        }
                    }
                } else {
                    Event107:

                    call Buy_ReturnStart({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

                }
              case 5:
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Bottle_Fish'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Talking'}) {
                    if !Player_Event.EventQueryPlayerIsChild() {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Bottle_Fish_IsFirstTalked'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Bottle_Fish_AlreadyPurchased'}) {
                                goto Event16
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_102', 'MaintainPerformanceState': 0})
                                Event509:
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZoraDomain_Shop_Bottle_Fish_AlreadyPurchased'})
                                    goto Event27
                                } else {
                                    goto Event107
                                }
                            }
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraDomain_Shop_Bottle_Fish_IsFirstTalked', 'Index': -1, 'Value': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_101', 'MaintainPerformanceState': 0})
                            goto Event509
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Adult_Shop_Bottle_Fish_IsFirstTalked'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Adult_Shop_Bottle_Fish_AlreadyPurchased'}) {
                            goto Event16
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_102', 'MaintainPerformanceState': 0})
                            Event519:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZoraDomain_Adult_Shop_Bottle_Fish_AlreadyPurchased'})
                                goto Event27
                            } else {
                                goto Event107
                            }
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZoraDomain_Adult_Shop_Bottle_Fish_IsFirstTalked'})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_101', 'MaintainPerformanceState': 0})
                        goto Event519
                    }
                } else {
                    goto Event16
                }
              case 6:
                if !Player_Event.EventQueryPlayerIsChild() {
                    goto Event16
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MaintainPerformanceState': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_Shield_Adult'})
                }
                goto Event17
              case 7:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_018_Shop_Talking'})
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_Soldier_003_GateOpen', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'ASName': 'ASName', 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shield_SaleTalk_01', 'MaintainPerformanceState': 0})
                } else {
                    goto Event16
                }
                goto Event17
            }
          case 0x28892467:

            call ShopMessage_SwitchEra({'Common_MessageID': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_02', 'Unique_MessageID': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_02_Adult', 'ShopFlag': 'KakarikoVillage_Hylia_018_Shop_Talking'})

            Event317:
            Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
            Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})

            call Buy_ReturnStart_NoDofReset({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

          case 0xe14e923b:
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case 0:

                call NotAvailableTalk({'ASName': 'ASName'})

                switchcall Goron_ShopCheck() {
                  case 0x42c29c19:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_05_GoronJoy', 'MaintainPerformanceState': 0})
                    goto Event317
                  case 0x41c29a86:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_05', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                    goto Event317
                }
              case 1:

                call NotAvailableTalk({'ASName': 'ASName'})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_15', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                goto Event317
              case [2, 3, 4, 5, 6, 7, 8]:

                call CheckShopSelectItemName_PouchMax({'ShopOwnerActorName': 'ShopOwnerActorName', 'ASName': 'ASName'})

                goto Event317
            }
          case 0x8539fc5e:
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_08', 'MaintainPerformanceState': 0})
                goto Event317
              case 3:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_09', 'MaintainPerformanceState': 0})
                goto Event317
              case 4:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_10', 'MaintainPerformanceState': 0})
                goto Event317
              case 5:
                switchcall Goron_ShopCheck() {
                  case 0x42c29c19:

                    call ShopMessage_SwitchEra({'ShopFlag': 'KakarikoVillage_Hylia_020_Shop_Talking', 'Unique_MessageID': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_11_Adult', 'Common_MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_11_GoronJoy'})

                    goto Event317
                  case 0x41c29a86:

                    call ShopMessage_SwitchEra({'ShopFlag': 'KakarikoVillage_Hylia_020_Shop_Talking', 'Unique_MessageID': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_11_Adult', 'Common_MessageID': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_11'})

                    goto Event317
                }
            }
        }
    }
}

void OutOfStock_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'MessageId_SecondTalk', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'MessageId_FirstTalk', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
    }
}

void OutOfStockCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Shop_Talking'}) {
        switch Npc_EventStarter.EventQueryCheckIsSoldOutSelectItem() {
          case 0:

            call OutOfStock_Talk_Kokiri_Shop_DekuShieldOnly({'GameDataName': 'KokiriForest_Shop_SelectActor', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_13', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_14', 'MessageId_SecondTalk02': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_15', 'ShopOwnerActorName': 'ShopOwnerActorName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

          case [1, 2]:
            Event42:

            call Outofstock_SelectBomb({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

        }
    } else {
        goto Event42
    }
}

void Outofstock_SelectArrow() {
    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
      case [0, 1, 2, 4, 5, 6, 7, 8]:
        Event149:

        call Outofstock_SelectCloth({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

      case 3:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Quiver_Small'}) {
            goto Event149
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_018_Shop_Talking'}) {
            Event112:

            call OutOfStock_Talk({'GameDataName': 'Market_Shop_SelectArrow', 'ShopOwnerActorName': 'ShopOwnerActorName', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_09_04', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_09_05'})

            goto Event28
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking'}) {
            goto Event112
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Talking'}) {

            call OutOfStock_Talk({'GameDataName': 'ZoraDomain_Shop_SelectArrow', 'ShopOwnerActorName': 'ShopOwnerActorName', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_09_04', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_09_05'})

            goto Event28
        } else {
            goto Event149
        }
    }
}

void Outofstock_SelectCloth() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_Adult_Goron'}) {
        Event169:
        if !Player_Event.EventQueryPlayerIsChild() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'}) {
                switchcall Goron_ShopCheck() {
                  case 0x42c29c19:

                    call OutOfStock_Talk({'GameDataName': 'GoronCity_Shop_SelectCloth', 'ShopOwnerActorName': 'ShopOwnerActorName', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_19_GoronJoy', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_20_GoronJoy'})

                    goto Event28
                  case 0x41c29a86:

                    call OutOfStock_Talk({'GameDataName': 'GoronCity_Shop_SelectCloth', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_19', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_20', 'ShopOwnerActorName': 'ShopOwnerActorName'})

                    goto Event28
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Talking'}) {

                call OutOfStock_Talk({'GameDataName': 'ZoraDomain_Shop_SelectCloth', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_19', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_20', 'ShopOwnerActorName': 'ShopOwnerActorName'})

                goto Event28
            } else {
                Event491:

                call Outofstock_SelectBottle_BlueFire({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

            }
        } else {
            goto Event491
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_Adult_Zora'}) {
        goto Event169
    } else {
        goto Event491
    }
}

void MaskSoldCheck() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsCompleted_Exp'}) {
        Event193:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_01', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Keaton', 'Num': 1}) {
                Event85:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_30', 'ChoiceLabel1': 9002, 'ChoiceLabel2': 9003, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event83:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsCompleted_Exp'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_07', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_07_01', 'MaintainPerformanceState': 0})
                    }

                    call Rental_Common()


                    call InformPrice()

                    Event308:

                    call Buy_End_ForHappyMaskShop()

                    GameSystemActor.EventTriggerRequestAutoSave()
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_NotRentalMaskChoice', 'Index': -1, 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HappyMaskShop_RentedMaskChoice', 'Index': -1, 'Value': False})
                } else {

                    call HappyMaskShop_ReturnStart()

                }
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Skull', 'Num': 1}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Spooky', 'Num': 1}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Bunny'}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Goron'}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Zora'}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Gerudo'}) {
                goto Event85
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Truth'}) {
                goto Event85
            } else
            goto Event83
        } else {

            call HappyMaskShop_ReturnStart()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step06_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Armor_Child_Mask_Spooky', 'Index': -1}) {
            Event192:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9000, 'ChoiceLabel2': 9001, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_40', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Keaton', 'Num': 1}) {
                    Event197:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_30', 'ChoiceLabel1': 9002, 'ChoiceLabel2': 9003, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event208:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_07_02', 'MaintainPerformanceState': 0})

                        call Rental_Common()

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_07_03', 'MaintainPerformanceState': 0})
                        goto Event308
                    } else {

                        call HappyMaskShop_ReturnStart()

                    }
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Skull', 'Num': 1}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Spooky', 'Num': 1}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Bunny'}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Goron'}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Zora'}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Gerudo'}) {
                    goto Event197
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Truth'}) {
                    goto Event197
                } else {
                    goto Event208
                }
            } else {

                call HappyMaskShop_ReturnStart()

            }
        } else
        Event194:
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Armor_Child_Mask_Skull', 'Index': -1}) {
            goto Event192
        } else
        Event191:
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Armor_Child_Mask_Keaton', 'Index': -1}) {
            goto Event192
        } else {
            goto Event193
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step04_Exp'}) {
        goto Event194
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step02_Exp'}) {
        goto Event191
    } else {
        goto Event193
    }
}

void OutOfStock_Talk_Kokiri_Shop_DekuShieldOnly() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        if !SystemTextNPC.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'MessageId_SecondTalk', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'MessageId_SecondTalk02', 'MaintainPerformanceState': 0})
        }
        Event49:

        call Buy_ReturnStart_NoDofReset({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'MessageId_FirstTalk', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
        goto Event49
    }
}

void Buy_ReturnStart_FromShopGet() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call CameraDof_DisplayShop_OffFocus({'RequiredFrame': 0})

    goto Event59
}

void Buy_ReturnStart_FromShopGet_AfterShowStock() {
    Npc_EventStarter.EventTriggerShopItemGetDemoEnd()
    Npc_EventStarter.EventTriggerSendMessageToShopBoard()
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    goto Event59
}

void ShopItem_Buy_SecondMove() {
    Npc_EventStarter.EventTriggerShopItemPutInPouch()

    fork {
        UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 30})

    }

    Npc_EventStarter.EventTriggerAddShopItemSoldNum()
    Npc_EventStarter.EventTriggerGetItemAtShop({'IsGetEvent': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void CameraDof_DisplayShop_InFocus() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_020_Shop_Talking'}) {
        Event214:
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'EndDistance': 0.8949999809265137, 'EndFNumber': 28.0, 'RequiredFrame': 30, 'EndBluarLevel': 3.0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_020_Shop_Talking'}) {
        goto Event214
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Talking'}) {
        goto Event214
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'}) {
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'EndFNumber': 28.0, 'RequiredFrame': 30, 'EndBluarLevel': 3.0, 'EndDistance': 0.8600000143051147})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_018_Shop_Talking'}) {
        Event371:
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'EndFNumber': 28.0, 'RequiredFrame': 30, 'EndBluarLevel': 3.0, 'EndDistance': 0.699999988079071})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking'}) {
        goto Event371
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_021_Shop_Talking'}) {
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'EndFNumber': 28.0, 'RequiredFrame': 30, 'EndBluarLevel': 3.0, 'EndDistance': 0.9200000166893005})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_HappyMaskShop_Talking'}) {
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'RequiredFrame': 30, 'EndBluarLevel': 3.0, 'EndDistance': 1.0, 'EndFNumber': 24.5})
    } else {
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'EndFNumber': 28.0, 'EndDistance': 0.800000011920929, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'RequiredFrame': 30, 'EndBluarLevel': 3.0})
    }
}

void Buy_ReturnStart_NoDofReset() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    goto Event59
}

void SelectItem_CheckAvailable() {
    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
      case [0, 1, 6, 7, 8]:
        Event310:
        if !Npc_EventStarter.EventQueryCheckBuyResult() {
            switch PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'Shop_SelectItemName'}) {
              case [0, 1]:
                Event124:
                return fnv1a("Available")
              case 2:
                Npc_EventStarter.EventTriggerShopItemSelect()
                return 0xe14e923b
            }
        } else {
            Event312:
            Npc_EventStarter.EventTriggerShopItemSelect()

            call NotAvailableTalk({'ASName': 'ASName'})

            return 0x28892467
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_BulletBag_Small'}) {
            goto Event310
        } else {
            Event333:
            Npc_EventStarter.EventTriggerShopItemSelect()

            call NotAvailableTalk({'ASName': 'ASName'})

            return 0x8539fc5e
        }
      case 3:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Quiver_Small'}) {
            goto Event310
        } else {
            goto Event333
        }
      case 4:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
            goto Event310
        } else {
            goto Event333
        }
      case 5:
        if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
            if !Npc_EventStarter.EventQueryCheckBuyResult() {
                goto Event124
            } else {
                goto Event312
            }
        } else {
            goto Event333
        }
    }
}

void NotAvailableTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Hylia_020_Shop_Talking', 'Index': -1}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_1', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_2_Adult', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_3_Adult', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        }
    } else
    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
      case [0, 1, 2, 3, 4, 5, 7, 8]:
        Event304:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_1', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_2', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_02_3', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        }
      case 6:
        if !Player_Event.EventQueryPlayerIsChild() {
            goto Event304
        } else
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ASName': 'ASName', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_Shield_Adult_02_1'})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ASName': 'ASName', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_Shield_Adult_02_2'})
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ASName': 'ASName', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_01_Shield_Adult_02_3'})
        }
    }
}

void Buy_Start() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Value': True, 'Index': -1})
    Npc_EventStarter.EventTriggerInitializeBuyShop()
    UISystemActor.EventTriggerSetMessageLogDisableSectionStart({'ShouldLeaveMessageLog': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Index': -1, 'Value': True})
}

void Buy_End_ForHappyMaskShop() {
    UISystemActor.EventTriggerCloseNumDisplay()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsShopRecoveryNotice', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsPlayingShopEvent', 'Value': False, 'Index': -1})
    UISystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Shop_IsUpdatableStockNumDisplay', 'Value': False, 'Index': -1})
}

void Forced_Buy_End() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call Common_Camera_Pln.CameraDoF_Default()

    Npc_EventStarter.EventOpenShopBuyScreen({'IsWaitEnd': True})
    goto Event90
}

void CheckShopSelectItemName_PouchMax() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Weapon_Shield_Deku'}) {
        if !Player_Event.EventQueryPlayerIsChild() {

            call OutOfStock_Talk({'MessageId_FirstTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_31', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_32', 'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'KokiriForest_Shop_SelectActor_Shield_Deku'})

        } else {

            call OutOfStock_Talk({'MessageId_SecondTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_32', 'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'KokiriForest_Shop_SelectActor_Shield_Deku', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_33'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Weapon_Shield_Hylian'}) {

        call OutOfStock_Talk({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'Market_Shop_SelectActor_Shield_Hylia', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_31', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Hylia_018_Shop_Child:Shop_32'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_Adult_Goron'}) {

        call OutOfStock_Talk({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GoronCity_Shop_SelectActor_Armor_Goron', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_31', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_32'})

    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_Adult_Zora'}) {

        call OutOfStock_Talk({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'ZoraDomain_Shop_SelectActor_Armor_Zora', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_31', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_32'})

    } else {

        call NotAvailableTalk({'ASName': 'ASName'})

        switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
          case [2, 4, 6, 7, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_03', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ASName': '', 'MaintainPerformanceState': 0})
          case 3:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kokiri_001_Shop_Child:Shop_41', 'MaintainPerformanceState': 0})
        }
    }
}

void InitSetting_ShopEvent() {
    if Player_Event.EventQueryPlayerIsChild() in [0, 1] {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {

            call AssignCamera({'ShopOwnerActorName': 'ShopOwnerActorName'})

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Shop_Talking', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_DekuTree_IsAfter_Step02_Exp'}) {
                    Event7:
                    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                }
            } else {
                goto Event7
            }
        } {
            Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'UseDemoWait': True, 'IsWaitEnd': False, 'PositionOffset': 'PositionOffset', 'ASCommand': 'EvtWait', 'YAngle': 0.0})
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'Target': 1, 'IsNearOffset': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'PosOffset': 'PositionOffset', 'YAngle': 0.0, 'Type': -1, 'IsWaitEnd': False, 'ActorName': 'Npc_EventStarter', 'IsDisguisedPlayerPos': True})
            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {

            call InitTalk.Sub_InitTalk_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 1, 'Arg_Greeting': 4})

        }

    }
}

void ShopCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Shop_Talking', 'Index': -1})
    && !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_DekuTree_IsAfter_Step02_Exp'}) {
            Event364:
            return fnv1a("0")
        } else {
            return fnv1a("1")
        }
    } else {
        goto Event364
    }
}

void ShopMessage_SwitchEra() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShopFlag'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'Unique_MessageID', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'MessageId': 'Common_MessageID', 'MaintainPerformanceState': 0})
    }
}

void DisplayShop_Porter_Check() {
    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Pouch_Amiibo'}) {
        switch GameSystemActor.EventQueryCheckPorterEnable() {
          case [0, 2]:
            Event374:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Disable_Select_ZeldaNotes', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Disable_Select_ZeldaNotes', 'Value': False, 'Index': -1})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
    } else {
        goto Event374
    }
}

void DisplayShop_ZeldaNotes_Flow() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZeldaNotes_IsSelected'})
    && !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9013, 'ChoiceLabel1': 5, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_51', 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
        Event34:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event573:
            if !GameSystemActor.EventQueryCheckPorterSendRupeeLimit() {
                return 0x62b48625
            } else {
                Event138:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_44', 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 7})
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 20}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_56', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameSystemActor.EventPorterSendRupee({'IsWaitEnd': True, 'RupeeNum': 20})
                            if !GameSystemActor.EventQueryZeldaNotesSendRupeeResult() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_45', 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                                Event595:
                                return 0x80c8b6de
                            } else {
                                Event608:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_62', 'NotPlayLipSyncAnim': True})
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_61'})
                                goto Event595
                            }
                        } else {
                            goto Event138
                        }
                    } else {
                        Event597:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_55', 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                        goto Event138
                    }
                  case 1:
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 60}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_57', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameSystemActor.EventPorterSendRupee({'IsWaitEnd': True, 'RupeeNum': 60})
                            if !GameSystemActor.EventQueryZeldaNotesSendRupeeResult() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_46', 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                                goto Event595
                            } else {
                                goto Event608
                            }
                        } else {
                            goto Event138
                        }
                    } else {
                        goto Event597
                    }
                  case 2:
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 100}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_58', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameSystemActor.EventPorterSendRupee({'IsWaitEnd': True, 'RupeeNum': 100})
                            if !GameSystemActor.EventQueryZeldaNotesSendRupeeResult() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'ChoiceLabel1': 11, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_47', 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
                                goto Event595
                            } else {
                                goto Event608
                            }
                        } else {
                            goto Event138
                        }
                    } else {
                        goto Event597
                    }
                  case 3:
                    Event596:
                    return 0x80c8b6de
                }
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_50', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event573
            } else {
                goto Event596
            }
          case 2:
            goto Event596
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 9013, 'MessageId': 'EventFlowMsg/Npc_Zora_011_Shop_Child:Shop_43', 'ChoiceLabel1': 5, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 6, 'ChangeMstxtForActor': True, 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ZeldaNotes_IsSelected'})
        goto Event34
    }
}

void CameraDof_DisplayShop_OffFocus() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_020_Shop_Talking'}) {
        Event577:

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'RequiredFrame'})

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_020_Shop_Talking'}) {
        goto Event577
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'}) {
        goto Event577
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraDomain_Shop_Talking'}) {
        goto Event577
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_018_Shop_Talking'}) {
        Event441:

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'RequiredFrame'})

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_018_Shop_Talking'}) {
        goto Event441
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_021_Shop_Talking'}) {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'RequiredFrame'})

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_HappyMaskShop_Talking'}) {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'RequiredFrame'})

    } else {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 'RequiredFrame'})

    }
}

void HappyMaskShop_ReturnStart_NoDofReset() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    goto Event55
}

void Rental_Common() {
    Npc_EventStarter.EventTriggerRemoveOwnedMask()
    Npc_EventStarter.EventTriggerBorrowMaskAtShop()

    call Dm_SY_ShopGet.ShopGet_HappyMaskShopOnly()

    GameSystemActor.EventAIScheduleNPCForceResetMaskTalkFlag({'IsWaitEnd': True})

    fork {

        call EventCamera({'ShopOwnerActorName': 'Npc_Hylia_023_Shop_Child', 'GameDataName': 'Market_HappyMaskShop_Talking'})

    } {
        Npc_EventStarter.EventTriggerShopItemGetDemoEnd()
        Npc_EventStarter.EventTriggerSendMessageToShopBoard()
    } {
        EventEffectEmitter.EventEffectStopGetItem()
    }


    call ActionGuide.ActionGuideForShop()

}

void InformPrice() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsCompleted_Exp'}) {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Keaton', 'Num': 1}) {
            Event484:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Shop_07_03', 'MaintainPerformanceState': 0})
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Skull', 'Num': 1}) {
            goto Event484
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Spooky', 'Num': 1}) {
            goto Event484
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Bunny'}) {
            goto Event484
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Keaton', 'Num': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_51', 'MaintainPerformanceState': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 1})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Skull', 'Num': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_52', 'MaintainPerformanceState': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 2})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Spooky', 'Num': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_53', 'MaintainPerformanceState': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 3})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Bunny'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_023_Shop_Child:Talk_54', 'MaintainPerformanceState': 0})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 4})
    }
}

void Outofstock_SelectBottle_BlueFire() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Bottle_BlueFire'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BlueFire'}) {
            Event497:

            call NormalFlow({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

        } else
        if !Player_Event.EventQueryPlayerIsChild() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Hylia_020_Shop_Talking'}) {
                Event496:

                call OutOfStock_Talk({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'Shop_SelectBottle_BlueFire', 'MessageId_FirstTalk': 'EventFlowMsg/Npc_Hylia_020_Shop_Child:Shop_101', 'MessageId_SecondTalk': 'EventFlowMsg/Npc_Hylia_020_Shop_Child:Shop_102'})

                goto Event28
            } else {
                goto Event497
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Hylia_020_Shop_Talking'}) {
            goto Event496
        } else {
            goto Event497
        }
    } else {

        call NormalFlow({'ShopOwnerActorName': 'ShopOwnerActorName', 'GameDataName': 'GameDataName', 'ASName': 'ASName', 'EmotionType': 'EmotionType'})

    }
}

void Goron_ShopCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking'})
    && !Player_Event.EventQueryPlayerIsChild()
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        return 0x42c29c19
    } else {
        return 0x41c29a86
    }
}

void DisplayShop_FinishSetting_LinkPosition() {
    Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 1, 'TargetActorKind': 0, 'ActorName': '', 'InstanceName': '', 'UseDemoWait': True, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.0, 2.299999952316284]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 2, 'Target': 1, 'PosOffset': [0.0, 0.0, 2.299999952316284], 'IsDisguisedPlayerPos': True, 'IsNearOffset': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_EventStarter', 'IsWaitEnd': False, 'OffsetBase': 1, 'YAngle': 180.0})
    Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Npc_EventStarter.EventTriggerShopItemSetModelLodManual({'LodLevel': -1})
    Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
}
