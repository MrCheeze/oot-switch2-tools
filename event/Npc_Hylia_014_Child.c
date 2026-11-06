-------- EventFlow: Npc_Hylia_014_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTargetWithAS']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAIScheduleGetPosture', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_014_Child
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_015_Child
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_016_Child
entrypoint: None()
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_013_Child
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject']
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
          case [0, 1, 8, 9, 18, 19, 20, 21, 23, 24, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
          case 2:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_101', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_106', 'MaintainPerformanceState': 0})
            }
          case 3:

            call DoorOfTime_IsAfter_Step03_Exp_NearActorsTalk()

          case 4:
            Event134:

            call Mask_All()

            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 12}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_05', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_06', 'MaintainPerformanceState': 0})
                }
            } else
            Event53:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_04', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_08', 'MaintainPerformanceState': 0})
            }
          case 5:
            Event61:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                call Mask_All()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_11', 'MaintainPerformanceState': 0})
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                Npc_Hylia_014_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_12', 'MaintainPerformanceState': 0, 'ASName': 'Act_Surprise_Wait'})
                Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_14', 'MaintainPerformanceState': 0})
            }
          case [6, 7, 10, 11, 12, 14, 16]:
            Event135:

            call Mask_All()

            goto Event53
          case 13:
            Event54:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_30', 'MaintainPerformanceState': 0})
            } else {

                call Mask_All()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_31', 'MaintainPerformanceState': 0})
            }
          case 15:
            Event94:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_00', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_01', 'MaintainPerformanceState': 0})
            }
          case 17:
            Event133:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_22', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_21', 'MaintainPerformanceState': 0})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_014_Child_Talk_Event24', 'Index': -1}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case 0:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_10', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_03', 'MaintainPerformanceState': 0})
            }
          case 1:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_09', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_02', 'MaintainPerformanceState': 0})
            }
          case [2, 3, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
          case 4:
            goto Event134
          case 5:
            goto Event61
          case [6, 7, 10, 11, 12, 14, 16]:
            goto Event135
          case [8, 9]:

            call Act5Go()

          case 13:
            goto Event54
          case 15:
            goto Event94
          case 17:
            goto Event133
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_014_Child_Talk_Event24', 'Value': True, 'Index': -1})

        call Mask_All()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_20', 'MaintainPerformanceState': 0})
    }
}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_02'})
      case 1:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_01'})
      case 2:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_03'})
      case [4, 6, 10, 12, 14, 16]:
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_00'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_04'})
        }
      case 5:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_06'})
      case [7, 11]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Jiro_ArrivedGasaGosoPosition'}) {
            Event68:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Jiro_PlayerOntheWorkPlace'}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_13'})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_14'})
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Jiro_ArrivedGasaGosoPosition_AfterGetStones'}) {
            goto Event68
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_10'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_11'})
        }
      case 8:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_12'})
      case 13:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_09'})
      case 15:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_07'})
      case 17:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_08'})
    }
}

void DoorOfTime_IsAfter_Step03_Exp_NearActorsTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_CarpentersArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_IsAfterCarpenterTalk', 'Index': -1}) {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


            call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_05_03'})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_110', 'MaintainPerformanceState': 0})
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_105', 'MaintainPerformanceState': 0})
                Event9:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_112', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_113', 'MaintainPerformanceState': 0})
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_109', 'MaintainPerformanceState': 0})
                goto Event9
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_111', 'MaintainPerformanceState': 0})
                goto Event9
            }
        } else {
            EventSystemActor.EventTransition({'EventName': 'DoorOfTime_IsAfter_Step03_Exp_CarpenterTalk', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        }
    } else {

        call WaitBeforeTalk()


        call Mask_All()


        fork {

            call MeetingCheck_Jiro()

        } {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_108', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_107', 'MaintainPerformanceState': 0})
            }
        }

    }
}

void DoorOfTime_IsAfter_Step03_Exp_NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_CarpentersArrived_MeetingPosition'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_03'})
    }
}

