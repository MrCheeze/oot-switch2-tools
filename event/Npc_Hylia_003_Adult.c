-------- EventFlow: Npc_Hylia_003_Adult --------

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

Actor: Npc_Hylia_002_Adult
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDisableRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_003_Adult
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void NearActorsTalk() {
    Event10:

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Laughter', 'Spearker2PlayAS_Waiting': 'Act_Laughter', 'Spearker1PlayAS_Waiting': 'Act_Appeal', 'Spearker2ActorName': 'Npc_Hylia_002_Adult', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Adult")})

    Npc_Hylia_002_Adult.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Mask_05'})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 6, 8, 10]:

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_KikiteName': 'Npc_Hylia_002_Adult', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Adult', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Adult'})

        Event28:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_Ready_Exp'}) {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Adult_GlassTruth'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_45'})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_38'})

                        Event76:

                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

                    } else {

                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_44'})


                        call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_37'})

                        goto Event76
                    }
                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_17'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_04'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_05'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_02'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_12'})

                }
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_42'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_35'})

                    Event75:

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

                } else {

                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_11'})


                    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_34'})

                    goto Event75
                }
            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_04', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_07'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_09'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_08'})

                goto Event75
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_40'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_31'})

            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_20'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Washa_ASName': 'Act_Laughter_Talk_02', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_30'})

            }
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_32'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_41'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_01'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})

        }
      case [1, 3, 7, 9, 11]:
        goto Event28
      case [4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Adult:Near_03'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Adult:Near_02'})
    }
}

void SageOfForest_IsAfter_Step03_Exp_NearActorsTalk() {
    Event87:

    call InitTalk.InitTalk_Pair_NoSpeakerNpcPlayAS({'Arg_Greeting': 4, 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Spearker2PlayAS_OnMove': 'Act_Laughter', 'Spearker2PlayAS_Waiting': 'Act_Laughter', 'Spearker1PlayAS_Waiting': 'Act_Appeal', 'Spearker2ActorName': 'Npc_Hylia_002_Adult', 'Actor2': ActorIdentifier(name="Npc_Hylia_002_Adult")})

    Npc_Hylia_002_Adult.EventTriggerParticipateEvent()

    call NpcCommon.Mask_Truth_NotTalkMonolog_Pair({'Kikite_ASName': 'Act_Laughter', 'Washa_ASName': 'Act_Appeal', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_003_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Mask_05'})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 6, 8]:

        call NpcCommon.NpcCommon_Init_MoveTalk({'NpcActor_WashaName': 'Npc_EventStarter', 'NpcActor_KikiteASName': 'Act_Talk_Listen', 'NpcActor_KikiteName': 'Npc_Hylia_002_Adult', 'NpcActor_WashaASName': 'Act_Appeal', 'NpcActor_Washa': ActorIdentifier(name="Npc_EventStarter"), 'NpcActor_Kikite': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'NpcActor_WashaFileName': 'Npc_Hylia_003_Adult', 'NpcActor_KikiteFileName': 'Npc_Hylia_002_Adult'})

        Event25:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_35'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_28', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult")})

            Event48:

            call NaviHint_GamedataON()

        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_34'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_27'})

            goto Event48
        }
      case [1, 7, 9]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_MenTalk_GuideHookshot', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                goto Event25
            } else
            if !EventWorldManagerController.EventQueryTimeDivision() {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_24', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_19'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_25', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})

                Event31:
                Npc_Hylia_002_Adult.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                goto Event48
            } else {

                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_26', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_20'})


                call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_27', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter")})

                goto Event31
            }
        } else {

            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_21'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_ASName': 'Act_Laughter_Talk_02'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_17'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_22'})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_002_Adult:Talk_18', 'Kikite_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult")})


            call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Act_Talk_Listen', 'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Hylia_002_Adult"), 'Washa_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Washa_MessageId': 'EventFlowMsg/Npc_Hylia_003_Adult:Talk_23'})

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Npc_MenTalk_GuideHookshot', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
            goto Event48
        }
      case [2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void SageOfForest_IsAfter_Step03_Exp_NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_003_Adult:Near_01'})
}

void NaviHint_GamedataON() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NaviHelp_SageOfForest_Step02_1', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviHelp_SageOfForest_Step02_1', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
    }
}

void Talk() {
    goto Event10
}

void SageOfForest_IsAfter_Step03_Exp_Talk() {
    goto Event87
}
