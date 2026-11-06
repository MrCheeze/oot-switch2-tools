-------- EventFlow: Npc_Hylia_033_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_059_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGoBackHome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_033_Child
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    Event2:
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        switchcall Check_InHome() {
          case 0x8e5a2127:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_Hylia_059_Child.EventTriggerParticipateEvent()
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:
                Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_16'})
            }
          case 0x8d5a1f94:

            call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Spearker2ActorName': 'Npc_Hylia_059_Child', 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Arg_Turn': 0})

            Npc_Hylia_059_Child.EventTriggerParticipateEvent()
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:

                call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_059_Child', 'NpcActor_KikiteASName': 'Wait', 'NpcActor_WashaASName': 'Wait', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_059_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_059_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_033_Child'})

                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_03', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Kikite_ASName': 'Wait'})


                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_04', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Kikite_ASName': 'Wait'})

                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_16', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Kikite_ASName': 'Wait'})


                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_17', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child")})

                }
            }
        }
      case 1:

        call CheckTruthMask_SetInitAS()

        Npc_Hylia_059_Child.EventTriggerParticipateEvent()
        switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'Act_Shopper_Wait_D'}) {
          case 0x1e48e851:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_08', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Kikite_ASName': 'Act_Think_Wait'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_09', 'Kikite_ASName': 'Act_Think_Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child")})

            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_01', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Kikite_ASName': 'Act_Think_Wait'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_02', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Kikite_ASName': 'Act_Think_Wait'})

            }
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:
        if !GameDataActor.EventQueryIsGoBackHome({'InstanceName': '', 'ActorName': 'Npc_Hylia_059_Child'}) {
            Event77:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_05', 'MaintainPerformanceState': 0})

            call Mask_All()

        } else {
            switchcall Check_InHome() {
              case 0x8e5a2127:
                goto Event77
              case 0x8d5a1f94:

                call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Spearker2ActorName': 'Npc_Hylia_059_Child', 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Arg_Turn': 0})

                Npc_Hylia_059_Child.EventTriggerParticipateEvent()
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
                  case 0x1e48e851:

                    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_059_Child', 'NpcActor_KikiteASName': 'Wait', 'NpcActor_WashaASName': 'Wait', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_059_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_033_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_059_Child'})

                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_05'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_06'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_07'})

                    } else {

                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_14'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_15'})

                    }
                }
            }
        }
    }
}

void NearActorsNear() {
    Event53:
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_01'})
      case 1:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'Act_Shopper_Wait_D'}) {
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_03', 'DisplayFrame': 60})
              case 1:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_04', 'DisplayFrame': 60})
              case 2:
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_05', 'DisplayFrame': 60})
            }
        }
      case 24:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_02'})
    }
}

void GetStones_Talk() {
    Event12:
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 2:
        switchcall Check_InHome() {
          case 0x8e5a2127:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_Hylia_059_Child.EventTriggerParticipateEvent()
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:
                Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_10'})
            }
          case 0x8d5a1f94:

            call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Spearker2ActorName': 'Npc_Hylia_059_Child'})

            Npc_Hylia_059_Child.EventTriggerParticipateEvent()
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:

                call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_059_Child', 'NpcActor_KikiteASName': 'Wait', 'NpcActor_WashaASName': 'Wait', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_059_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_059_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_033_Child'})

                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_10'})


                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_11'})

                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_18'})


                    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_059_Child:Talk_20'})

                }
            }
        }
      case 3:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Hylia_033_Child_GetStones_Talk_Event9'}) {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_31', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_30', 'MaintainPerformanceState': 0})
                }
            }
        } else {

            call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Spearker2ActorName': 'Npc_Hylia_059_Child'})

            Npc_Hylia_059_Child.EventTriggerParticipateEvent()
            switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
              case 0x1e48e851:

                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_20'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_21'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_22'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_23'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_24'})


                call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_25'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Wait', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_26', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'TalkMonolog'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_033_Child_GetStones_Talk_Event9', 'Value': True, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_059_Child_GetStones_Talk_Event19', 'Value': True, 'Index': -1})
            }
        }
      case 24:
        if !GameDataActor.EventQueryIsGoBackHome({'InstanceName': '', 'ActorName': 'Npc_Hylia_059_Child'}) {
            Event83:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_Hylia_033_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_27', 'MaintainPerformanceState': 0})

            call Mask_All()

        } else {
            switchcall Check_InHome() {
              case 0x8e5a2127:
                goto Event83
              case 0x8d5a1f94:

                call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Spearker2ActorName': 'Npc_Hylia_059_Child'})

                Npc_Hylia_059_Child.EventTriggerParticipateEvent()
                switchcall NpcCommon.Truth_MaskOnly_Talk_Common_NoInitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05_02', 'ASName': 'TalkMonolog'}) {
                  case 0x1e48e851:

                    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_059_Child', 'NpcActor_KikiteASName': 'Wait', 'NpcActor_WashaASName': 'Wait', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_059_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_059_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_033_Child'})

                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_12'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_13'})

                    } else {

                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_27'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_28'})


                        call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Talk_29'})

                    }
                }
            }
        }
    }
}

void NearActorsTalk() {
    goto Event2
}

void NearActorsTalk_GetStones() {
    goto Event12
}

void NearActorsNear_GetStones() {
    if Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() == 3 {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_033_Child:Near_10'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_033_Child_GetStones_Talk_Event9', 'Index': -1, 'Value': False})
    }
}

void Near() {
    goto Event53
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_033_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_033_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_09'})
        }
    } else {

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_033_Child:Mask_103'})

    }
}

void CheckTruthMask_SetInitAS() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0, 0xc86bca21]:

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Spearker2ActorName': 'Npc_Hylia_059_Child', 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child")})

      case 0x1d1a8ede:
        if !Npc_Hylia_059_Child.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {

            call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Spearker2ActorName': 'Npc_Hylia_059_Child', 'Spearker1PlayAS_Waiting': 'Act_Shopper_Wait_D', 'Spearker2PlayAS_OnMove': 'Act_Shopper_Wait_A', 'Spearker2PlayAS_Waiting': 'Act_Shopper_Wait_A', 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child")})

        } else {

            call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 4, 'Spearker2ActorName': 'Npc_Hylia_059_Child', 'Spearker1PlayAS_Waiting': 'Act_Shopper_Wait_D', 'Actor2': ActorIdentifier(name="Npc_Hylia_059_Child"), 'Spearker2PlayAS_Waiting': 'Act_Think_Wait', 'Spearker2PlayAS_OnMove': 'Act_Think_Wait'})

        }
    }
}

void Check_InHome() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_059_Child_InHome'}) {
        Event49:
        return 0x8e5a2127
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_033_Child_InHome'}) {
        goto Event49
    } else {
        return 0x8d5a1f94
    }
}
