-------- EventFlow: Npc_Kokiri_Saria_Child_SacredForestMeadow --------

Actor: Npc_Kokiri_Saria_Child_SacredForestMeadow
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerKokiriRequestComeCloserFairy']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTurnFaceToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsRecommendedMelody', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerConversate']
queries: ['EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipArmor', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_EventStarter[StartTalking_DuringPlayerTurn_ForSaria(NpcActor)]
entrypoint: StartTalking_DuringPlayerTurn_ForSaria(NpcActor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_Talk_Event66', 'Index': -1}) {
        Event59:
        switchcall InitTalk_Saria_OcarinaPlaying_SacredForestMeadow() {
          case [569209421, 552431802]:

            call Mask_All()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_Talk_Event4', 'Index': -1}) {
                if Npc_Kokiri_Saria_Child_SacredForestMeadow.EventQueryIsOnRecentTalkFlag() {
                    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_004', 'MaintainPerformanceState': 0})
                }
                Event46:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SariaAboutSacredForestMeadow_Child'}) {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_026', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_027', 'MaintainPerformanceState': 0})
                    }
                    Event16:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_019', 'ChoiceLabel3': 0, 'ChoiceLabel1': 5, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_010', 'ChoiceLabel1': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                            Event60:
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_017', 'MaintainPerformanceState': 0})
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_016', 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SariaAboutSacredForestMeadow_Child'})
                        } else
                        Event9:
                        if !GameSystemActor.EventQueryRandomChoice2() {
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_013', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_014', 'MaintainPerformanceState': 0})
                        }
                      case 1:
                        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_020', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_009', 'MaintainPerformanceState': 0})
                            goto Event60
                        } else
                        goto Event9
                      case 2:
                        goto Event9
                    }
                } else
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_025', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_024', 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                }
                Event12:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_006', 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel1': 3, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                    goto Event16
                } else
                goto Event9
            } else
            if Npc_Kokiri_Saria_Child_SacredForestMeadow.EventQueryIsOnRecentTalkFlag() {
                Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_004', 'MaintainPerformanceState': 0})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_Talk_Event4', 'Value': True, 'Index': -1})
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_007', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
            goto Event12
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_Talk_Event66', 'Value': True, 'Index': -1})
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_029', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_028', 'MaintainPerformanceState': 0})
        }
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_030', 'MaintainPerformanceState': 0})
        goto Event46
    } else {
        goto Event59
    }
}

void PlayOcarina_InFront() {
    Event8:

    call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 2, 'HasRecommendedMelody': True})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayedSariaSong', 'Index': -1, 'Value': True})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerKokiriRequestComeCloserFairy()
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step04_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayOcarina_InFront_Event45', 'Index': -1}) {
                if !Npc_Kokiri_Saria_Child_SacredForestMeadow.EventQueryAvoidDuplicationRandomChoice2() {

                    call StartTalking_DuringPlayerTurn_ForSaria({'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow"), 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_103'})

                } else {

                    call StartTalking_DuringPlayerTurn_ForSaria({'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': '', 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_105', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow")})

                }
            } else {

                call StartTalking_DuringPlayerTurn_ForSaria({'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow"), 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_102'})

                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_104', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayOcarina_InFront_Event45', 'Value': True, 'Index': -1})
            }
        } else
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:

            call StartTalking_DuringPlayerTurn_ForSaria({'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': '', 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_107', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow")})

            Event5:
            if !Npc_Kokiri_Saria_Child_SacredForestMeadow.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_101', 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_106', 'MaintainPerformanceState': 0})
            }
          case 1:

            call StartTalking_DuringPlayerTurn_ForSaria({'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow"), 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_100'})

            goto Event5
          case 2:

            call StartTalking_DuringPlayerTurn_ForSaria({'NpcActor': ActorIdentifier(name="Npc_Kokiri_Saria_Child_SacredForestMeadow"), 'NpcMessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Talk_108', 'ActorName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow', 'InstanceName': ''})

            goto Event5
        }
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        Event4:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Act_Playing_Ocarina'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Near_02'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step02_Exp'}) {
        goto Event4
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_Saria_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_Saria_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_09'})
        }
    } else {
        switchcall Mask_Talk() {
          case 4205900657:
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [3745441359, 1844135360]:

        call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'ASName': '', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_103'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_09'})
        Event94:
        return 4155567800
      case 3362507297:
        goto Event94
      case 488279774:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Saria_Child_SacredForestMeadow:Mask_05'})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 4205900657
    }
}

void PlayOcarina_InBack() {
    goto Event8
}

void InitTalk_Saria_OcarinaPlaying_SacredForestMeadow() {
    if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Act_Playing_Ocarina'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})

        Npc_EventStarter.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        return 569209421
    } else {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})

        return 552431802
    }
}

void StartTalking_DuringPlayerTurn_ForSaria() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Npc_EventStarter[StartTalking_DuringPlayerTurn_ForSaria(NpcActor)].EventTriggerBecomeSpeaker()
        if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'ActorName': 'ActorName', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 25.0})
        && !Npc_Kokiri_Saria_Child_SacredForestMeadow.EventNPCQueryCheckTurnFaceToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'ReachAngleThreshold': 30.0}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [1.25, 1.0, -1.5]}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'ActorName', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [-1.25, 1.0, -1.5], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'ActorName', 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsPosVectorReferenceActorPosOnce': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [1.25, 1.0, -1.5], 'IsEnableRevertFast': False})
            }
        } else {

            fork {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
            } {

                call NaviEventCommon.Navi_followPlayer()

            }

        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_EventStarter[StartTalking_DuringPlayerTurn_ForSaria(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'NpcMessageID'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
        }

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

}
