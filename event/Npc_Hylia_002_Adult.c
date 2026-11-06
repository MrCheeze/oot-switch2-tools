-------- EventFlow: Npc_Hylia_002_Adult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Hylia_003_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_002_Adult
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void NearActorsTalk() {
    Event5:

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Appeal', 'Spearker2PlayAS_Waiting': 'Act_Appeal', 'Spearker1PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Spearker2ActorName': 'Npc_Hylia_003_Adult'})

    Npc_Hylia_003_Adult.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Mask_05', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult")})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 6, 8, 10]:

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_KikiteName': 'Npc_Hylia_003_Adult', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'NpcActor_WashaFileName': 'Npc_Hylia_002_Adult', 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Adult'})

        Event2:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_Ready_Exp'}) {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Adult_GlassTruth'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_36', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_43'})

                    } else {

                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_03', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_13'})

                    }
                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_04'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_05', 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult")})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_02'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_12'})

                }
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_33'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_14'})

                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_09'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_10'})

                }
            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_07', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_09'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_08'})

            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_29'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_38'})

            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_15'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_37'})

            }
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_13'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_19'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_14'})

        }
      case [1, 3, 7, 9, 11]:
        goto Event2
      case [4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_002_Adult:Near_01'})
}

void SageOfForest_IsAfter_Step03_Exp_NearActorsTalk() {
    Event88:

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Appeal', 'Spearker2PlayAS_Waiting': 'Act_Appeal', 'Spearker1PlayAS_Waiting': 'Act_Laughter', 'Actor2': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Spearker2ActorName': 'Npc_Hylia_003_Adult'})

    Npc_Hylia_003_Adult.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Washa_ASName': 'Act_Laughter', 'Kikite_ASName': 'Act_Appeal', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Mask_05', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult")})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 4, 6, 8]:

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_KikiteName': 'Npc_Hylia_003_Adult', 'NpcActor_WashaASName': 'Act_Laughter', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'NpcActor_WashaFileName': 'Npc_Hylia_002_Adult', 'NpcActor_KikiteFileName': 'Npc_Hylia_003_Adult'})

        Event70:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_26'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_33', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult")})

            Event19:

            call NaviHint_GamedataON()

        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_25'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_32'})

            goto Event19
        }
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_MenTalk_GuideHookshot', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                goto Event70
            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_23'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_30'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_24'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_31'})

                goto Event19
            }
        } else {
            Event65:

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_16'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_21'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_17', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_22'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_18'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_23'})

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Npc_MenTalk_GuideHookshot', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            goto Event19
        }
      case [2, 3, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case [5, 7, 9]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_MenTalk_GuideHookshot', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                goto Event70
            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_ASName': 'Act_Laughter_Talk_02', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_21'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_28', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_22'})

                Npc_Hylia_003_Adult.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                goto Event19
            }
        } else {
            goto Event65
        }
    }
}

void SageOfForest_IsAfter_Step03_Exp_NearActorsNear() {
    ;
}

void NaviHint_GamedataON() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NaviHelp_SageOfForest_Step02_1', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviHelp_SageOfForest_Step02_1', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
    }
}

void Talk() {
    goto Event5
}

void SageOfForest_IsAfter_Step03_Exp_Talk() {
    goto Event88
}
