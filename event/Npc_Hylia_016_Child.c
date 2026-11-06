-------- EventFlow: Npc_Hylia_016_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventNPCTurnToTargetWithAS']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleGetPosture', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_016_Child
entrypoint: None()
actions: []
queries: ['EventQueryIsIndoor', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_013_Child
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_014_Child
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_015_Child
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case [0, 6, 10]:
            Event155:

            call Mask_All()

            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 8}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_13', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_14', 'MaintainPerformanceState': 0})
                }
            } else {
                Event63:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_17', 'MaintainPerformanceState': 0})
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_22', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_19', 'MaintainPerformanceState': 0})
                }
            }
          case [1, 7, 11]:
            Event76:

            call Mask_All()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_016_Child_Night', 'Index': -1}) {
                if !Npc_Hylia_016_Child.EventQueryIsIndoor() {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_08', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_00', 'MaintainPerformanceState': 0})
                    }
                } else {
                    goto Event63
                }
            } else {
                Event39:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_016_Child_Night', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_11', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            }
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


            call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05_03'})

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_03', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_04', 'MaintainPerformanceState': 0})
            }
          case 3:

            call DoorOfTime_IsAfter_Step03_Exp_NearActorsTalk()

          case [4, 5, 8, 9, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 6, 10]:
        goto Event155
      case [1, 7, 11]:
        goto Event76
      case [2, 3, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 4:

        call Mask_All()

        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_15', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_16', 'MaintainPerformanceState': 0})
        }
      case 5:

        call Mask_All()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_016_Child_Night', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_21', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_02', 'MaintainPerformanceState': 0})
            }
        } else {
            goto Event39
        }
      case [8, 9]:

        call Mask_All()

        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_109', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_110', 'MaintainPerformanceState': 0})
        }
    }
}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 6, 10]:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Event44:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_01'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_02'})
        }
      case [1, 7, 11]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Shiro_ArrivedGasaGosoPosition'}) {
            Event156:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Shiro_PlayerOntheWorkPlace'}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_08'})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_09'})
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Shiro_ArrivedGasaGosoPosition_AfterGetStones'}) {
            goto Event156
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_04'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_05'})
        }
      case 2:
        goto Event44
      case 3:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_00'})
      case 5:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_06'})
      case 8:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_07'})
    }
}

void DoorOfTime_IsAfter_Step03_Exp_NearActorsTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_CarpentersArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_IsAfterCarpenterTalk', 'Index': -1}) {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


            call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05_03'})

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_101', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_102', 'MaintainPerformanceState': 0})
            }
        } else {
            EventSystemActor.EventTransition({'EventName': 'DoorOfTime_IsAfter_Step03_Exp_CarpenterTalk', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        }
    } else {

        call WaitBeforeTalk()


        call Mask_All()


        fork {

            call MeetingCheck_Shiro()

        } {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_05', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_06', 'MaintainPerformanceState': 0})
            }
        }

    }
}

void DoorOfTime_IsAfter_Step03_Exp_NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_CarpentersArrived_MeetingPosition'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_02'})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


    call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05_02'})

    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_107', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Talk_108', 'MaintainPerformanceState': 0})
    }
}

void NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_016_Child:Near_03'})
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_016_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_016_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case fnv1a("Mask_Talk"):
            switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
              case 0:
                Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ASName': 'TalkTurn'})
                Event68:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_10', 'MaintainPerformanceState': 0})
              case [1, 2, 3]:
                Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                goto Event68
            }
        }
    }
}

void Mask_Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
      case 0:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            if !Npc_Hylia_016_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Find_D', 'Partial': ''}) {
                Event7:
                switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_103', 'ASName': 'Act_Find_D', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3}) {
                  case 0xfab0f371:
                    Event80:
                    return fnv1a("Mask_Talk")
                  case 0xf7b0eeb8:
                    Event88:
                    return 0xa6da0479
                }
            } else {
                switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_103', 'ASName': 'Act_Find_D', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3, 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05_01'}) {
                  case 0xfab0f371:
                    goto Event80
                  case 0xf7b0eeb8:
                    goto Event88
                }
            }
        } else {
            goto Event7
        }
      case [1, 2, 3]:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            if !Npc_Hylia_016_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Find_D', 'Partial': ''}) {
                Event72:
                switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_09', 'Arg_Turn_For_IgnoreMaskTalk': 1, 'Arg_Turn_For_MaskTalk': 1, 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_103', 'ASName': 'Act_Find_D'}) {
                  case 0xfab0f371:
                    Event70:
                    return fnv1a("Mask_Talk")
                  case 0xf7b0eeb8:
                    Event71:
                    return 0xa6da0479
                }
            } else {
                switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_09', 'Arg_Turn_For_IgnoreMaskTalk': 1, 'Arg_Turn_For_MaskTalk': 1, 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_103', 'ASName': 'Act_Find_D', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_016_Child:Mask_05_01'}) {
                  case 0xfab0f371:
                    goto Event70
                  case 0xf7b0eeb8:
                    goto Event71
                }
            }
        } else {
            goto Event72
        }
    }
}

void MeetingCheck_Shiro() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_IchiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_JiroArrived_MeetingPosition'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

                fork {
                    Npc_Hylia_014_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_013_Child'})
                    Npc_Hylia_014_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                } {
                    Npc_Hylia_013_Child.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_014_Child'})
                    Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                }

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_015_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_013_Child'})
                Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_013_Child.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_015_Child'})
                Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_JiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_014_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_015_Child'})
                Npc_Hylia_014_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_015_Child.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_014_Child'})
                Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        }
    } else
    ;
}

void WaitBeforeTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_IchiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_JiroArrived_MeetingPosition'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

                fork {
                    Npc_Hylia_014_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                } {
                    Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                }

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } else {
            Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})
            Npc_Hylia_013_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_JiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_014_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } else {
            Npc_Hylia_014_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Hylia_014_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {
        Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Hylia_015_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
}
