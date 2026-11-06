-------- EventFlow: Npc_Zora_005 --------

Actor: Npc_Zora_005
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsPlayingSameAS']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Invisible_Zora_005
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    if !Npc_Zora_005.EventQueryIsPlayingSameAS({'ASName': 'Act_Pray', 'Partial': ''}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    }
    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_005_Talk_Event44', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_005_Talk_Event46', 'Index': -1}) {
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_251', 'MaintainPerformanceState': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0})
                Event48:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call JabuJabuCamera({'ASCommand': 'EvtTalkWonder', 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_243'})

                    if !Player_Event.EventQueryPlayerIsEquipMask() {
                        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_250', 'MaintainPerformanceState': 0})
                            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_255', 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True})
                        } else {
                            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_252', 'MaintainPerformanceState': 0})
                        }
                    } else
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
                        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_254', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_250', 'MaintainPerformanceState': 0})
                    }
                } else
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_249', 'MaintainPerformanceState': 0})
                        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_255', 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True})
                    } else {
                        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_256', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_249', 'MaintainPerformanceState': 0})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_005_Talk_Event46', 'Value': True, 'Index': -1})
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_248', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 5, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0})
                goto Event48
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 5, 'ChoiceLabel4': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_242', 'MaintainPerformanceState': 0})
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_238', 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0})
                Event91:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call JabuJabuCamera({'ASCommand': 'EvtTalkWonder', 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_243'})

                    Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_244', 'MaintainPerformanceState': 0})
                    Event83:
                    Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_246', 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog'})
                } else {
                    Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_245', 'MaintainPerformanceState': 0})
                    goto Event83
                }
            } else {
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 5, 'ChoiceLabel4': 3, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_242', 'MaintainPerformanceState': 0})
                goto Event91
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 5, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_241', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_238', 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0})
            goto Event91
        } else {
            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 5, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_241', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0, 'ChoiceNumber': 2})
            goto Event91
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_005_Talk_Event44', 'Value': True, 'Index': -1})
        Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_200', 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_237', 'MaintainPerformanceState': 0})
            Event19:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Event54:
            Npc_Zora_005.EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_236', 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call JabuJabuCamera({'ASCommand': 'EvtTalkWonder', 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_209'})

            } else {

                call JabuJabuCamera({'ASCommand': 'EvtTalkNo', 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_235'})

            }
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_238', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_210', 'MaintainPerformanceState': 0})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
            Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Mask_239', 'MaintainPerformanceState': 0})
            goto Event19
        } else {
            goto Event54
        }
    }
}

void Near() {
    Npc_Zora_005.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Zora_005:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void JabuJabuCamera() {
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ASCommand': 'ASCommand'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'MessageId'})

    call NpcCommon.SuggestCamera_Start({'TurnTargetActorName': 'DestinationAnchor', 'TurnTargetInstanceName': 'Npc_Zora_05_CameraTarget', 'CameraTargetInstanceName': 'Npc_Zora_05_CameraPosition', 'CameraTargetActorName': 'DestinationAnchor', 'TurnTarget': 5, 'MoveTotargetPosType': 0, 'CameraAtVector': [-8.9443998336792, 105.87359619140625, 10.66819953918457], 'NpcActor': ActorIdentifier(name="Npc_Zora_005")})

    Npc_Invisible_Zora_005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_005:Talk_208', 'MaintainPerformanceState': 0})

    call NpcCommon.SuggestCamera_Reset({'TurnTargetInstanceName': '', 'TurnTargetActorName': 'Npc_Zora_005', 'NpcActor': ActorIdentifier(name="Npc_Zora_005")})

}
