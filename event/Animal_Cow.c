-------- EventFlow: Animal_Cow --------

Actor: Animal_Cow
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsAnyBottleEmpty', 'EventQueryIsExistBottleTypeInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsRecommendedMelody', 'EventQueryMelodyTypeForNormal', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cow_LinkHouse
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_003
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_003_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_008
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Animal_Cow_GerudoFortress
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cow_GerudoValley
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Animal_Cow[CowTalk(Animal_Cow)]
entrypoint: CowTalk(Animal_Cow)
actions: ['EventTalk']
queries: ['EventQueryVolatileGeneralPurposeFlagOn']
params: None

Actor: Npc_EventStarter[Cow_GiveMilk(Actor)]
entrypoint: Cow_GiveMilk(Actor)
actions: ['EventTriggerSetModelLodManual', 'EventPlayAS', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)]
entrypoint: Cow_GiveMilk_gerudo(Actor)
actions: ['EventPlayAS', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTalk']
queries: []
params: None

Actor: Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)]
entrypoint: PushToBottleMilk_LinkHouse0(Animal_Cow)
actions: ['EventTalk']
queries: []
params: None

void Talk() {

    call CowTalk({'Animal_Cow': ActorIdentifier(name="Animal_Cow"), 'ActorCawName': 'Animal_Cow'})

}

void GiveMilk() {

    call Cow_GiveMilk({'Cow': 'Animal_Cow', 'EventName': 'Animal_Cow_PushToBottleMilk', 'Actor': ActorIdentifier(name="Animal_Cow")})

}

void PushToBottleMilk() {
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': -1}) {
        Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Animal_Cow_PushToBottleMilk_Event5', 'Value': True, 'Index': -1})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_01', 'MaintainPerformanceState': 0})
            Event6:
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_04', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Cow_IsGetMilkFromCow'})

            call Dm_SY_GetInEvent.GetInEventInBottle({'ActorName': 'Item_Bottle_Milk', 'BottleItem': 10, 'IsTalkCamera': False})

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_05_05'})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_02', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_03', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_04', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_06', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_07', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_08', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_101', 'MaintainPerformanceState': 0})
            goto Event6
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
            Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_102', 'MaintainPerformanceState': 0})
        }
        goto Event6
    } else {
        Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Animal_Cow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_05', 'MaintainPerformanceState': 0})
    }
}