void NearActorsTalk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_115', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_13', 'MaintainPerformanceState': 0})
    }
}

void NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_014_Child:Near_05'})
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_014_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_014_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 14, 16]:
        switchcall Mask_Talk({'ASName': 'Act_Find_B'}) {
          case 4151362380:
            Event98:
            switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
              case 0:
                Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ASName': 'TalkTurn'})
                Event87:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_10', 'MaintainPerformanceState': 0})
              case [2, 3]:
                Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                goto Event87
            }
        }
      case 1:
        switchcall Mask_Talk({'ASName': 'Act_Rest_B'}) {
          case 4151362380:
            goto Event98
        }
      case 5:
        switchcall Mask_Talk({'ASName': 'Act_GazeUp'}) {
          case 4151362380:
            goto Event98
        }
      case 13:
        switchcall Mask_Talk({'ASName': 'Act_Surprise_Wait'}) {
          case 4151362380:
            goto Event98
        }
      case 15:
        switchcall Mask_Talk({'ASName': 'Act_Think_Wait'}) {
          case 4151362380:
            goto Event98
        }
      case 17:
        switchcall Mask_Talk({'ASName': 'Act_Sad_Wait'}) {
          case 4151362380:
            goto Event98
        }
    }
}

void Mask_Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleGetPosture() {
      case 0:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_103', 'ASName': 'ASName', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3, 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_05_01'}) {
              case 4205900657:
                Event128:
                return 4151362380
              case 4155567800:
                Event129:
                return 2799305849
            }
        } else {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_103', 'ASName': 'ASName', 'Arg_Turn_For_IgnoreMaskTalk': 3, 'Arg_Turn_For_MaskTalk': 3}) {
              case 4205900657:
                goto Event128
              case 4155567800:
                goto Event129
            }
        }
      case [1, 2, 3]:
        if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_09', 'Arg_Turn_For_IgnoreMaskTalk': 1, 'Arg_Turn_For_MaskTalk': 1, 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_103', 'ASName': 'ASName', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_05_01'}) {
              case 4205900657:
                Event89:
                return 4151362380
              case 4155567800:
                Event90:
                return 2799305849
            }
        } else {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_09', 'Arg_Turn_For_IgnoreMaskTalk': 1, 'Arg_Turn_For_MaskTalk': 1, 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_014_Child:Mask_103', 'ASName': 'ASName'}) {
              case 4205900657:
                goto Event89
              case 4155567800:
                goto Event90
            }
        }
    }
}

void Act5Go() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_115', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_014_Child:Talk_116', 'MaintainPerformanceState': 0})
    }
}

void MeetingCheck_Jiro() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_IchiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

                fork {
                    Npc_Hylia_015_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_013_Child'})
                    Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                } {
                    Npc_Hylia_013_Child.EventTriggerLookAtObject({'ActorName': 'Npc_Hylia_015_Child', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Hylia_013_Child.EventPlayAS({'ASName': 'Meeting', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                }

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_016_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_013_Child'})
                Npc_Hylia_016_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_013_Child.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_016_Child'})
                Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Meeting', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_015_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Npc_Hylia_016_Child'})
                Npc_Hylia_015_Child.EventPlayAS({'ASName': 'Meeting', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_016_Child.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_015_Child'})
                Npc_Hylia_016_Child.EventPlayAS({'ASName': 'Meeting', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        }
    } else
    ;
}

void WaitBeforeTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_IchiroArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

                fork {
                    Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                } {
                    Npc_Hylia_013_Child.EventPlayAS({'ASName': 'Act_Normal_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                }

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_016_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } else {
            Npc_Hylia_013_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})
            Npc_Hylia_013_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_SaburoArrived_MeetingPosition'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {

            fork {
                Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            } {
                Npc_Hylia_016_Child.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } else {
            Npc_Hylia_015_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})
            Npc_Hylia_015_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_ShiroArrived_MeetingPosition'}) {
        Npc_Hylia_016_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})
        Npc_Hylia_016_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
}
