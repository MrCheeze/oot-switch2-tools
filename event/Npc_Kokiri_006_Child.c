-------- EventFlow: Npc_Kokiri_006_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryCheckIsGet']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_006_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleMoveToAnchor', 'EventNpcKokiri006SetTurnToPlayerAfterTalk', 'EventNpcKokiri006InitTrainingProgress', 'EventTriggerKokiriRequestComeCloserFairy', 'EventNPCTurnToTargetWithAS', 'EventTriggerSetModelLodManual']
queries: ['EventNPCQueryCheckTurnToTarget', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventTriggerSetTimerInvalidAttentionLockOn', 'EventPlayerBackMoveForTalk']
queries: ['EventQueryCheckIsEquippedDynamicEquipment', 'EventQueryPlayerIsEquipArmor', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3', 'EventQueryTalkChoice4', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBalloon', 'EventNaviRequestBallonMessage', 'EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Invisible_Kokiri_006
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_AttentionRock_A_02[NpcAttentionRock]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayingTutorial_Only(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_PlayingTutorial_Only(Arg_Actor)
actions: ['EventAIScheduleEndTerror', 'EventTalk', 'EventNPCTurnToObjectNow']
queries: []
params: None

void Talk() {
    Npc_Kokiri_006_Child.EventNpcKokiri006SetTurnToPlayerAfterTalk({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {

        call Mask_All()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Talk_Event21', 'Index': -1}) {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_66', 'MaintainPerformanceState': 0})
                }
                Event22:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_02', 'MaintainPerformanceState': 0})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Talk_Event21', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_07', 'MaintainPerformanceState': 0})
                goto Event22
            }
        } else
        Event33:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Clear'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Clear'}) {
            if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Weapon_Sword_Kokiri'}) {

                call ActionTutorial_2nd_Talk()

            } else {

                call ActionTutorial_1st_NotHaveWeapon()

            }
        } else {

            call ActionTutorial_1st_Talk()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02'}) {

        call ActionTutorial_Talk()

    } else {
        switchcall Get_StoneOfForest_IsCompleted_Exp_Talk() {
          case [0x57475f83, 0xdee90b96]:
            goto Event33
        }
    }
}

void KokiriForest_Kokiri_006_Backflip_00() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionArea'}) {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Npc_Kokiri_006_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

        call Common.AirStartUp()

        Npc_Navi.EventNaviRequestBalloon({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_AttentionMove'}) {
                Event242:

                call KokiriForest_Kokiri_006_Success()

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Clear'})
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Clear', 'Index': -1})
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear', 'Index': -1}) {

                    call ActionTutorial_AfterComplete()

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
                        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_34', 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear', 'Index': -1, 'Value': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready', 'Index': -1})
                        Event237:
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear'}) {
                                if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Weapon_Sword_Kokiri'}) {
                                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_12', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                                    if !GameSystemActor.EventQueryTalkChoice2() {

                                        call PlayerHiddenCheck()


                                        call JumpAttack_LectureTalk()

                                    } else {
                                        Event170:

                                        call CancelTalk({'ASCommand': 'EvtTalkNo'})

                                    }
                                } else {

                                    call GuideToWeapon()

                                    Npc_Kokiri_006_Child.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
                                }
                            } else {
                                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_53', 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call PlayerHiddenCheck()


                                    call SideStep_LectureTalk()

                                } else {
                                    goto Event170
                                }
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear'}) {
                            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_54', 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {

                                call PlayerHiddenCheck()


                                call BackStep_LectureTalk()

                            } else {
                                goto Event170
                            }
                        } else {
                            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '何か１つはクリア済みなのに想定外のフロー'})
                        }
                    } else {

                        call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 6})

                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_OperatedBackStep'}) {

                            call ActionTypeB_BackStepCheck()

                            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_108', 'MaintainPerformanceState': 0})
                            Event127:
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Clear', 'Index': -1, 'Value': True})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready', 'Value': False, 'Index': -1})
                            goto Event237
                        } else {
                            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_06', 'MaintainPerformanceState': 0})
                            goto Event127
                        }
                    } else {

                        call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 7})

                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'}) {
                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0005', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Clear'})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'})
                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_00', 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call SideStep_LectureTalk()

                      case 1:

                        call BackStep_LectureTalk()

                      case 2:

                        call CancelTalk({'ASCommand': 'EvtTalkNo'})

                    }
                }
            } else {
                Event192:

                call AttentionMove_failure()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready'}) {
            Event450:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_AttentionAction'}) {
                goto Event242
            } else {
                goto Event192
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready'}) {
            goto Event450
        } else {
            goto Event242
        }
    } else {

        call PlayingTutorial_OutsideArea()

        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }
}

