-------- EventFlow: Npc_Zora_007 --------

Actor: Npc_Zora_007
entrypoint: None()
actions: ['EventTalk', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget']
queries: ['EventQueryIsPlayingSameAS', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventNPCTurnToObjectGreeting', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithDrawn']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {

        call JabuJabuCleared()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_007_HasWorried'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step06_Exp'}) {
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'OverrideStyle': 0, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_140'})
                } else {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_139', 'OverrideStyle': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_126', 'MaintainPerformanceState': 0})
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_127', 'MaintainPerformanceState': 0})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_007_Talk_Event164', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_138', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_137', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_148', 'MaintainPerformanceState': 0})
            }
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_125', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        }
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_106', 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_103', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
            Event101:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_107', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_136', 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_106', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
            goto Event101
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        if !Npc_EventStarter.EventQueryHaveTalked() {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_147', 'MaintainPerformanceState': 0})
                Event38:
                if !Player_Event.EventQueryPlayerIsEquipMask() {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_139', 'MaintainPerformanceState': 0})
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 8, 'ASName': 'Act_Sad_Wait', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_103', 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'IsOverrideStyle': False, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
                    Event3:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_102', 'MaintainPerformanceState': 0})
                        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_103', 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Zora_007_HasWorried'})
                        Npc_Zora_007.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                        Event43:
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_007_Talk_Event146', 'Value': True, 'Index': -1})
                    } else {
                        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_136', 'MaintainPerformanceState': 0})
                        Npc_Zora_007.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                        goto Event43
                    }
                } else {
                    Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_139', 'MaintainPerformanceState': 0})
                    goto Event3
                }
            } else
            if !Npc_Zora_007.EventQueryIsPlayingSameAS({'ASName': 'Wait', 'Partial': ''}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'ASName': 'Act_Sad_Wait', 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_144', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Event175:
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_145', 'MaintainPerformanceState': 0})
                goto Event38
            } else {
                goto Event175
            }
        } else
        if !Npc_Zora_007.EventQueryIsPlayingSameAS({'ASName': 'Wait', 'Partial': ''}) {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'ASName': 'Act_Sad_Wait', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_135', 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 3})
            Npc_Zora_007.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_123', 'MaintainPerformanceState': 0})
            Event7:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            if !Player_Event.EventQueryPlayerIsEquipMask() {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_129', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_101', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            }
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_139', 'MaintainPerformanceState': 0})
            goto Event3
        } else {
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
            Npc_Zora_007.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_124', 'MaintainPerformanceState': 0})
            goto Event7
        }
    }
}

void Near() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step06_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Get_StoneOfWater_GetRutoLetter'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsDisplayInTerror': False, 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Zora_007:Near_02'})
    }
}

void JabuJabuCleared() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_007_StoneOfWaterClearedTalk', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_125', 'ASName': '', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_111', 'ASName': '', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_110', 'ASName': '', 'MaintainPerformanceState': 0})
        }
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_134', 'MaintainPerformanceState': 0})
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Pray', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_150', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Zora_007.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_05', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_08', 'OverrideStyle': 0, 'ASName': '', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_07', 'ASName': '', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_101', 'ASName': '', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_102', 'ASName': '', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_104', 'ASName': '', 'MaintainPerformanceState': 0})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': True, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Mask_106', 'MaintainPerformanceState': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_StoneOfWaterClearedTalk', 'Index': -1, 'Value': True})
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_109', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_108', 'MaintainPerformanceState': 0})
        }
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Pray', 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_130', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_131', 'MaintainPerformanceState': 0})
    }
}

void ShowLetter() {

    call InitTalk.InitTalk_OnEvent({'Arg_Greeting': 4, 'InstanceNameA': '', 'ActorNameA': 'Npc_Zora_007', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_007"), 'Arg_Turn': 3})

    Npc_Zora_007.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()

    fork {

        call ShowItem.ShowItemSuccess_NoCamera_BottleItem({'BottleItem': 5, 'BoolValue': True})

    } {

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Zora_007")})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_007_Talk_Event164', 'Index': -1}) {
        if !Npc_Zora_007.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_141'})
        } else {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_142'})
        }
        Event186:

        call NpcCommon.ShowItem_Close()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Zora_007_Talk_Event164', 'Value': True, 'Index': -1})
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_104', 'MaintainPerformanceState': 0})
        Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_140', 'MaintainPerformanceState': 0})
        goto Event186
    }
}

void Sub_CanbeStopped_Zora_Camera() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Zora_007', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 10.0}) {
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Npc_Zora_007', 'TargetOffset': [0.0, 1.5, 0.0], 'IdealDistance': 1.7000000476837158, 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceXZAngle': 20.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0}) {
            Event9:
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Zora_007', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 20.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'IdealDistance': 1.7000000476837158, 'TargetOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'IsWaitEnd': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Zora_007', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 20.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 'MoveTime', 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'IdealDistance': 1.7000000476837158, 'TargetOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': False})
        }
    } else {
        goto Event9
    }
}

void Kingzora_CanbeStopped() {
    Event207:
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Common.AirStartUp_WaitForAttack()

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZoraDomain_CanbeStopped_KingZora', 'Index': -1}) {

        call InitTalk.InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly({'Arg_Turn': 4, 'InstanceName': '', 'ActorName': 'Npc_Zora_007', 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Zora_007:Talk_113', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_007")})


        fork {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_117', 'MaintainPerformanceState': 0})
        } {

            call Sub_CanbeStopped_Zora_Camera({'MoveTime': 60})

        }

        Event100:
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': False, 'ASCommand': 'EvtWait', 'InstanceName': 'CanbeStopped'})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.46000000834465027, 2.319999933242798, -3.259999990463257], 'AtVector': [0.0, 1.1799999475479126, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Npc_Zora_007.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Zora_007.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZoraDomain_CanbeStopped_KingZora', 'Index': -1}) {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_119', 'MaintainPerformanceState': 0})
            } else {
                Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_115', 'MaintainPerformanceState': 0})
                Event203:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraDomain_CanbeStopped_KingZora', 'Index': -1, 'Value': True})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ZoraDomain_CanbeStopped_KingZora', 'Index': -1}) {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_118', 'MaintainPerformanceState': 0})
        } else {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_114', 'MaintainPerformanceState': 0})
            goto Event203
        }
    } else {

        call InitTalk.InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly({'Arg_Turn': 4, 'InstanceName': '', 'ActorName': 'Npc_Zora_007', 'Arg_Actor': ActorIdentifier(name="Npc_Zora_007"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Zora_007:Talk_113'})


        fork {
            Npc_Zora_007.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Zora_007:Talk_116', 'MaintainPerformanceState': 0})
        } {

            call Sub_CanbeStopped_Zora_Camera({'MoveTime': 60})

        }

        goto Event100
    }
}

void Ruto_CanbeStopped() {
    goto Event207
}
