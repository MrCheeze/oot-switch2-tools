-------- EventFlow: Npc_Goron_010_Child --------

Actor: Npc_Goron_010_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventExecuteAIScheduleReceiveInterestInfo']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerForceSetAmiiboMaskTalkFlag', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {

        call Mask_All()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_FirstTalk', 'Index': -1}) {
            if !Npc_Goron_010_Child.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_95', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_91', 'MaintainPerformanceState': 0})
                    Event55:
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_94', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_90', 'MaintainPerformanceState': 0})
                Event53:
                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_93', 'MaintainPerformanceState': 0})
                goto Event55
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_010_Child_FirstTalk'})
            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_92', 'MaintainPerformanceState': 0})
            goto Event53
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_010_Child_CaveOpen'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_010_Child_Talk_Event104', 'Index': -1}) {
            Event41:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_FirstTalk', 'Index': -1}) {
                if !Npc_Goron_010_Child.EventQueryIsOnRecentTalkFlag() {

                    call LookReset()


                    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                    Event112:

                    call Mask_Goron010()

                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_13', 'MaintainPerformanceState': 0})
                    Event7:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call choice_flower()

                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_Goron_0030'}) {
                            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MaintainPerformanceState': 0})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event77:

                                call choice_cave()

                                Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                            } else {
                                Event136:
                                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                                call GoodBye()

                                Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                            }
                        } else {
                            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call choice_cave()

                                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Event67:

                                    call choice_gauntlet()

                                    Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                                } else {
                                    Event139:
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkNo', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                                    call GoodBye()

                                    Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                                }
                              case 1:

                                call choice_gauntlet()

                                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event77
                                } else {
                                    goto Event139
                                }
                              case 2:
                                goto Event136
                            }
                        }
                      case 1:

                        call choice_cave()

                        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call choice_flower()

                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_Goron_0030'}) {
                                Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                            } else {
                                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_05', 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event67
                                } else {
                                    goto Event139
                                }
                            }
                        } else {
                            goto Event136
                        }
                      case 2:

                        call GoodBye()

                        Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                    }
                } else {

                    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_15', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_14', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                    }

                    call LookReset()


                    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child")})

                    goto Event112
                }
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_15', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ASName': '', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_14', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ASName': '', 'MaintainPerformanceState': 0})
                }
                Event40:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call LookReset()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_010_Child_FirstTalk'})

                    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child")})


                    call Mask_Goron010()

                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_00', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
                    goto Event7
                } else
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_08', 'ASName': '', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_09', 'ASName': '', 'MaintainPerformanceState': 0})
                }
                Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
            }
        } else {

            call LookReset()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_010_Child_Talk_Event104', 'Value': True, 'Index': -1})

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_30', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_FirstTalk', 'Index': -1}) {
                Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
            } else {
                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_31', 'MaintainPerformanceState': 0})
                goto Event40
            }
        }
    } else
    goto Event41
}