void KokiriForest_Kokiri_006_JumpSlash_00() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Common.AirStartUp()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionArea'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_NotAttetion', 'Index': -1}) {
            Event397:

            call JumpSlash_failure()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_AttentionHit', 'Index': -1}) {

            call JumpSlash_Success()

        } else {
            goto Event397
        }
    } else {

        call PlayingTutorial_OutsideArea()

        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }
}

void GuideToWeapon() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_19', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTriggerRequestLookAtTheFront()
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_73', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_74', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_21', 'MaintainPerformanceState': 0})

    call GuideToWeaponCamera()

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_21_2', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_22', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_75', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_04'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 304})
    Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 90.0})
}

void ActionTutorial_1st_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_006_Child_FirstTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_ActionTutorial_1st_Talk_Event269', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Action_Ready'}) {
                switchcall Tutorial_PlayingTalk() {
                  case 0xcff55727:

                    call CancelTalk({'ASCommand': 'EvtTalkYes'})

                  case 0xd0f558ba:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'}) {

                        call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 55})

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready'}) {

                        call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 6})

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready'}) {

                        call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 7})

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'}) {

                        call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 4})

                    }
                }
            } else
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_58', 'MaintainPerformanceState': 0})
            }
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_26', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_27', 'MaintainPerformanceState': 0})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event271:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_ActionTutorial_1st_Talk_Event269', 'Index': -1}) {

                    call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_36', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_13', 'MaintainPerformanceState': 0})
                    }
                    Event473:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Clear'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear'}) {
                                GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'バク宙も横跳びもクリア済みなのに想定外のフロー'})
                            } else {
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_39', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                    Event128:

                                    call SideStep_LectureTalk()

                                } else {
                                    Event31:

                                    call CancelTalk({'ASCommand': 'EvtTalkNo'})

                                }
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Clear'}) {
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_41', 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                Event137:

                                call BackStep_LectureTalk()

                            } else {
                                goto Event31
                            }
                        } else {
                            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_00_2', 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                goto Event128
                              case 1:
                                goto Event137
                              case 2:
                                goto Event31
                            }
                        }
                    } else {

                        call AttentionMove_LectureTalk_IsFirst()

                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_ActionTutorial_1st_Talk_Event269', 'Value': True, 'Index': -1})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_31', 'MaintainPerformanceState': 0})

                    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

                    goto Event473
                }
            } else {
                Event129:

                call CancelTalk({'ASCommand': 'EvtTalkNo'})

            }
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_71', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        }
        Event293:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_72', 'ChoiceLabel2': 13, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_70', 'ChoiceLabel2': 13, 'MaintainPerformanceState': 0})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event271
        } else {
            goto Event129
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Kokiri_006_Child_FirstTalk'})
        if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 0}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Talk_Event68', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_24', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            goto Event293
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            goto Event293
        }
    }
}

void ActionTutorial_2nd_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Talk_Event68', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'}) {
            switchcall Tutorial_PlayingTalk() {
              case 0xcff55727:

                call CancelTalk({'ASCommand': 'EvtTalkYes'})

            }
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_11', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 8, 'MaintainPerformanceState': 0})
            Event42:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                call JumpAttack_LectureTalk()

            } else {

                call CancelTalk({'ASCommand': 'EvtTalkNo'})

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Talk_Event68', 'Value': True, 'Index': -1})
        Npc_Kokiri_006_Child.EventNpcKokiri006InitTrainingProgress({'IsWaitEnd': True})
        Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_23', 'ChoiceLabel1': 8, 'MaintainPerformanceState': 0})
        goto Event42
    }
}

