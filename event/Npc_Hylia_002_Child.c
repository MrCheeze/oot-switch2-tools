-------- EventFlow: Npc_Hylia_002_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalkReturnToLastAS', 'EventTriggerBalloonMessage', 'EventDisableRecentTalkFlag', 'EventPlayAS']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGoBackHome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_003_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_002_Child
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[IsGatheringNpc_InitTalk_Pair_MoveTalk(Actor2)]
entrypoint: IsGatheringNpc_InitTalk_Pair_MoveTalk(Actor2)
actions: []
queries: []
params: None

void Talk() {
    Event99:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {

            call AfterSageofForest()

        } else {

            call GetStones()

        }
    } else {

        call NormalTalkHylia002()

    }
}

void NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_002_Child:Near_02', 'DisplayFrame': 90})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_002_Child:Near_03', 'DisplayFrame': 90})
        }
    } else
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_002_Child:Near_02', 'DisplayFrame': 90})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_002_Child:Near_01', 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90})
    }
}

void NearActorsTalk() {
    goto Event99
}

void Talk_Arrived() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2ActorName': 'Npc_Hylia_003_Child', 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Appeal', 'Spearker2PlayAS_Waiting': 'Act_Appeal', 'Spearker1PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_003_Child")})

    Npc_Hylia_003_Child.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child")})


    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_002_Child'})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_00', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_12'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_13'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_14'})

            Event120:
            Npc_Hylia_003_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_10'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_11', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child")})

            goto Event120
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_01', 'Washa_ASName': ''})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_02'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_03'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_00', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

        goto Event120
    }
}

void GetStones() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_52'})

      case [1, 3, 5]:

        call Talk_Arrived_GetStones()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_54', 'MessageId01': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_55'})

    }
}

void Talk_Arrived_GetStones() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2ActorName': 'Npc_Hylia_003_Child', 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Appeal', 'Spearker2PlayAS_Waiting': 'Act_Appeal', 'Spearker1PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_003_Child")})

    Npc_Hylia_003_Child.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child")})


    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_002_Child'})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_00', 'Washa_ASName': 'Act_Laughter_Talk_02', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_33'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_42'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_43'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_44'})

            goto Event120
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_40'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_41'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_45'})

            goto Event120
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_33'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_34'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_32'})

        goto Event120
    }
}

void NormalTalkHylia002() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_25'})

      case [1, 3, 5]:

        call Talk_Arrived()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId01': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_23', 'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_22'})

    }
}

void AfterSageofForest() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_82'})

      case [1, 3, 5]:

        call Talk_Arrived_AfterSageofForest()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_80', 'MessageId01': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_81'})

    }
}

void Talk_Arrived_AfterSageofForest() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2ActorName': 'Npc_Hylia_003_Child', 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Appeal', 'Spearker2PlayAS_Waiting': 'Act_Appeal', 'Actor2': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Spearker1PlayAS_Waiting': 'Act_Laughter'})

    Npc_Hylia_003_Child.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child")})


    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_002_Child'})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_00', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_73'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_74'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_75'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_78'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_79'})

            goto Event120
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_40', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_76'})

            goto Event120
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_70'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_71'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_72'})

        goto Event120
    }
}

void MoveTalk() {

    call IsGatheringNpc_InitTalk_Pair_MoveTalk({'Actor2': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Spearker2ActorName': 'Npc_Hylia_003_Child', 'ASName': 'Act_Laughter'})


    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child")})

    Npc_Hylia_003_Child.EventTriggerParticipateEvent()

    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_002_Child', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Child")})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_20', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_24', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child")})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'MessageId00', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})

    Event132:
    Npc_Hylia_003_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Event134:
    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void GoHomeTalk() {
    if !GameDataActor.EventQueryIsGoBackHome({'InstanceName': '', 'ActorName': 'Npc_Hylia_003_Child'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


        call NpcCommon.Mask_Truth({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'ASName': 'Act_Laughter'})

        Npc_EventStarter.EventTalkReturnToLastAS({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_21', 'IsReturnToLastAS': True, 'MaintainPerformanceState': 0, 'ASName': 'Act_Laughter'})
        goto Event134
    } else {

        call IsGatheringNpc_InitTalk_Pair_MoveTalk({'Actor2': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Spearker2ActorName': 'Npc_Hylia_003_Child', 'ASName': 'Act_Laughter'})


        call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Mask_05', 'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child")})

        Npc_Hylia_003_Child.EventTriggerParticipateEvent()

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Child"), 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Child', 'NpcActor_WashaFileName': 'Npc_Hylia_002_Child'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Child:Talk_21', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'MessageId00'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'MessageId01', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child")})

        goto Event132
    }
}

void IsGatheringNpc_InitTalk_Pair_MoveTalk() {

    fork {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Actor2': 'Actor2', 'Spearker2ActorName': 'Spearker2ActorName'})

    } {
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName'})
    }

}