void choice_flower() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkWonder'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_ChoiceFlower', 'Index': -1}) {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_11', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'goron010_checkPos01', 'CheckDistance': 0.5, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        Event143:

        call Npc_Hylia_004_Child.SuggestCamera_Start_Modified({'TurnTarget': 5, 'TurnTargetActorName': 'DestinationAnchor', 'TurnTargetInstanceName': 'Npc_Goron_010_BombFlowerFocusPoint', 'CameraTargetActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'CameraAtActorName': 'DestinationAnchor', 'IsNpcLookOnly': False, 'FrmMove_Normal': 90, 'FrmMove_Slow': 90, 'IsSlowMoveEnable': False, 'IsNeedCameraSave': True, 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child"), 'CameraTargetInstanceName': 'goron010_mod_camPos02', 'CameraAtInstanceName': 'goron010_mod_atPos02'})

        Event71:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DeathMountain_BombFlowerHasBeenPicked'}) {
            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_22', 'MaintainPerformanceState': 0})

            call NpcCommon.SuggestCamera_Reset({'TurnTargetActorName': 'Npc_Goron_010_Child', 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child"), 'TurnTargetInstanceName': ''})

        } else {
            Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_01', 'MaintainPerformanceState': 0})

            call NpcCommon.SuggestCamera_Reset({'TurnTargetActorName': 'Npc_Goron_010_Child', 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child"), 'TurnTargetInstanceName': ''})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_Goron_0030'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_ChoiceFlower', 'Index': -1}) {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_21', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_07', 'MaintainPerformanceState': 0})
                }
                Event29:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron_010_Child_ChoiceFlower', 'Index': -1, 'Value': True})
            } else {
                Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_06', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                goto Event29
            }
        }
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'CheckDistance': 0.5, 'InstanceNameB': 'goron010_checkPos02', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        goto Event143
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'CheckDistance': 0.5, 'InstanceNameB': 'goron010_checkPos03', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        goto Event143
    } else {

        call Npc_Hylia_004_Child.SuggestCamera_Start_Modified({'TurnTarget': 5, 'TurnTargetActorName': 'DestinationAnchor', 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child"), 'TurnTargetInstanceName': 'Npc_Goron_010_BombFlowerFocusPoint', 'CameraTargetActorName': 'DestinationAnchor', 'CameraTargetInstanceName': 'goron010_mod_camPos01', 'MoveTotargetPosType': 1, 'CameraAtActorName': 'DestinationAnchor', 'CameraAtInstanceName': 'goron010_mod_atPos01', 'IsNpcLookOnly': False, 'FrmMove_Normal': 90, 'FrmMove_Slow': 90, 'IsSlowMoveEnable': False, 'IsNeedCameraSave': True})

    }
    goto Event71
}

void choice_cave() {

    call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkWonder', 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child")})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron_010_Child_ChoiceCave', 'Index': -1}) {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_04', 'MaintainPerformanceState': 0})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_16', 'MaintainPerformanceState': 0})
        Event37:
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_18', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron_010_Child_ChoiceCave', 'Index': -1, 'Value': True})
    } else {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_16', 'MaintainPerformanceState': 0})
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_17', 'MaintainPerformanceState': 0})
        goto Event37
    }
}

void Get_StoneOfFire_IsCompleted_Exp_Near() {
    Npc_Goron_010_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron_010_Child:0005'})
}

void choice_gauntlet() {

    call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkWonder', 'NpcActor': ActorIdentifier(name="Npc_Goron_010_Child")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_010_Child_ChoiceGauntlet'}) {
        Event56:
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_19', 'MaintainPerformanceState': 0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_010_Child_ChoiceGauntlet'})
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_24', 'MaintainPerformanceState': 0})
        goto Event56
    }
}

void GoodBye() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_03', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_010_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Talk_23', 'MaintainPerformanceState': 0})
    }
}

void Mask_All() {
    switchcall Mask_Talk() {
      case 4151362380:
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_10', 'MaintainPerformanceState': 0})
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_08', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_010_Child:Mask_103'}) {
      case 1183930306:
        return 4151362380
      case 1530789637:
        return 2799305849
    }
}

void Mask_Goron010() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case 3745441359:
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Keaton'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_01', 'MaintainPerformanceState': 0})
            Event122:
            Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
            Event116:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_02', 'MaintainPerformanceState': 0})
            goto Event122
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_03', 'MaintainPerformanceState': 0})
            goto Event122
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_04', 'MaintainPerformanceState': 0})
        } else {
            Event123:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_103', 'MaintainPerformanceState': 0})
        }
        goto Event122
      case 1844135360:
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_101_02', 'MaintainPerformanceState': 0})
            Event121:
            Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
            goto Event116
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_102_02', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_010_Child:Mask_103_02', 'MaintainPerformanceState': 0})
        }
        goto Event121
      case 3362507297:
        goto Event116
      case 488279774:
        goto Event123
    }
}

void LookReset() {
    Npc_Goron_010_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_Goron_010_Child.EventExecuteAIScheduleReceiveInterestInfo({'IsWaitEnd': True})
}
