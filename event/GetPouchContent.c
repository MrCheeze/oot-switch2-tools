-------- EventFlow: GetPouchContent --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerPushToEmptyBottle', 'EventTriggerSetForGetWindow', 'EventTriggerSetBottleForGetWindow', 'EventTriggerSetHavePlayedGetEvent']
queries: ['EventQueryHeartPieceNum', 'EventQueryCheckUIMessageTargetActorName', 'EventQueryTokenGoldNum', 'EventQueryIsAutoSavePouchContent', 'EventQueryCheckUIMessageTargetBottleActorName', 'EventQueryGetHavePlayedGetEvent', 'EventQueryCheckPouchContentCategory']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerRequestAutoSave', 'EventWait', 'EventManualRequestAutoSaveCaption']
queries: ['EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventEventFadeOut']
queries: ['EventQueryIsRupeeMax']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataInt', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void GetPouchContentByActorName() {

    call GetPouchContent({'IsShowNumDisplay': True, 'IsTreasureBox': False, 'IsGetInEvent': False, 'ActorName': 'ActorName'})

}

void PushToEmptyBottle() {
    PouchSystemActor.EventTriggerSetBottleForGetWindow({'Item': 'Item'})

    call OpenGetWindow()

    PouchSystemActor.EventTriggerPushToEmptyBottle({'IsSetMessageTargetActorName': False, 'Item': 'Item', 'IsPushToSelectedBottle': 'isPushToSelectedBottle', 'BigPoeFenceId': 0})
}

void OpenGetWindow() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    switch PouchSystemActor.EventQueryCheckUIMessageTargetActorName() {
      case 0:

        call DefaultGetMessage()

        Event113:

        call OpenGetWindow_End()

      case 1:

        call OpenGetWindow_HeartPiece()

        goto Event113
      case 2:

        call OpenGetWindow_TokenGold()

        goto Event113
      case 3:

        call OpenGetWindowForBottle_SubProcess({'IsInsertBottleByPlayer': False})

        goto Event113
      case 4:

        call OpenGetWindow_MiniGame_SmallKey()

        goto Event113
      case [5, 6, 16]:

        call OpenGetWindow_ReleaseMagic()

        goto Event113
      case 7:

        call OpenGetWindow_Stone_Fire()

        goto Event113
      case 8:

        call OpenGetWindow_Stone_Water()

        goto Event113
      case [9, 10]:

        call OpenGetWindow_EarlyFadeOut()

        goto Event113
      case 11:

        call OpenGetWindow_ClaimCheck()

        goto Event113
      case 12:

        call OpenGetWindow_HeavyBoot()

        goto Event113
      case 13:

        call OpenGetWindow_HoverBoot()

        goto Event113
      case 14:

        call OpenGetWindow_Longshot()

        goto Event113
      case 15:

        call OpenGetWindow_Sword_Biggoron()

        goto Event113
    }
}

void DisplayGetByActorName() {
    PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'ActorName'})

    call OpenGetWindow()

}

void PushToSelectedBottle() {
    PouchSystemActor.EventTriggerSetBottleForGetWindow({'Item': 'Item'})

    call OpenGetWindowForBottle()

}

void DisplayRutoGetByActorName() {
    PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'ActorName'})

    call OpenGetWindowForRuto()

}

void OpenGetWindowForRuto() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0019', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
}

void DefaultGetMessage() {
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
}

void OpenGetWindowForBottle() {
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

    call OpenGetWindowForBottle_SubProcess({'IsInsertBottleByPlayer': True})

}

void OpenGetWindowForBottle_SubProcess() {
    switch PouchSystemActor.EventQueryCheckUIMessageTargetBottleActorName() {
      case 0:
        Event42:

        call DefaultGetMessage()

        Event55:
        PouchSystemActor.EventTriggerSetHavePlayedGetEvent()
      case [1, 2, 5, 6]:
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsInsertBottleByPlayer'})
        && !PouchSystemActor.EventQueryGetHavePlayedGetEvent() {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:SecondGetCaption', 'MaintainPerformanceState': 0})
        } else {
            goto Event42
        }
        goto Event55
      case [3, 4]:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GhostShop_IsAfter_Ready_Exp'}) {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'MaintainPerformanceState': 0})
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:SecondGetCaption', 'MaintainPerformanceState': 0})
            goto Event55
        } else {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'MaintainPerformanceState': 0})
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
            goto Event55
        }
    }
}

void OpenRupeeUIIfNeed() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsShowNumDisplay'})
    && PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) == 7 {
        UISystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'IsWaitOpenAnim': True, 'IsWaitChoiceBtnIn': False})
    }
}

void CloseRupeeUIIfNeed() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsShowNumDisplay'})
    && PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) == 7 {
        if !UISystemActor.EventQueryIsRupeeMax() {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } else {
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    }
}

void GetPouchContentByActorNameForShowPickUpWindow() {

    call GetPouchContent({'ActorName': 'ActorName', 'IsShowNumDisplay': False, 'IsTreasureBox': True, 'IsGetInEvent': True})

}

