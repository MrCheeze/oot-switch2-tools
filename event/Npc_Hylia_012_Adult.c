-------- EventFlow: Npc_Hylia_012_Adult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_012_Adult
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerConversate', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerSlowWalkStop', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse', 'EventQueryPlayerIsEquipArmor', 'EventQueryIsHorseEponaNear']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventBustShotCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerOwnedHorseParticipateInPlayingMainEvent']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviWarpToPlayerHomePosition', 'EventNaviLookAtObject']
queries: ['EventQueryNaviAttentionType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step06_03_Exp'}) {
        Event173:

        call Mask_All()

        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 1307241100:
            if !Npc_Hylia_012_Adult.EventQueryIsOnRecentTalkFlag() {
                Event1:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_IsAfterClearEvent_Npc_Hylia_012_Adult', 'Index': -1}) {
                        switchcall NpcCommon.CheckAlreadyMaskTalked() {
                          case 1307241100:
                            if Npc_Hylia_012_Adult.EventQueryIsOnRecentTalkFlag() {
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_05', 'MaintainPerformanceState': 0})
                            }
                            Event6:
                            if !Npc_Hylia_012_Adult.EventQueryAvoidDuplicationRandomChoice2() {
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_03', 'MaintainPerformanceState': 0})
                            } else {
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_06', 'MaintainPerformanceState': 0})
                            }
                            Event179:
                            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_PoacherSaw', 'Num': 1}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_Monologue'}) {
                                    Npc_Hylia_012_Adult.EventTriggerRequestLookAtTheFront()
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_114', 'MaintainPerformanceState': 0})
                                    } else {
                                        Event177:
                                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_113', 'MaintainPerformanceState': 0})
                                    }
                                } else {
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_Monologue'})
                                    Npc_Hylia_012_Adult.EventTriggerRequestLookAtTheFront()
                                    goto Event177
                                }
                            }
                          case 803420549:
                            goto Event6
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_IsAfterClearEvent_Npc_Hylia_012_Adult', 'Index': -1, 'Value': True})
                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_04', 'MaintainPerformanceState': 0})

                        call Look_Bridge()

                    }
                } else
                if !Npc_Hylia_012_Adult.EventQueryIsOnRecentTalkFlag() {
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 0}) {
                      case [0, 1]:
                        if !Npc_Hylia_012_Adult.EventQueryAvoidDuplicationRandomChoice2() {
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_01', 'ChoiceLabel3': 4, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 4, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_17', 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                        }
                        Event130:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_Suttoko'}) {
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_26', 'MaintainPerformanceState': 0})
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_15', 'MaintainPerformanceState': 0})
                                Event137:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 2}) {
                                  case 0:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 1}) {
                                      case 0:
                                        Event131:
                                        if !GameSystemActor.EventQueryRandomChoice2() {
                                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_21', 'MaintainPerformanceState': 0})
                                        } else {
                                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_20', 'MaintainPerformanceState': 0})
                                        }
                                        goto Event179
                                      case [1, 2]:
                                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_39', 'MaintainPerformanceState': 0})
                                        goto Event131
                                    }
                                  case 1:
                                    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_40', 'MaintainPerformanceState': 0})
                                    goto Event131
                                  case 2:
                                    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_41', 'MaintainPerformanceState': 0})
                                    goto Event131
                                }
                            } else {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_Suttoko'})
                                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_24', 'MaintainPerformanceState': 0})
                                goto Event137
                            }
                        } else
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 1}) {
                          case 0:
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_12', 'MaintainPerformanceState': 0})
                            goto Event179
                          case [1, 2]:
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_43', 'MaintainPerformanceState': 0})
                            goto Event179
                        }
                      case 2:
                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 4, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_42', 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                        goto Event130
                    }
                } else {
                    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_02', 'MaintainPerformanceState': 0})
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Value': 0, 'Index': -1}) {
                      case [0, 1]:
                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_00', 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                        goto Event130
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 2}) {
                          case 0:
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_44', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                            goto Event130
                          case 1:
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_38', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                            goto Event130
                          case 2:
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_37', 'ChoiceLabel1': 6, 'MaintainPerformanceState': 0})
                            goto Event130
                        }
                    }
                }
            } else
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_09', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_10', 'MaintainPerformanceState': 0})
            }
            goto Event1
          case 803420549:
            goto Event1
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowSaw_Npc_Hylia_012_Adult', 'Index': -1}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if !Npc_Hylia_012_Adult.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_102', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_105', 'MaintainPerformanceState': 0})
        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012_beforeStep01'})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_Hylia_012_ChangeScheduleArea'})
    } else {
        goto Event173
    }
}

