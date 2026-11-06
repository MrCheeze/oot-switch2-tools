-------- EventFlow: Npc_Hylia_003_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventDisableRecentTalkFlag']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGoBackHome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_002_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_003_Child
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    Event39:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {

            call AfterSageofForest()

        } else {

            call GetStones()

        }
    } else {

        call NormalTalkHylia03()

    }
}

void NearActorsTalk() {
    goto Event39
}

void GetStones() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_51'})

      case [1, 3, 5]:

        call TalkArrived_GetStones()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_50', 'MessageId01': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_52'})

    }
}

void TalkArrived() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Spearker2ActorName': 'Npc_Hylia_002_Child', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Laughter', 'Spearker2PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Spearker1PlayAS_Waiting': 'Act_Appeal'})


    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05'})

    Npc_Hylia_002_Child.EventTriggerParticipateEvent()

    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_002_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Child'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_12', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_13'})

            Event56:

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_14', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

            Event92:
            Npc_Hylia_002_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_10'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_11'})

            goto Event56
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_01', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_04'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_05'})

        goto Event56
    }
}

void TalkArrived_GetStones() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Spearker2ActorName': 'Npc_Hylia_002_Child', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Laughter', 'Spearker2PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Spearker1PlayAS_Waiting': 'Act_Appeal'})


    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05'})

    Npc_Hylia_002_Child.EventTriggerParticipateEvent()

    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_002_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Child'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_42'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_43'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_47'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_48'})

            goto Event92
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_44'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_45'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_46'})

            goto Event92
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_30'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_14', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_33'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_34'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_35'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_14', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

        goto Event92
    }
}

void NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_003_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Child:Near_03', 'DisplayFrame': 90})
        } else {
            Npc_Hylia_003_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Child:Near_04', 'DisplayFrame': 90})
        }
    } else
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_003_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Child:Near_01', 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 120})
    } else {
        Npc_Hylia_003_Child.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Child:Near_02', 'DisplayFrame': 120})
    }
}

void NormalTalkHylia03() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_24'})

      case [1, 3, 5]:

        call TalkArrived()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_22', 'MessageId01': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_23'})

    }
}

void AfterSageofForest() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 4]:

        call MoveTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_80'})

      case [1, 3, 5]:

        call TalkArrived_AfterSageofFOrest()

      case [6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHomeTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_82', 'MessageId01': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_83'})

    }
}

void TalkArrived_AfterSageofFOrest() {

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Spearker2ActorName': 'Npc_Hylia_002_Child', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Laughter', 'Spearker2PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Spearker1PlayAS_Waiting': 'Act_Appeal'})


    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05'})

    Npc_Hylia_002_Child.EventTriggerParticipateEvent()

    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_002_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Child'})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_73'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_74'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_75'})

            goto Event92
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_70'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_71'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_72'})

            goto Event92
        }
    } else {

        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_30', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_14', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_60'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_61'})

        goto Event92
    }
}

void GoHomeTalk() {
    if !GameDataActor.EventQueryIsGoBackHome({'InstanceName': '', 'ActorName': 'Npc_Hylia_002_Child'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


        call NpcCommon.Mask_Truth({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05', 'ASName': 'Act_Appeal'})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
                Event104:
                Npc_Hylia_003_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_26', 'MaintainPerformanceState': 0, 'ASName': 'Act_Sad_Wait'})
            } else {
                Npc_Hylia_003_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_54', 'MaintainPerformanceState': 0, 'ASName': 'Act_Sad_Wait'})
            }
            Event94:
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        } else {
            goto Event104
        }
    } else {

        call Npc_Hylia_002_Child.IsGatheringNpc_InitTalk_Pair_MoveTalk({'ASName': 'Act_Appeal', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Spearker2ActorName': 'Npc_Hylia_002_Child'})


        call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05'})

        Npc_Hylia_002_Child.EventTriggerParticipateEvent()

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_002_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Child'})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'MessageId00', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'MessageId01', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': ''})

        Npc_Hylia_002_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        goto Event94
    }
}

void MoveTalk() {

    call Npc_Hylia_002_Child.IsGatheringNpc_InitTalk_Pair_MoveTalk({'ASName': 'Act_Appeal', 'Spearker2ActorName': 'Npc_Hylia_002_Child', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Child")})


    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Child"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Mask_05'})

    Npc_Hylia_002_Child.EventTriggerParticipateEvent()

    call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteName': 'Npc_Hylia_002_Child', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Child"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Child', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Child'})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Child:Talk_20', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'MessageId00', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Child"), 'Washa_ASName': 'Act_Laughter'})

    Npc_Hylia_002_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    goto Event94
}
