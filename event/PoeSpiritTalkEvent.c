-------- EventFlow: PoeSpiritTalkEvent --------

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_Spirit_Poe
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeHyrule
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_Poe_Big
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTalk', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviChangeColor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsObtainedSpiritBigPoeCount']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistBottleTypeInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryRandomChoice8', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_Poe_Big[InitTalk_Poe(Arg_Actor)]
entrypoint: InitTalk_Poe(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Obj_Spirit_PoeHyrule[PoeTalk00(Npc)]
entrypoint: PoeTalk00(Npc)
actions: ['EventPoeSpiritTalk']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventPoeSpiritQueryIsTalked']
params: None

Actor: Obj_Spirit_PoeHyrule[PoeTalk01(Npc)]
entrypoint: PoeTalk01(Npc)
actions: ['EventPoeSpiritTalk']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventPoeSpiritQueryIsTalked']
params: None

Actor: Obj_Spirit_PoeHyrule[PoeTalk02(Npc)]
entrypoint: PoeTalk02(Npc)
actions: ['EventPoeSpiritTalk']
queries: ['EventPoeSpiritQueryIsTalked', 'EventQueryAvoidDuplicationRandomChoice2']
params: None

void PoeEntry() {

    call InitTalk_Poe({'Arg_Actor': ActorIdentifier(name="Obj_Spirit_Poe"), 'Npc_Focus': 'Obj_Spirit_Poe'})


    call PoeTalk00({'Npc': ActorIdentifier(name="Obj_Spirit_Poe")})

}

void PoeBigEntry() {

    call InitTalk_Poe({'Npc_Focus': 'Obj_Spirit_Poe_Big', 'Arg_Actor': ActorIdentifier(name="Obj_Spirit_Poe_Big")})


    call PoeTalk02({'Npc': ActorIdentifier(name="Obj_Spirit_Poe_Big")})

}

void PoeHyruleEntry() {

    call InitTalk_Poe({'Arg_Actor': ActorIdentifier(name="Obj_Spirit_PoeHyrule"), 'Npc_Focus': 'Obj_Spirit_PoeHyrule'})


    call PoeTalk01({'Npc': ActorIdentifier(name="Obj_Spirit_PoeHyrule")})

}

void InitTalk_Poe() {
    Obj_Spirit_Poe_Big[InitTalk_Poe(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    Obj_Spirit_Poe_Big[InitTalk_Poe(Arg_Actor)].EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc_Focus', 'Target': 3, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {
        Npc_Navi.EventNaviChangeColor({'IsWaitEnd': True, 'Color': 0})

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'LookAtInstanceName': '', 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Focus'})

    }

}

void PoeTalk00() {

    call Mask_All_Poe()

    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 6}) {
        if !Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
            Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0011', 'MaintainPerformanceState': 0})
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0016', 'MaintainPerformanceState': 0})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 7}) {
        if !Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
            Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0012', 'MaintainPerformanceState': 0})
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0017', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BigPoe'}) {
        Event136:
        if !Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritQueryIsTalked() {
            Event230:
            if !Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0001', 'MaintainPerformanceState': 0})
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0015', 'MaintainPerformanceState': 0})
            }
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0013', 'MaintainPerformanceState': 0})
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0014', 'MaintainPerformanceState': 0})
            }
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0002', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryRandomChoice8() {
              case 0:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0003', 'MaintainPerformanceState': 0})
              case 1:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0004', 'MaintainPerformanceState': 0})
              case 2:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0005', 'MaintainPerformanceState': 0})
              case 3:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0006', 'MaintainPerformanceState': 0})
              case 4:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0007', 'MaintainPerformanceState': 0})
              case 5:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0008', 'MaintainPerformanceState': 0})
              case 6:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0009', 'MaintainPerformanceState': 0})
              case 7:
                Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0010', 'MaintainPerformanceState': 0})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Poe'}) {
        goto Event136
    } else
    if !Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritQueryIsTalked() {
        goto Event230
    } else {
        Obj_Spirit_PoeHyrule[PoeTalk00(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0000', 'ASName': '', 'MaintainPerformanceState': 0})
    }
}

void PoeTalk01() {

    call Mask_All_Poe()

    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 6}) {
        if !Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
            Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0116', 'MaintainPerformanceState': 0})
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0112', 'MaintainPerformanceState': 0})
        }
    } else
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 7}) {
        if !Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
            Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0117', 'MaintainPerformanceState': 0})
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0113', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_BigPoe'}) {
        Event155:
        if !Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritQueryIsTalked() {
            Event144:
            if !Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0101', 'MaintainPerformanceState': 0})
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0102', 'MaintainPerformanceState': 0})
            }
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0114', 'MaintainPerformanceState': 0})
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0115', 'MaintainPerformanceState': 0})
            }
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0103', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryRandomChoice8() {
              case 0:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0104', 'MaintainPerformanceState': 0})
              case 1:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0105', 'MaintainPerformanceState': 0})
              case 2:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0106', 'MaintainPerformanceState': 0})
              case 3:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0107', 'MaintainPerformanceState': 0})
              case 4:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0108', 'MaintainPerformanceState': 0})
              case 5:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0109', 'MaintainPerformanceState': 0})
              case 6:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0110', 'MaintainPerformanceState': 0})
              case 7:
                Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0111', 'MaintainPerformanceState': 0})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Bottle_Poe'}) {
        goto Event155
    } else
    if !Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritQueryIsTalked() {
        goto Event144
    } else {
        Obj_Spirit_PoeHyrule[PoeTalk01(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0100', 'MaintainPerformanceState': 0})
    }
}

void PoeTalk02() {

    call Mask_All_BigPoe()

    switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 0}) {
      case [0, 1]:
        if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
            Event221:
            if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventQueryAvoidDuplicationRandomChoice2() {
                Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0200', 'MaintainPerformanceState': 0})
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0201', 'MaintainPerformanceState': 0})
            }
        } else {
            Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0202', 'MaintainPerformanceState': 0})
        }
      case 2:
        switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 1}) {
          case 1:
            if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                goto Event221
            } else {
                Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0203', 'MaintainPerformanceState': 0})
            }
          case 2:
            switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 2}) {
              case 1:
                if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                    goto Event221
                } else {
                    Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0204', 'MaintainPerformanceState': 0})
                }
              case 2:
                switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 3}) {
                  case 1:
                    if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                        goto Event221
                    } else {
                        Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0205', 'MaintainPerformanceState': 0})
                    }
                  case 2:
                    switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 4}) {
                      case 1:
                        if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                            goto Event221
                        } else {
                            Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0206', 'MaintainPerformanceState': 0})
                        }
                      case 2:
                        switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 5}) {
                          case 1:
                            if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                                goto Event221
                            } else {
                                Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0207', 'MaintainPerformanceState': 0})
                            }
                          case 2:
                            switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 6}) {
                              case 1:
                                if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                                    goto Event221
                                } else {
                                    Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0208', 'MaintainPerformanceState': 0})
                                }
                              case 2:
                                switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 7}) {
                                  case 1:
                                    if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                                        goto Event221
                                    } else {
                                        Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0209', 'MaintainPerformanceState': 0})
                                    }
                                  case 2:
                                    switch GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 8}) {
                                      case 1:
                                        if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                                            goto Event221
                                        } else {
                                            Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0210', 'MaintainPerformanceState': 0})
                                        }
                                      case 2:
                                        if !Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritQueryIsTalked() {
                                            goto Event221
                                        } else {
                                            Obj_Spirit_PoeHyrule[PoeTalk02(Npc)].EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0211', 'MaintainPerformanceState': 0})
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Mask_All_Poe() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask0_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask0_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask0_Amiibo03'})

      case 1:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_11', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_12', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_13', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_14', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_15', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_16', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_17', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_18', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_19', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask1_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask1_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask1_Amiibo03'})

      case 2:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_21', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_23', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_24', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_26', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_27', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_28', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_29', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_25', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_22', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask2_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask2_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask2_Amiibo03'})

    }
}

void Mask_All_BigPoe() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_101', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_102', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_103', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_104', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_105', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_106', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_107', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_108', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_109', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask4_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask4_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask4_Amiibo03'})

      case 1:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_111', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_112', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_113', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_114', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_115', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_116', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_117', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_118', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_119', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask5_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask5_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask5_Amiibo03'})

      case 2:

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_121', 'Mask_Skull_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_122', 'Mask_Spooky_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_123', 'Mask_Bunny_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_124', 'Mask_Truth_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_125', 'Mask_Goron_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_126', 'Mask_Zora_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_127', 'Mask_Gerudo_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_128', 'ChangeTheTopic_Talk': 'EventFlowMsg/Enemy_Event:PoeMask_129', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Enemy_Event:PoeMask6_Amiibo01', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Enemy_Event:PoeMask6_Amiibo02', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Enemy_Event:PoeMask6_Amiibo03'})

    }
}