void Near() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_PoacherSaw', 'Num': 1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_Monologue'}) {
            Event40:
            Npc_Hylia_012_Adult.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_012_Adult:Near_01', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
            goto Event40
        }
    }
}

void SubEvent_GetSwordBigGoron_Step06() {

    call SubEvent_GetSwordBigGoron.InitTalk_OnEvent_ShowItemOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Hylia_012_Adult', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'CameraType': False})


    call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 39, 'ItemPos_Adult': [0.07500000298023224, -0.6200000047683716, 0.6299999952316284], 'LookAtActorName': 'Npc_Hylia_012_Adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowSaw_Npc_Hylia_012_Adult', 'Index': -1}) {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_109', 'MaintainPerformanceState': 0})
        Event48:
        if !GameSystemActor.EventQueryTalkChoice2() {

            call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ForYou({'NpcActor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'EmotionType': 0})

            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_103', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'ReveiveItem': 'Item_BrokenSword', 'NpcActorName': 'Npc_Hylia_012_Adult', 'ASName': 'Wait', 'NpcInstanceName': ''})

            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_PoacherSaw', 'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_110', 'MaintainPerformanceState': 0})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step07'})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 50})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012_beforeStep01', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_Hylia_012_ChangeScheduleArea'})
        } else {

            call NpcCommon.NpcCommon_HandOver_ShowItem_Cancel({'NpcActor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_112'})

            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'StepName': 'Step06_03'})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step01_Exp'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012'})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_Hylian_012_beforeStep01'})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_Hylia_012_ChangeScheduleArea'})
        }
    } else {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_101', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowSaw_Npc_Hylia_012_Adult', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_104', 'MaintainPerformanceState': 0})
        goto Event48
    }
}

void Look_Bridge() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_Hylia_012_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [-12.0, 100.0, -3.0]})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [-12.0, 100.0, -3.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-39.29999923706055, 103.01300048828125, -8.741000175476074], 'AtVector': [-36.970001220703125, 102.7020034790039, -8.335000038146973], 'TargetFovy': 45.0, 'MoveTime': 0, 'IsEnableRevertFast': False})
    }


    fork {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_13', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 1.5, 0.0], 'AtVector': [0.0, 1.399999976158142, 0.0], 'MoveTime': 180, 'TargetFovy': 45.0, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': False, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc_Hylia_012_Adult', 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        Npc_Hylia_012_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_45', 'MaintainPerformanceState': 0})
}

