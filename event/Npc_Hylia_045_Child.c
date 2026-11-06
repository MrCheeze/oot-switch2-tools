-------- EventFlow: Npc_Hylia_045_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_045_Adult
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_045_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)]
entrypoint: DivingChallenge_Common(Npc_EventStarter)
actions: ['EventTalk', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS']
queries: []
params: None

Actor: Npc_EventStarter[DivingChallenge_Common_Talk(Npc_EventStarter)]
entrypoint: DivingChallenge_Common_Talk(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)]
entrypoint: DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

void Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event1', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Child'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_TouchtheBottom_Child'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event130', 'Index': -1}) {
                    if !Npc_Hylia_045_Child.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_200', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_206', 'MaintainPerformanceState': 0})
                    }
                } else
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_200', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_201', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event130', 'Value': True, 'Index': -1})
                Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_202', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MaintainPerformanceState': 0})
                if GameSystemActor.EventQueryTalkChoice2() in [0, 1] {
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_203', 'MaintainPerformanceState': 0})
                }
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_Hylia_045_Child.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_03', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                } else {
                    Event140:
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_205', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_204', 'MaintainPerformanceState': 0})
                goto Event140
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_03', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        }
        Event57:
        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_19', 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

            Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_20', 'MaintainPerformanceState': 0})
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Scale_Gold', 'Num': 1}) {
                Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_23', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsChild() {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Scale_Silver', 'Num': 1}) {
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_22', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_21', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_24', 'MaintainPerformanceState': 0})
            }
        } else {

            call Goodbye()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event1', 'Value': True, 'Index': -1})
        Npc_Hylia_045_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_01', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        goto Event57
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_Goodbye'}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_01'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_01'})
        }
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_03'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_04'})
    }
}

void Goodbye() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_045_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_08', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_045_Goodbye'})
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        switchcall Npc_Hylia_045_Adult.CheckFrontToTarget_30({'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter")}) {
          case 1358716831:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            Event53:
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_Child_GlassTruth'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_045_Child_GlassTruth'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:GlassTruth', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_09', 'MaintainPerformanceState': 0})
            }
          case 1341939212:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

            goto Event53
        }
    } else
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall Npc_Hylia_045_Adult.CheckFrontToTarget_30({'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter")}) {
      case 1358716831:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_05_01'}) {
              case 4205900657:
                Event64:
                return 4151362380
              case 4155567800:
                Event72:
                return 2799305849
            }
        } else {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_103'}) {
              case 4205900657:
                goto Event64
              case 4155567800:
                goto Event72
            }
        }
      case 1341939212:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_05_01', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3}) {
              case 4205900657:
                goto Event64
              case 4155567800:
                goto Event72
            }
        } else {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_09', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_045_Child:Mask_103', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3}) {
              case 4205900657:
                goto Event64
              case 4155567800:
                goto Event72
            }
        }
    }
}