void ActionTutorial_Talk() {
    switchcall Get_StoneOfForest_IsCompleted_Exp_Talk() {
      case 0x57475f83:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Action_Ready'}) {
            switchcall TutorialReviewing_PlayingTalk() {
              case 0xd1f55a4d:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_48', 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 2, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                Event227:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel4': 7, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_49', 'ChoiceLabel3': 6, 'ChoiceLabel2': 5, 'ChoiceLabel1': 9, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call AttentionMove_LectureTalk()

                      case 1:

                        call SideStep_LectureTalk()

                      case 2:

                        call BackStep_LectureTalk()

                      case 3:

                        call CancelTalk({'ASCommand': 'EvtTalkNo'})

                    }
                  case 1:
                    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_50', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})

                    call JumpAttack_LectureTalk()

                  case 2:

                    call CancelTalk({'ASCommand': 'EvtTalkNo'})

                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_107', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_25', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
        }
        Event504:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 2, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_48_2', 'MaintainPerformanceState': 0})
        goto Event227
      case 0xdee90b96:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_104', 'MaintainPerformanceState': 0})
        goto Event504
    }
}

void Get_StoneOfForest_IsCompleted_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Get_StoneOfForest_IsCompleted_Exp_Talk_Event106', 'Index': -1}) {
            Event14:

            call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Turn': 4, 'Arg_Greeting': 4})

            return 0x57475f83
        } else {

            call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_28', 'ASName': '', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_006_Child_Get_StoneOfForest_IsCompleted_Exp_Talk_Event106', 'Value': True, 'Index': -1})
            if !Npc_Kokiri_006_Child.EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
                Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            } else {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            }
            return 0xdee90b96
        }
    } else {
        goto Event14
    }
}

void ActionTutorial_1st_NotHaveWeapon() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Action_Ready'}) {
        switchcall TutorialReviewing_PlayingTalk() {
          case 0xd1f55a4d:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_99', 'ChoiceNumber': 4, 'ChoiceLabel4': 2, 'ChoiceLabel3': 6, 'ChoiceLabel2': 5, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
            Event116:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call AttentionMove_LectureTalk()

              case 1:

                call SideStep_LectureTalk()

              case 2:

                call BackStep_LectureTalk()

              case 3:

                call CancelTalk({'ASCommand': 'EvtTalkNo'})

            }
        }
    } else
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_58', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
    }
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_14', 'ChoiceNumber': 4, 'ChoiceLabel4': 2, 'ChoiceLabel3': 6, 'ChoiceLabel2': 5, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
    goto Event116
}

void CancelTalk() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'ASCommand', 'ClothWarpMode': 0})
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_20', 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})

    call LectureFlagReset()

}

void SideStep_LectureTalk() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_67', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_03', 'MaintainPerformanceState': 0})

    call ShowExample_PreTalk()


    call Kakashi_Attention({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_80', 'NpcWarpAnchor': 0, 'NpcWarpAnchor_InstanceName': ''})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})

    call SideStep_NpcLecture()


    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 6})


    call CameraReset()

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_82', 'MaintainPerformanceState': 0})

    call LectureFlagReset()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready', 'Index': -1, 'Value': True})
    Event351:

    call Kakashi_Attention_ForLink({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_01'})

}

void BackStep_LectureTalk() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_68', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_33', 'MaintainPerformanceState': 0})

    call ShowExample_PreTalk()


    call Kakashi_Attention({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_80', 'NpcWarpAnchor': 22, 'NpcWarpAnchor_InstanceName': 'BackStep_NpcStartPosition'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})

    call BackStep_NpcLecture()


    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 7})


    call CameraReset()

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_84', 'MaintainPerformanceState': 0})

    call LectureFlagReset()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready', 'Index': -1, 'Value': True})
    goto Event351
}