void GerudoValley_StopInFrontOfGerudoFortress() {
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    if Player_Event.EventQueryCheckPlayerState({'State': 21}) {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    }
    Npc_Hylia_012_Adult.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': ''})
    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
        Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

        fork {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_18', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
        } {
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'WaitUntilStable': False, 'StopToTime': 15})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
        }

        Event184:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_GerudoNear'}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {

                fork {
                    switch Npc_Navi.EventQueryNaviAttentionType() {
                      case 0:
                        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_012_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': True, 'IsDoNavi': True})
                        Npc_Hylia_012_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': ''})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                      case [1, 2, 3]:

                        fork {
                            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_012_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': True, 'IsDoNavi': False})
                            Npc_Hylia_012_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': ''})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        } {

                            call NaviEventCommon.Sub_InitTalkNavi_NPC({'LookAtTarget': 3, 'LookAtActorName': 'Npc_Hylia_012_Adult', 'LookAtInstanceName': '', 'IsLookAtObject': True})

                        }

                    }
                } {
                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
                }

                Event95:
                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_08', 'ChoiceLabel2': 4, 'ChoiceLabel1': 9, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_14', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event17:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceLabel1': 9, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_25', 'MaintainPerformanceState': 0})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step01'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_Oyakata_Adult_UnreactCojiro', 'Value': False})
                    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_GarudoIntroduce', 'Index': -1}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoValley_Npc_Hylia_012_Adult_GarudoIntroduce', 'Index': -1, 'Value': True})
                    }
                } else {
                    Event172:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_16', 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event17
                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_22', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            goto Event17
                        } else {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_23', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                goto Event17
                            } else {
                                goto Event172
                            }
                        }
                    }
                }
            } else {
                Event110:
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-47.62601852416992, 101.7615966796875, -8.500126838684082], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_012_Adult', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
                Npc_Hylia_012_Adult.EventTriggerBecomeSpeaker()
                Player_Event.EventPlayerOnStopMode({'StopAnm': True, 'ResetLookIK': True})
                if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'Type': -1})
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_012_Adult', 'Target': 3, 'Direction': 0.0, 'IsTurnX': True})
                    Event14:
                    Npc_Hylia_012_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': ''})
                    Player_Event.EventPlayerOffStopMode()
                    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
                    if !Player_Event.EventQueryCheckPlayerState({'State': 1})
                    && !Player_Event.EventQueryIsHorseEponaNear({'Distance': 10.0}) {
                        GameSystemActor.EventTriggerOwnedHorseParticipateInPlayingMainEvent()
                        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'PositionOffset': [-2.0, 0.0, 0.0], 'YAngle': 20.0})
                        Event113:
                        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        goto Event95
                    } else {
                        goto Event113
                    }
                } else {
                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
                    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 40.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-49.999000549316406, 104.55899810791016, -6.0879998207092285], 'AtVector': [-48.45399856567383, 103.40499877929688, -8.98799991607666], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 1, 'IsNearOffset': True, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_012_Adult', 'Target': 3, 'Direction': 0.0, 'IsTurnX': True})
                    goto Event14
                }
            }
        } else {
            EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_012_Adult', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'Longitude': 45.0, 'TargetOffset': [0.5, -0.10000000149011612, 0.5], 'Radius': 1.2000000476837158})
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_19', 'MaintainPerformanceState': 0})
            goto Event110
        }
    } else {

        call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_18', 'Arg_Turn': 3, 'ActorName': 'Npc_Hylia_012_Adult', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_012_Adult")})

        goto Event184
    }
}

void Npc_Hylia_012_SageOfSpirit_Ready() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowCojiro_Oyakata_Adult'}) {
        goto Event95
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowSaw_Npc_Hylia_012_Adult', 'Index': -1}) {
        goto Event95
    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowBrokenSword_Oyakata_Adult'}) {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_07', 'MaintainPerformanceState': 0})
    }
    goto Event95
}

void ShowCojiro_Oyakata_Adult() {

    call SubEvent_GetSwordBigGoron.InitTalk_OnEvent_ShowItemOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Hylia_012_Adult', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'CameraType': False})


    call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 36, 'LookAtActorName': 'Npc_Hylia_012_Adult', 'ItemPos_Adult': [0.10000000149011612, -0.6000000238418579, 0.6499999761581421]})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowCojiro_Oyakata_Adult'}) {
        if !Npc_Hylia_012_Adult.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_201', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_200', 'MaintainPerformanceState': 0})
        }
        Event176:

        call NpcCommon.ShowItem_Close()

    } else {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_200', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_IsAfterShowCojiro_Oyakata_Adult'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step03_02'})
        goto Event176
    }
}

void ShowBrokenSword_Oyakata_Adult() {

    call SubEvent_GetSwordBigGoron.InitTalk_OnEvent_ShowItemOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Hylia_012_Adult', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_012_Adult"), 'CameraType': False})


    call SubEvent_GetSwordBigGoron.ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 40, 'ItemPos_Adult': [0.07500000298023224, -0.5799999833106995, 0.550000011920929], 'LookAtActorName': 'Npc_Hylia_012_Adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowBrokenSword_Oyakata_Adult'}) {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_301', 'MaintainPerformanceState': 0})
        if !Npc_Hylia_012_Adult.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_32', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_31', 'MaintainPerformanceState': 0})
        }
        Event129:

        call NpcCommon.ShowItem_Close()

    } else {
        Npc_Hylia_012_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Talk_300', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_IsAfterShowBrokenSword_Oyakata_Adult'})
        goto Event129
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_012_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_012_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_PoacherSaw', 'Num': 1}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_103', 'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_05_02'}) {
          case 4205900657:
            Event169:
            return 4151362380
          case 4155567800:
            Event170:
            return 2799305849
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_012_Adult:Mask_103', 'ASName': 'TalkMonolog'}) {
          case 4205900657:
            goto Event169
          case 4155567800:
            goto Event170
        }
    }
}
