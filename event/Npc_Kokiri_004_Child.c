-------- EventFlow: Npc_Kokiri_004_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerChangeEmotion', 'EventTriggerSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_002_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Kokiri_003_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_Kokiri_003_Child.EventTriggerParticipateEvent()
    Npc_Kokiri_002_Child.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_004_Child_IsAfterFirstTalk'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_17', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_16', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            }
            Event21:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_15', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'MaintainPerformanceState': 0})
            Event22:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_11', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_21', 'ChoiceLabel1': 6, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_12', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                    Event51:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                } else {
                    Event86:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_10', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_09', 'MaintainPerformanceState': 0})
                    }
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_12', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_22', 'ChoiceLabel1': 6, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_11', 'MaintainPerformanceState': 0})
                    goto Event51
                } else {
                    goto Event86
                }
              case 2:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_19', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_20', 'MaintainPerformanceState': 0})
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_13', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            goto Event21
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 1, 'NpcFairy_MovingFlag': True})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_03', 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        Event10:
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_004_Child_IsAfterFirstTalk'})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_04', 'MaintainPerformanceState': 0})
        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_14', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_06', 'MaintainPerformanceState': 0})
        }
    } else {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 0, 'NpcFairy_MovingFlag': False})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_01', 'ASName': 'Act_Rest_Fairy', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_02', 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        goto Event10
    }
}

void Goto_HyruleCastle_IsCompleted_Exp_Talk() {
    Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_Kokiri_003_Child.EventTriggerParticipateEvent()
    Npc_Kokiri_002_Child.EventTriggerParticipateEvent()

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_004_Child_DekuTreeTalk_Event23', 'Index': -1}) {
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 0x4deaea8c:
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_13', 'MaintainPerformanceState': 0})
            }
            Event38:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_204', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'MaintainPerformanceState': 0})
            goto Event22
          case 0x2fe33985:
            goto Event38
        }
    } else {
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 0x4deaea8c:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_205', 'MaintainPerformanceState': 0})
            Event28:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_200', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_004_Child_DekuTreeTalk_Event23', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_203', 'MaintainPerformanceState': 0})
            goto Event38
          case 0x2fe33985:
            goto Event28
        }
    }
}

void Get_StoneOfForest_IsCompleted_Exp_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_004_Child_Get_StoneOfForest_IsCompleted_Exp_Talk_Event45', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Kokiri_004_Child:Near_01', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Get_StoneOfForest_IsCompleted_Exp_Talk() {
    Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_004_Child_Get_StoneOfForest_IsCompleted_Exp_Talk_Event45', 'Index': -1}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_104', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_105', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_106', 'MaintainPerformanceState': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_004_Child_Get_StoneOfForest_IsCompleted_Exp_Talk_Event45', 'Value': True, 'Index': -1})

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 2, 'NpcFairy_MovingFlag': True})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_107', 'MaintainPerformanceState': 0})

        call NpcCommon.Npc_IsConfront_WithLinkAS({'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'LinkAS': 'EvtTalkingS'})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Talk_100', 'MaintainPerformanceState': 0})
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_004_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_004_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step03_Exp'}) {
        switchcall Mask_Talk() {
          case fnv1a("Mask_Talk"):
            Event67:
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk1() {
          case fnv1a("Mask_Talk"):
            goto Event67
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_01', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_08', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_02_01', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_103', 'ASName': 'Act_Rest_Fairy'}) {
      case 0x469157c2:
        return fnv1a("Mask_Talk")
      case 0x5b3dff05:
        return 0xa6da0479
    }
}

void Mask_Talk1() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_004_Child:Mask_103', 'ASName': 'Act_Rest_Fairy'}) {
      case 0x469157c2:
        return fnv1a("Mask_Talk")
      case 0x5b3dff05:
        return 0xa6da0479
    }
}

void Near() {
    ;
}