void AttentionMove_LectureTalk() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0001', 'MaintainPerformanceState': 0})
    Event176:
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0007', 'MaintainPerformanceState': 0})

    call ShowExample_PositionCheck()


    call Kakashi_Attention({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0006', 'NpcWarpAnchor': 0, 'NpcWarpAnchor_InstanceName': ''})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})

    call AttentionMove_NpcLecture()


    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 55})


    call CameraReset()

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0003', 'MaintainPerformanceState': 0})

    call LectureFlagReset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'})

    call Kakashi_Attention_ForLink({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0004'})

}

void JumpAttack_LectureTalk() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_38', 'MaintainPerformanceState': 0})

    call ShowExample_PreTalk()


    call Kakashi_Attention({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_80', 'NpcWarpAnchor_InstanceName': '', 'NpcWarpAnchor': 0})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})

    call JumpAttack_NpcLecture()


    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 4})


    call CameraReset()

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_86', 'MaintainPerformanceState': 0})

    call LectureFlagReset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'})

    call Kakashi_Attention_ForLink({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_65'})

}

void ActionTutorial_ReturnChoice() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_51', 'ChoiceLabel4': 2, 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceLabel3': 2, 'MaintainPerformanceState': 0})
    goto Event227
}

void LectureFlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'NaviAttentionBalloon_Obj_AttentionRock_A_01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_AttentionHit'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_NotAttetion'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void KokiriForest_Kokiri_006_Success() {
    Obj_AttentionRock_A_02[NpcAttentionRock].EventTriggerParticipateEvent()
    if !Npc_Kokiri_006_Child.EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
        Npc_Kokiri_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        Npc_Kokiri_006_Child.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_89', 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_93', 'MaintainPerformanceState': 0})
            }
            Event268:

            call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Kokiri_006_Child")})

        } else
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_63', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_64', 'MaintainPerformanceState': 0})
        }
        goto Event268
    } {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Clear'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
                Event490:
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                switchcall PlayerBackMoveCheck() {
                  case 0xde0f167f:
                    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': 'Npc_Kokiri_006_Child', 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'TurnFaceControlType': 1, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
                }
            } else {
                switchcall PlayerBackMoveCheck() {
                  case 0xde0f167f:
                    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_Kokiri_006_Child', 'TurnFaceControlType': 1})
                }
            }
        } else {
            goto Event490
        }
    }

    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02', 'Index': -1}) {
        Event579:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_HiddenPos'}) {

            fork {

                call Common_Camera_Pln.CameraDoF_Event_Common()

            } {
                Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } {
                Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } {
                EventCamera.EventBustShotCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 1.5], 'CameraCollisionMode': 1, 'Latitude': 0.0, 'Longitude': 0.0, 'IsWaitEnd': False, 'MoveTime': 0, 'Radius': 1.2000000476837158, 'TargetActorName': 'Npc_Kokiri_006_Child', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896], 'TargetActorInstanceName': ''})
            }

        } else {

            call InitTalk.SetTalkCamera_DependingDistancePlusLong({'ActorNameA': 'Npc_Kokiri_006_Child', 'InstanceNameA': '', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896]})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'}) {

        fork {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        } {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            if !Npc_Kokiri_006_Child.EventNPCQueryCheckFrontToTarget({'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': 'NpcAttentionRock', 'AngleThreshold': 22.5}) {
                Obj_AttentionRock_A_02[NpcAttentionRock].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            }
        } {
            EventCamera.EventBustShotCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 1.5], 'CameraCollisionMode': 1, 'Latitude': 0.0, 'Longitude': 0.0, 'IsWaitEnd': False, 'MoveTime': 0, 'TargetActorName': 'Npc_Kokiri_006_Child', 'TargetActorInstanceName': '', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896], 'Radius': 1.2000000476837158})
        }

    } else
    goto Event579
}

void GuideToWeaponCamera() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Kokiri_006_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Kokiri_006_Child.EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        Npc_Kokiri_006_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 5, 'InstanceName': 'Npc_Kokiri_006_GuideToWeaponCamera', 'ActorName': 'DestinationAnchor'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Npc_Kokiri_006_GuideToWeaponCamera', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Npc_Kokiri_006_GuideToWeaponCamera', 'IsPosVectorReferenceActorPosOnce': True, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, 6.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    }

}

void ShowExample_PreTalk() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_Kokiri_006_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_79_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        Event320:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_Left', 'Index': -1}) {
            Event326:
            Npc_Kokiri_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_103', 'MaintainPerformanceState': 0})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_Right', 'Index': -1}) {
            goto Event326
        }
      case 1:
        Npc_Kokiri_006_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_79_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        goto Event320
      case 2:
        Npc_Kokiri_006_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_79_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        goto Event320
    }
}

