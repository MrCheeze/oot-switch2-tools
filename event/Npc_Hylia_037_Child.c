-------- EventFlow: Npc_Hylia_037_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAvoidDuplicationRandomChoice4', 'EventQueryAIScheduleIsStopByInterestSpot', 'EventQueryAIScheduleGetReceiveInterestType', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleGetPosture', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_037_Child
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_Hylia_037_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Lost', 'Partial': ''}) {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Act_Lost'}) {
                  case 0x1e48e851:
                    Event28:
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_28', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_08', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Wait'}) {
                  case 0x1e48e851:
                    goto Event28
                }
            }
        } else {

            call FirstTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_29', 'MessageId01': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_30', 'MessageId02': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_31'})

        }
      case 1:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_07', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_08', 'MaintainPerformanceState': 0})
                }
            }
        } else {

            call FirstTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_27', 'MessageId02': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_25', 'MessageId01': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_26'})

        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 22:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_Hylia_037_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Lost', 'Partial': ''}) {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Act_Lost'}) {
                  case 0x1e48e851:
                    Event30:
                    switch Npc_EventStarter.EventQueryAIScheduleIsStopByInterestSpot() {
                      case [0, 2]:

                        call Random3()

                      case 1:
                        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 18}) {

                            call Random4()

                        } else {

                            call CannotDoThat()

                        }
                    }
                }
            } else {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Wait'}) {
                  case 0x1e48e851:
                    goto Event30
                }
            }
        } else {

            call FirstTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_19', 'MessageId01': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_00', 'MessageId02': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_24'})

        }
      case 24:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_Hylia_037_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Lost', 'Partial': ''}) {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Act_Lost'}) {
                  case 0x1e48e851:
                    Event20:
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_05', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_03', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Wait'}) {
                  case 0x1e48e851:
                    goto Event20
                }
            }
        } else {

            call FirstTalk({'MessageId01': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_14', 'MessageId02': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_21', 'MessageId00': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_18'})

        }
    }
}

void Near() {
    if Npc_EventStarter.EventQueryAIScheduleIsStopByInterestSpot() {
        switch Npc_EventStarter.EventQueryAIScheduleGetReceiveInterestType() {
          case 7:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_01'})
          case 9:
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 18}) {
                switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_02'})
                  case 1:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_03'})
                  case 2:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_04'})
                }
            } else
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_05'})
              case 1:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_06'})
              case 2:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_037_Child:Near_08'})
            }
        }
    }
}

void GetStones_Talk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
          case 2:
            if !Npc_Hylia_037_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Lost', 'Partial': ''}) {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Act_Lost'}) {
                  case 0x1e48e851:
                    Event26:
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_105', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_100', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Wait'}) {
                  case 0x1e48e851:
                    goto Event26
                }
            }
          case 3:
            switchcall Mask_All() {
              case [0x2030d535, 0xae294238]:
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_101', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_103', 'MaintainPerformanceState': 0})
                }
            }
          case 24:
            if !Npc_Hylia_037_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Lost', 'Partial': ''}) {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Act_Lost'}) {
                  case 0x1e48e851:
                    Event46:
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_102', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_104', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Arg_Turn_For_IgnoreMaskTalk': 0, 'ASName': 'Wait'}) {
                  case 0x1e48e851:
                    goto Event46
                }
            }
        }
    } else {

        call FirstTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_107', 'MessageId01': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_106', 'MessageId02': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_108'})

    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_037_Child_GlassTruth'}) {
            Event67:
            return 0x2030d535
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_037_Child_GlassTruth'})
            switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:GlassTruth', 'ASName': 'Wait'})
                Event88:
                return 0xae294238
              case [1, 2, 3]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:GlassTruth'})
                goto Event88
            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 0x4deaea8c:
            switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
              case 0:
                switchcall Mask_Talk({'ASName': 'Wait', 'TalkMonologOverwriteAS': True}) {
                  case fnv1a("Mask_Talk"):
                    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_10', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
                    goto Event88
                  case 0xa6da0479:
                    goto Event88
                }
              case [1, 2, 3]:
                switchcall Mask_Talk({'TalkMonologOverwriteAS': False, 'ASName': ''}) {
                  case fnv1a("Mask_Talk"):
                    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_10', 'ASName': '', 'MaintainPerformanceState': 0})
                    goto Event88
                  case 0xa6da0479:
                    goto Event88
                }
            }
          case 0x2fe33985:
            Event85:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            goto Event67
        }
    } else {
        goto Event85
    }
}

void Mask_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step02_Exp'}) {
        switchcall Mask_Talk_Common_With_InitTalk_SettingAllAS_Hylia_037_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_03', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_07', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_06', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_08', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_04_02', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_103', 'ASName': 'ASName', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_09'}) {
          case 0xfab0f371:
            Event82:
            return fnv1a("Mask_Talk")
          case 0xf7b0eeb8:
            Event83:
            return 0xa6da0479
        }
    } else {
        switchcall Mask_Talk_Common_With_InitTalk_SettingAllAS_Hylia_037_Child_Only({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_05', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_07', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_06', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_103', 'ASName': 'ASName', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_037_Child:Mask_09'}) {
          case 0xf7b0eeb8:
            goto Event83
          case 0xfab0f371:
            goto Event82
        }
    }
}

void Random3() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice4() {
      case 0:
        Npc_Hylia_037_Child.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MaintainPerformanceState': 0})
      case 1:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_04', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
      case 2:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_06', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
      case 3:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_08', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    }
}

void Random4() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice4() {
      case 0:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_09', 'ASName': 'Act_Lost', 'MaintainPerformanceState': 0})
      case 1:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_10', 'ASName': 'Act_Lost', 'MaintainPerformanceState': 0})
      case 2:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_11', 'ASName': 'Act_Lost', 'MaintainPerformanceState': 0})
      case 3:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_12', 'ASName': 'Act_Lost', 'MaintainPerformanceState': 0})
    }
}

void CannotDoThat() {
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_15', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
      case 1:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_16', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
      case 2:
        Npc_Hylia_037_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_037_Child:Talk_17', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    }
}

void FirstTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
      case 0:

        call SubFlow_FirstTalk({'ASName': 'Wait', 'MessageId00': 'MessageId00', 'MessageId01': 'MessageId01', 'MessageId02': 'MessageId02'})

      case [1, 2, 3]:

        call SubFlow_FirstTalk({'ASName': '', 'MessageId00': 'MessageId00', 'MessageId01': 'MessageId01', 'MessageId02': 'MessageId02'})

    }
}

void SubFlow_FirstTalk() {
    switchcall Mask_All() {
      case 0x2030d535:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_037_Child_Talk_Event50', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId00', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId01', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
            Event52:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_037_Child_Talk_Event50', 'Value': True, 'Index': -1})
        }
      case 0xae294238:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId02', 'IsPlayASAllSlot': False, 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event52
    }
}

void Mask_Talk_Common_With_InitTalk_SettingAllAS_Hylia_037_Child_Only() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})


        call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': 'ASName'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0, 'MessageId': 'ChangeTheTopic_Talk', 'ASName': 'ASName'})
        Event81:
        return 0xf7b0eeb8
      case 0xc86bca21:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event81
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName'})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0, 'MessageId': 'Mask_Truth_Talk'})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0xfab0f371
    }
}