void DivingChallenge_Common() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_045_DivingChallengeTalk_MaskReaction', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_HasDived'}) {
            switchcall DivingChallenge_Common_Talk_With_InitTalk({'Npc_EventStarter': 'Npc_EventStarter', 'LookAtTargetActor': 'LookAtTargetActor', 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_104'}) {
              case 622474979:
                Event186:
                if !Player_Event.EventQueryPlayerIsChild() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Child'}) {
                        Event121:
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_110'})
                    } else {
                        Event197:
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_113'})
                    }
                    Event108:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Value': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_BottomTouched', 'Value': False})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTriggerAIScheduleSelectSchedule()
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Adult'}) {
                    goto Event121
                } else {
                    goto Event197
                }
                goto Event108
              case [1481217705, 4050051088, 1865849498]:
                Event185:
                if !Player_Event.EventQueryPlayerIsChild() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Child'}) {
                        Event198:
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_106', 'MaintainPerformanceState': 0})
                    } else {
                        Event110:
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_112'})
                    }
                    goto Event108
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Adult'}) {
                    goto Event198
                } else {
                    goto Event110
                }
                goto Event108
              case 2696799221:
                Event146:
                if !Player_Event.EventQueryPlayerIsChild() {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_TouchtheBottom_Child', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Child'})
                    goto Event108
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_TouchtheBottom_Adult', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Adult'})
                    goto Event108
                }
            }
        } else {
            switchcall DivingChallenge_Common_Talk_With_InitTalk({'Npc_EventStarter': 'Npc_EventStarter', 'LookAtTargetActor': 'LookAtTargetActor', 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_103'}) {
              case 622474979:
                Event103:
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_109'})
                Event184:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Value': False})
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_19', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': 'Npc_EventStarter'})

                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_20', 'MaintainPerformanceState': 0})
                    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Scale_Gold', 'Num': 1}) {
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_23', 'MaintainPerformanceState': 0})
                        Event100:
                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Value': 0})
                    } else
                    if !Player_Event.EventQueryPlayerIsChild() {
                        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Scale_Silver', 'Num': 1}) {
                            Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_22', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_21', 'MaintainPerformanceState': 0})
                        }
                        goto Event100
                    } else {
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_24', 'MaintainPerformanceState': 0})
                        goto Event100
                    }
                } else {
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_10', 'MaintainPerformanceState': 0})
                    goto Event100
                }
              case 1481217705:
                Event77:
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_100', 'MaintainPerformanceState': 0})
                goto Event184
              case 4050051088:
                Event87:
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_101', 'MaintainPerformanceState': 0})
                goto Event184
              case 1865849498:
                Event79:
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_102', 'MaintainPerformanceState': 0})
                goto Event184
              case 2696799221:
                Event14:
                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Handover', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_111'})

                call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': 'Npc_EventStarter', 'ReveiveItem': 'Obj_Heart_Piece', 'ASName': 'Wait', 'NpcActorName': 'LookAtTargetActor', 'NpcInstanceName': ''})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_HasDived', 'Value': True})
                if !Player_Event.EventQueryPlayerIsChild() {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_TouchtheBottom_Child', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Child'})
                    Event2:
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_104', 'MaintainPerformanceState': 0})
                    Event154:
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Value': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_BottomTouched', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Hylia_045_Goodbye'})
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTriggerAIScheduleSelectSchedule()
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_TouchtheBottom_Adult', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_045_DivingChallenge_IsOncedTouchtheBottom_Adult'})
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
                        goto Event2
                    } else {
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_107'})
                    }
                    goto Event154
                }
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_045_DivingChallengeTalk_MaskReaction', 'Index': -1, 'Value': True})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Zora', 'ArmorSlot': 0}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
              case 0:

                call InitTalk.InitTalk_OnEvent({'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': '', 'Arg_Turn': 3})

                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_06', 'MaintainPerformanceState': 0})
                Event3:
                if !Player_Event.EventQueryPlayerIsChild() {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event1', 'Index': -1}) {
                        Event6:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_045_HasDived'}) {
                            switchcall DivingChallenge_Common_Talk({'Npc_EventStarter': 'Npc_EventStarter', 'LookAtTargetActor': 'LookAtTargetActor', 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_104'}) {
                              case 622474979:
                                goto Event186
                              case [1481217705, 4050051088, 1865849498]:
                                goto Event185
                              case 2696799221:
                                goto Event146
                            }
                        } else {
                            switchcall DivingChallenge_Common_Talk({'Npc_EventStarter': 'Npc_EventStarter', 'LookAtTargetActor': 'LookAtTargetActor', 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_103'}) {
                              case 622474979:
                                goto Event103
                              case 1481217705:
                                goto Event77
                              case 4050051088:
                                goto Event87
                              case 1865849498:
                                goto Event79
                              case 2696799221:
                                goto Event14
                            }
                        }
                    } else {
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_01', 'MaintainPerformanceState': 0})
                        Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Adult:Talk_04', 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Child_NormalTalkHylia_045_Event1', 'Value': True, 'Index': -1})
                        goto Event6
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Adult_Talk_Event52', 'Index': -1}) {
                    goto Event6
                } else {
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Adult:Talk_00', 'MaintainPerformanceState': 0})
                    Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Adult:Talk_04', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_045_Adult_Talk_Event52', 'Value': True, 'Index': -1})
                    goto Event6
                }
              case [1, 2]:

                call InitTalk.InitTalk_OnEvent({'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': '', 'Arg_Turn': 3})

                Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_18', 'MaintainPerformanceState': 0})
                goto Event3
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Index': -1}) {

            call InitTalk.InitTalk_OnEvent({'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': '', 'Arg_Turn': 3})

            Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_108'})
            goto Event3
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
          case 0:

            call InitTalk.InitTalk_OnEvent({'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': '', 'Arg_Turn': 3})

            Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_05', 'MaintainPerformanceState': 0})
            goto Event3
          case [1, 2]:

            call InitTalk.InitTalk_OnEvent({'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': '', 'Arg_Turn': 3})

            Npc_EventStarter[DivingChallenge_Common(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_25', 'MaintainPerformanceState': 0})
            goto Event3
        }
    }
}

void AdultDivingChallenge() {

    call DivingChallenge_Common({'LookAtTargetActor': 'Npc_Hylia_045_Adult', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_045_Adult")})

}

void ChildDivingChallenge() {

    call DivingChallenge_Common({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_045_Child"), 'LookAtTargetActor': 'Npc_Hylia_045_Child'})

}

void Near_DivingChallenge_Reaction_Child() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_045_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_05', 'NotOverriddenByInterestBalloon': True})
    } else {
        Npc_Hylia_045_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_045_Child:Near_06', 'NotOverriddenByInterestBalloon': True})
    }
}

void DivingChallenge_Common_Talk() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Index': -1}) {
            return 622474979
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Value': 3, 'Index': -1}) {
          case [0, 1]:
            Npc_EventStarter[DivingChallenge_Common_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
            return 1481217705
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 6}) {
              case 0:
                Npc_EventStarter[DivingChallenge_Common_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
                return 4050051088
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
                  case 0:
                    Npc_EventStarter[DivingChallenge_Common_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
                    return 1865849498
                  case [1, 2]:
                    Event159:
                    Npc_EventStarter[DivingChallenge_Common_Talk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
                    return 2696799221
                }
            }
        }
      case [1, 2]:
        goto Event159
    }
}

void DivingChallenge_Common_Talk_With_InitTalk() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_045_DivingChallenge_SinkWithHeavyBoots', 'Index': -1}) {

            call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': ''})

            return 622474979
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Value': 3, 'Index': -1}) {
          case [0, 1]:

            call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': ''})

            Npc_EventStarter[DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
            return 1481217705
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 6}) {
              case 0:

                call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': ''})

                Npc_EventStarter[DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
                return 4050051088
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_045_DepthOfDiving', 'Index': -1, 'Value': 9}) {
                  case 0:

                    call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': ''})

                    Npc_EventStarter[DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_045_Child:Talk_105', 'MaintainPerformanceState': 0})
                    return 1865849498
                  case [1, 2]:
                    Event97:

                    call InitTalk.InitTalk_OnEvent({'Arg_Turn': 4, 'Arg_Actor': 'Npc_EventStarter', 'Arg_Greeting': 3, 'ActorNameA': 'LookAtTargetActor', 'InstanceNameA': ''})

                    Npc_EventStarter[DivingChallenge_Common_Talk_With_InitTalk(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
                    return 2696799221
                }
            }
        }
      case [1, 2]:
        goto Event97
    }
}