void SideStep_NpcLecture() {

    call NpcLectureCamera()


    fork {
        Npc_Invisible_Kokiri_006.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_81', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'ASName': 'SideStep_L', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        Npc_Kokiri_006_Child.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LockOnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kokiri_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Kokiri_006_Child.EventTalk({'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_105', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'LockOnWait', 'MaintainPerformanceState': 0})
    Npc_Kokiri_006_Child.EventTriggerRequestLookAtTheFront()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Invisible_Kokiri_006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_81', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'SideStep_R'})
        Npc_Kokiri_006_Child.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LockOnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

}

void Kakashi_Attention() {

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_Left', 'Index': -1}) {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1})
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'TutorialDangerArea_LinkMovePosition_Left', 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.800000011920929, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            Event329:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            Event310:
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'NpcExample_LinkWarpPosition', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'Type': 2, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_Right', 'Index': -1}) {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1})
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'TutorialDangerArea_LinkMovePosition_Right', 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.800000011920929, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            goto Event329
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_NpcRoute'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1})
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'MoveSpeed': 0.30000001192092896, 'AnchorInstanceName': 'NpcExample_LinkWarpPosition', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            goto Event329
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_HiddenPos'}) {
            goto Event329
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': 'NpcAttentionRock', 'IsWaitEnd': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            goto Event310
        }
    } {

        fork {

            fork {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_TutorialDangerArea_Self'}) {
                    Npc_Kokiri_006_Child.EventAIScheduleMoveToAnchor({'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'ASName': 'Walk', 'AnchorType': 0, 'IsAlignAnchorPos': False, 'InstanceName': '', 'IsWaitEnd': False, 'IsTurnToAnchorRot': False})
                    EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 150})
                    Npc_Kokiri_006_Child.EventNPCTurnToTargetWithAS({'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': 'NpcAttentionRock', 'ASName': 'Wait', 'IsWaitEnd': False})
                } else {
                    Npc_Kokiri_006_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': 'NpcAttentionRock'})
                }
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 45, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_AttentionRock_A_02', 'Actor1InstanceName': 'NpcAttentionRock', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.5, -0.800000011920929], 'PosVector': [0.0, 1.5499999523162842, 2.549999952316284], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {
                    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndFNumber': 25.0, 'EndDistance': 3.0, 'EndBluarLevel': 1.75, 'IsAutoFocalDist': False, 'RequiredFrame': 0})
                }

            }

            Npc_Kokiri_006_Child.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'AnchorType': 'NpcWarpAnchor', 'InstanceName': 'NpcWarpAnchor_InstanceName', 'ArrivalState': 0, 'ClothWarpMode': -1})
        } {
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 45})
            Npc_Kokiri_006_Child.EventTriggerKokiriRequestComeCloserFairy()
            Npc_Invisible_Kokiri_006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        }

        Npc_Kokiri_006_Child.EventNpcKokiri006InitTrainingProgress({'IsWaitEnd': True})
        Npc_Kokiri_006_Child.EventPlayAS({'ASName': 'LockOnWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Kokiri_006_Child.EventTriggerRequestLookAtTheFront()
    }

}

void CameraReset() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'FovySetType': 1, 'MoveTime': 45, 'Actor1ActorName': 'Obj_AttentionRock_A_02', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-5.550000190734863, 1.5499999523162842, 5.760000228881836], 'AtVector': [0.0, 0.10000000149011612, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Kokiri_006_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Npc_Kokiri_006_Child.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IsWaitEnd': False, 'InstanceName': '', 'Target': 3, 'ActorName': 'Npc_Kokiri_006_Child', 'IgnoreTargetPosMove': True, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        }

    }

}

void Kakashi_Attention_ForLink() {

    fork {
        Npc_Kokiri_006_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': ''})
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    }


    call Kakashi_LinkMove()

}