void GetPouchContent() {
    PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'ActorName'})

    call OpenGetWindow()


    call OpenRupeeUIIfNeed({'ActorName': 'ActorName', 'IsShowNumDisplay': 'IsShowNumDisplay'})

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'ActorName', 'IsGetEvent': 'IsGetInEvent'})

    call CloseRupeeUIIfNeed({'ActorName': 'ActorName', 'IsShowNumDisplay': 'IsShowNumDisplay'})

    if !PouchSystemActor.EventQueryIsAutoSavePouchContent({'ActorName': 'ActorName'}) {
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void GetPouchContentByActorNameForTreasureBox() {

    call GetPouchContent({'IsShowNumDisplay': True, 'IsTreasureBox': True, 'ActorName': 'ActorName', 'IsGetInEvent': True})

}

void GetPouchContentByActorName_ForGetInEvent() {

    call GetPouchContent({'IsShowNumDisplay': True, 'IsTreasureBox': False, 'ActorName': 'ActorName', 'IsGetInEvent': 'IsGetInEvent'})

}

void OpenGetWindow_ReleaseMagic() {

    call DefaultGetMessage()

    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayerStatus.MPMax', 'Value': 0, 'Index': -1}) in [0, 1] {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Item_Event:Talk_06', 'MaintainPerformanceState': 0})
    }
}

void OpenGetWindow_HeavyBoot() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MaintainPerformanceState': 0, 'MessageId': 'ActorMsg/PouchContent:Armor_Adult_HeavyBoot_SecondGetMessage'})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
    } else {
        Event90:

        call DefaultGetMessage()

    }
}

void OpenGetWindow_HoverBoot() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MaintainPerformanceState': 0, 'MessageId': 'ActorMsg/PouchContent:Armor_Adult_HoverBoot_SecondGetMessage'})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
    } else {
        goto Event90
    }
}

void OpenGetWindow_EarlyFadeOut() {

    call DefaultGetMessage()

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void OpenGetWindow_ClaimCheck() {
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'ActorMsg/PouchContent:Item_ClaimCheck_GetMessage', 'MaintainPerformanceState': 0})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
}

void OpenGetWindow_MiniGame_SmallKey() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Market_MiniGame_ChoiceTreasure_NumOfHit', 'Index': -1, 'Value': 4}) {
      case 0:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'ActorMsg/PouchContent:Obj_MiniGame_SmallKey_GetCaption', 'MaintainPerformanceState': 0})
      case [1, 2]:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'ActorMsg/PouchContent:Obj_MiniGame_SmallKey_SecondGetCaption', 'MaintainPerformanceState': 0})
    }
}

void OpenGetWindow_TokenGold() {
    GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'UI_TokenGoldNumAfterGetting', 'SrcGameDataName': 'PouchData.Item_Token_Gold.StockNum', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'UI_TokenGoldNumAfterGetting', 'Value': 1, 'Index': -1})
    switch PouchSystemActor.EventQueryTokenGoldNum() {
      case 0:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Item_Token_Gold_GetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
      case 1:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Item_Token_Gold_ThirdGetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
      case 2:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Item_Token_Gold_SecondGetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    }
}

void OpenGetWindow_Stone_Fire() {

    call DefaultGetMessage()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_DeathMtTrail_0025:Dm_DeathMtTrail_0025_0014', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_DeathMtTrail_0025:Dm_DeathMtTrail_0025_0013', 'EndDialogOption': 3, 'IsCloseDialog': False, 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    }
}

void OpenGetWindow_Stone_Water() {

    call DefaultGetMessage()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZoraFountain_0030:Dm_ZoraFountain_0030_0010', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZoraFountain_0030:Dm_ZoraFountain_0030_0009', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    }
}

void OpenGetWindow_Longshot() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MaintainPerformanceState': 0, 'MessageId': 'ActorMsg/PouchContent:Item_Longshot_SecondGetMessage'})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
    } else {
        goto Event90
    }
}

void OpenGetWindow_Sword_Biggoron() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MaintainPerformanceState': 0, 'MessageId': 'ActorMsg/PouchContent:Weapon_Sword_Biggoron_SecondGetMessage'})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetCaption', 'MaintainPerformanceState': 0})
    } else {
        goto Event90
    }
}

void OpenGetWindow_End() {
    PouchSystemActor.EventTriggerSetHavePlayedGetEvent()
    GameSystemActor.EventManualRequestAutoSaveCaption({'IsWaitEnd': True})
}

void OpenGetWindow_HeartPiece() {
    switch PouchSystemActor.EventQueryHeartPieceNum() {
      case 0:

        call DefaultGetMessage()

      case 1:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Obj_Heart_Piece_SecondGetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
      case 2:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Obj_Heart_Piece_ThirdGetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
      case 3:
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_SY_Get:GetMessage', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'ActorMsg/PouchContent:Obj_Heart_Piece_FourthGetCaption', 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    }
}