void CowTalk() {

    call InitTalk.InitTalk_OnEvent_NoCamera_Navi({'Arg_Turn': 0, 'Arg_Greeting': 3, 'InstanceNameA': '', 'Arg_Actor': 'Animal_Cow', 'ActorNameA': 'ActorCawName'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Gerudo_003_NowTerror'}) {
        Animal_Cow[CowTalk(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'NotPlayLipSyncAnim': True, 'ASName': 'Roar_Short', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_12', 'MaintainPerformanceState': 0})
        Animal_Cow[CowTalk(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 8, 'IsOverrideStyle': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_07'})
        Event54:
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Animal_Cow_HaveTalked'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Cow_IsGetMilkFromCow'}) {
        Animal_Cow[CowTalk(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'NotPlayLipSyncAnim': True, 'ASName': 'Roar_Short', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_14'})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:

            call NpcCommon.Mask_Truth({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Animal_Cow:Mask_05_03'})

          case 1:

            call NpcCommon.Mask_Truth({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Animal_Cow:Mask_05_01'})

          case 2:

            call NpcCommon.Mask_Truth({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Animal_Cow:Mask_05_02'})

        }
    } else {
        Animal_Cow[CowTalk(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_00', 'NotPlayLipSyncAnim': True, 'ASName': 'Roar_Short', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !Animal_Cow[CowTalk(Animal_Cow)].EventQueryVolatileGeneralPurposeFlagOn() {
            goto Event54
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Animal_Cow_PushToBottleMilk_Event5', 'Index': -1}) {

                call NpcCommon.Mask_Truth({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Animal_Cow:Mask_05_04'})

            } else {

                call NpcCommon.Mask_Truth({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Animal_Cow:Mask_05'})

            }
            goto Event54
        } else {
            goto Event54
        }
    }
}

void Cow_GiveMilk() {
    Npc_EventStarter[Cow_GiveMilk(Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'IsOcarinaEvent_Cow_GiveMilk_Ocarina'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 1, 'HasRecommendedMelody': True})

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'IsOcarinaEvent_Cow_GiveMilk_Ocarina'})
    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        call CawCamera({'Cow': 'Cow'})

        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False})

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 0, 'Arg_Greeting': 3, 'InstanceName': '', 'Arg_Actor': 'Actor', 'ActorName': 'Cow'})

        Npc_EventStarter[Cow_GiveMilk(Actor)].EventPlayAS({'ASName': 'Roar', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'EventName'})
        Npc_EventStarter[Cow_GiveMilk(Actor)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event54
    } else
    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 3, 4, 5, 12] {

        call CawCamera({'Cow': 'Cow'})

        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False})

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 0, 'Arg_Greeting': 3, 'InstanceName': '', 'Arg_Actor': 'Actor', 'ActorName': 'Cow'})

        Npc_EventStarter[Cow_GiveMilk(Actor)].EventPlayAS({'ASName': 'Roar', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_EventStarter[Cow_GiveMilk(Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_06', 'MaintainPerformanceState': 0})
        Npc_EventStarter[Cow_GiveMilk(Actor)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event54
    }
}

void PushToBottleMilk_LinkHouse() {
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': -1}) {
        Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Animal_Cow_PushToBottleMilk_Event5', 'Value': True, 'Index': -1})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_01', 'MaintainPerformanceState': 0})
            Event76:
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_04', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Cow_IsGetMilkFromCow'})

            call Dm_SY_GetInEvent.GetInEventInBottle({'ActorName': 'Item_Bottle_Milk', 'BottleItem': 10, 'IsTalkCamera': False})

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_05_05'})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_02', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_03', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_04', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_06', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_07', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_08', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_101', 'MaintainPerformanceState': 0})
            goto Event76
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
            Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_102', 'MaintainPerformanceState': 0})
        }
        goto Event76
    } else {
        Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Animal_Cow_LinkHouse.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_05', 'MaintainPerformanceState': 0})
    }
}

void GiveMilk_GerudoValley() {
    Npc_Gerudo_003.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoValley_Npc_Gerudo_003_Terror'})

    call Cow_GiveMilk_gerudo({'EventName': 'Animal_Cow_PushToBottleMilk', 'Actor': ActorIdentifier(name="Animal_Cow_GerudoValley"), 'Cow': 'Animal_Cow_GerudoValley'})

}

void GiveMilk_GerudoFortress() {
    Npc_Gerudo_003_Adult.EventTriggerParticipateEvent()
    Npc_Gerudo_008.EventTriggerParticipateEvent()

    call Cow_GiveMilk_gerudo({'EventName': 'Animal_Cow_PushToBottleMilk', 'Actor': ActorIdentifier(name="Animal_Cow_GerudoFortress"), 'Cow': 'Animal_Cow_GerudoFortress'})

}

void Cow_GiveMilk_gerudo() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 1, 'HasRecommendedMelody': True})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        call Common_Camera_Pln.CameraDoF_Event_Common()

        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorXZ': 0, 'ToleranceDistance': 10.0, 'IdealDistance': 14.0, 'TargetOffset': [0.0, 1.0, 0.0], 'ToleranceYDownwardAngle': 5.0, 'IsLinearMove': False, 'TargetActorName': 'Cow'})
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False})

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 0, 'Arg_Greeting': 3, 'InstanceName': '', 'Arg_Actor': 'Actor', 'ActorName': 'Cow'})

        Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)].EventPlayAS({'ASName': 'Roar', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

        call PushToBottleMilk_LinkHouse0({'Animal_Cow': 'Actor'})

        Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        Event109:
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Animal_Cow_HaveTalked'})
    } else
    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 3, 4, 5, 12] {

        call Common_Camera_Pln.CameraDoF_Event_Common()

        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorXZ': 0, 'ToleranceDistance': 10.0, 'IdealDistance': 14.0, 'TargetOffset': [0.0, 1.0, 0.0], 'ToleranceYDownwardAngle': 5.0, 'IsLinearMove': False, 'TargetActorName': 'Cow'})
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False})

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 0, 'Arg_Greeting': 3, 'InstanceName': '', 'Arg_Actor': 'Actor', 'ActorName': 'Cow'})

        Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)].EventPlayAS({'ASName': 'Roar', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_06', 'MaintainPerformanceState': 0})
        Npc_EventStarter[Cow_GiveMilk_gerudo(Actor)].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        goto Event109
    }
}

void PushToBottleMilk_LinkHouse0() {
    if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
        Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Animal_Cow_PushToBottleMilk_Event5', 'Value': True, 'Index': -1})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_01', 'MaintainPerformanceState': 0})
            Event116:
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_04', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Cow_IsGetMilkFromCow'})

            call Dm_SY_GetInEvent.GetInEventInBottle({'ActorName': 'Item_Bottle_Milk', 'BottleItem': 10, 'IsTalkCamera': False})

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_05_05'})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_02', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_03', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_04', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_06', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_07', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_08', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_101', 'MaintainPerformanceState': 0})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
            Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'OverrideStyle': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Mask_102', 'MaintainPerformanceState': 0})
        }
        goto Event116
    } else {
        Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        Animal_Cow_LinkHouse[PushToBottleMilk_LinkHouse0(Animal_Cow)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Animal_Cow:Talk_05', 'MaintainPerformanceState': 0})
    }
}

void CawCamera() {

    fork {
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Cow', 'ToleranceXZAngle': 30.0, 'TargetActorInstanceName': '', 'IdealDistance': 6.0, 'ToleranceDistance': 2.5, 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.0, 1.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 1}) {
            if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Cow', 'ToleranceXZAngle': 180.0, 'TargetActorInstanceName': '', 'IdealDistance': 6.0, 'ToleranceDistance': 2.5, 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'LookAtVectorXZ': 1, 'TargetOffset': [0.0, 1.0, 1.0], 'LookAtVectorY': 1}) {
                EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'LookAtVectorY': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'Cow', 'IdealDistance': 6.0, 'ToleranceDistance': 2.5, 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 360.0, 'TargetOffset': [0.0, 1.0, 1.0]})
            } else {
                EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'Cow', 'ToleranceXZAngle': 180.0, 'IdealDistance': 6.0, 'ToleranceDistance': 2.5, 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'LookAtVectorXZ': 1, 'TargetOffset': [0.0, 1.0, 1.0], 'LookAtVectorY': 1})
            }
        } else {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'Cow', 'ToleranceXZAngle': 30.0, 'IdealDistance': 6.0, 'ToleranceDistance': 2.5, 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.0, 1.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 1})
        }
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

}