void BackStep_NpcLecture() {

    call NpcLectureCamera()


    fork {
        Npc_Invisible_Kokiri_006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_83', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'ASName': 'BackFlip', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        Npc_Kokiri_006_Child.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LockOnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

}

void NpcLectureCamera() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Obj_AttentionRock_A_02', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 45, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'NpcAttentionRock', 'AtVector': [0.0, 0.25, -0.800000011920929], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.5499999523162842, 6.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void JumpAttack_NpcLecture() {

    call NpcLectureCamera()


    fork {
        Npc_Invisible_Kokiri_006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_85', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'CutJump'})
        Npc_Kokiri_006_Child.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LockOnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

}

void Kakashi_LinkMove() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_AttentionRock_A_02', 'PosVector': [0.03999999910593033, 1.690000057220459, 7.579999923706055], 'AtVector': [0.0, 1.3600000143051147, 3.7899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsHomePosition': True, 'OffsetType': -1})
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'MoveSpeed': 2.0, 'DecSpeedDistance': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'NpcExample_LinkMovePosition', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Obj_AttentionRock_A_02', 'InstanceName': '', 'IsWaitEnd': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
    }

}

void PlayingTutorial_OutsideArea() {

    call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_101', 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_006_Child"), 'ActorName': 'Npc_Kokiri_006_Child', 'InstanceName': ''})


    call InitTalk.SetTalkCamera_DependingDistancePlusLong({'ActorNameA': 'Npc_Kokiri_006_Child', 'InstanceNameA': '', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896]})

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_102', 'MaintainPerformanceState': 0})
    Event324:

    call LectureFlagReset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': False})
}

void JumpSlash_Success() {

    call KokiriForest_Kokiri_006_Success()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02', 'Index': -1}) {

        call ActionTutorial_AfterComplete()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Clear'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'})
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_09', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02'})
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_90', 'MaintainPerformanceState': 0})
    } else {

        call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 4})

    }
}

void JumpSlash_failure() {
    Npc_Kokiri_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_114'})
            Event454:

            call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Kokiri_006_Child")})

          case 1:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_115'})
            goto Event454
          case 2:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_116'})
            goto Event454
        }
    } {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        switchcall PlayerBackMoveCheck() {
          case 0xde0f167f:
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': 'Npc_Kokiri_006_Child', 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'TurnFaceControlType': 1, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        }
    }

    EventCamera.EventTriggerCameraSavePoint()

    call InitTalk.SetTalkCamera_DependingDistancePlusLong({'ActorNameA': 'Npc_Kokiri_006_Child', 'InstanceNameA': '', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896]})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_NotAttetion', 'Index': -1}) {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_88', 'MaintainPerformanceState': 0})
        Event408:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_89_1', 'ASName': 'Act_Cheer', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ASName': 'Act_Cheer', 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_89_2', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_AttentionHit', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_NotAttetion'})

        call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 4})

    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_119'})
    } else {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_120'})
    }
    goto Event408
}

void KokiriForest_Kokiri_006_SecondTry() {

    call ActionTypeB_BackStepCheck()

    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_91', 'MaintainPerformanceState': 0})
    } else {
        Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_92', 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': True})

    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 'ActionGuideType'})

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_AttentionHit', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_NotAttetion', 'Value': False, 'Index': -1})
    }
}

void ActionTutorial_AfterComplete() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
            Event196:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Kokiri_006_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_97', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_006_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_98', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once', 'Index': -1, 'Value': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_Talk_02'}) {

                call ActionTutorial_ReturnChoice()

            } else {

                call ActionTutorial_ReturnChoice_NotHaveWeapon()

            }
        } else {

            call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 6})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_Ready', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {

            call ActionTypeB_BackStepCheck()

            goto Event196
        } else {

            call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 7})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeD_Ready'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
            goto Event196
        } else {

            call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 4})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionSuccess_once'}) {
            goto Event196
        } else {

            call KokiriForest_Kokiri_006_SecondTry({'ActionGuideType': 55})

        }
    }
}

void ActionTutorial_ReturnChoice_NotHaveWeapon() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_51', 'ChoiceNumber': 4, 'ChoiceLabel4': 2, 'ChoiceLabel3': 6, 'ChoiceLabel2': 5, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
    goto Event116
}

void AttentionMove_NpcLecture() {

    call NpcLectureCamera()


    fork {
        Npc_Invisible_Kokiri_006.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0002', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'LockOnMove_L'})
        Npc_Kokiri_006_Child.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'LockOnMove_R'})
        Npc_Kokiri_006_Child.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'LockOnWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

}

void TutorialReviewing_PlayingTalk() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_76', 'ChoiceLabel2': 3, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        return 0xd1f55a4d
    } else {
        Event469:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_94', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_95', 'MaintainPerformanceState': 0})
        }
        return 0xd0f558ba
    }
}

void Tutorial_PlayingTalk() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_100', 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        return 0xcff55727
    } else {
        goto Event469
    }
}

void AttentionMove_failure() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Kokiri_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_111'})
            Event406:

            call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Kokiri_006_Child")})

          case 1:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_112'})
            goto Event406
          case 2:
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_113'})
            goto Event406
        }
    } {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        switchcall PlayerBackMoveCheck() {
          case 0xde0f167f:
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': 'Npc_Kokiri_006_Child', 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'TurnFaceControlType': 1, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        }
    }

    EventCamera.EventTriggerCameraSavePoint()

    call InitTalk.SetTalkCamera_DependingDistancePlusLong({'ActorNameA': 'Npc_Kokiri_006_Child', 'InstanceNameA': '', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896]})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_OperatedBackStep'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_OperatedBackStep_IsTalked'}) {
            Event544:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_117'})
            } else {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_118'})
            }
            Event215:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_89_1', 'ASName': 'Act_Cheer', 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ASName': 'Act_Cheer', 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_89_2', 'MaintainPerformanceState': 0})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_Ready'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_NotAttention', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeZero_AttentionMove', 'Value': True})

                call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 55})

            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_AttentionAction', 'Value': False})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeA_Ready'}) {

                    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 6})

                } else {

                    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 7})

                }
            }
        } else {

            call ActionTypeB_BackStepCheck()

            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_110', 'MaintainPerformanceState': 0})
            goto Event215
        }
    } else
    goto Event544
}

void ShowExample_PositionCheck() {
    goto Event320
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_006_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_006_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case fnv1a("Mask_Talk"):
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_Kokiri_006_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_01', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_03', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_02', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_006_Child:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 0xfab0f371:
        return fnv1a("Mask_Talk")
      case 0xf7b0eeb8:
        return 0xa6da0479
    }
}

void PlayingTutorial_OutsideArea_Crawl() {

    call Common.AirStartUp()


    call InitTalk_OnEvent_NoCamera_PlayingTutorial_Only({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_101', 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_006_Child")})


    fork {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {
        EventCamera.EventBustShotCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 1.5], 'CameraCollisionMode': 1, 'Latitude': 0.0, 'Longitude': 0.0, 'IsWaitEnd': False, 'MoveTime': 0, 'Radius': 1.2000000476837158, 'TargetActorName': 'Npc_Kokiri_006_Child', 'TargetOffset': [0.0, -0.17499999701976776, 0.30000001192092896], 'TargetActorInstanceName': ''})
    }

    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_102', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    goto Event324
}

void AttentionMove_LectureTalk_IsFirst() {
    Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_0001_2', 'MaintainPerformanceState': 0})
    goto Event176
}

void ActionTypeB_BackStepCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_OperatedBackStep'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_OperatedBackStep'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_OperatedBackStep_IsTalked'}) {
            Event519:
            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_ActionTypeB_OperatedBackStep'})
            Event597:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ActionGuide_IsRequestTutorialScreen'})
        } else {
            Npc_Kokiri_006_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_006_Child:Talk_109', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_Npc_Kokiri_006_Child_OperatedBackStep_IsTalked'})
            goto Event597
        }
    } else {
        goto Event519
    }
}

void InitTalk_OnEvent_NoCamera_PlayingTutorial_Only() {
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayingTutorial_Only(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayingTutorial_Only(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MaintainPerformanceState': 0, 'MessageId': 'FirstGreeting_MesageId'})
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayingTutorial_Only(Arg_Actor)].EventNPCTurnToObjectNow({'TurnType': 3, 'IsWaitEnd': True})
}

void PlayerHiddenCheck() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'CheckDistance': 5.0, 'ActorNameA': '', 'InstanceNameA': ''}) {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
}

void PlayerBackMoveCheck() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Kokiri_006_Child', 'CheckDistance': 0.800000011920929, 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {
        if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 135.0, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Kokiri_006_Child', 'InstanceName': ''}) {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False, 'ActorName': 'Npc_Kokiri_006_Child', 'InstanceName': ''})
        }
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
        return 0xdd0f14ec
    } else {
        return 0xde0f167f
    }
}
