-------- EventFlow: Npc_Hylia_036_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventPlayAS']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryGreetingTimeDivision', 'EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput']
queries: ['EventQueryRandomChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {

    call Npc_Hylia_036_ShopCamera()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {

        call AfterSageOfForest_Talk()

    } else
    switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
      case 0:
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 5})
        && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
            Event6:

            call SleepingTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_10'})

        } else
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 5}) {

            call WaitingForCustomers({'MessageId00': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_17'})

        } else
        Event16:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_06', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            Npc_EventStarter.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_07', 'MaintainPerformanceState': 0})
            Event117:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_15', 'MaintainPerformanceState': 0})
            Event105:

            call Mask_Talk_Hylia_036_02()

            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_01', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            Npc_EventStarter.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_05', 'MaintainPerformanceState': 0})
            goto Event117
        }
      case 1:
        goto Event16
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_036_Child_CustomerArrived'}) {
            goto Event16
        } else
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 21, 'EndTme': 4})
        && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
            goto Event6
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_12', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_02', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        if Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            goto Event105
        }
    }
}

void Talk_GetStones() {
    switchcall InitTalk_Check() {
      case 4232984809:

        call Npc_Hylia_036_ShopCamera()

        Event26:
        switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
          case 0:
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 5})
            && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
                Event134:

                call SleepingTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_107'})

            } else
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 5}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_108', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_106', 'MaintainPerformanceState': 0})
                }
                if Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {
                    Event52:

                    call Mask_Talk_Hylia_036_02()

                    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                }
            } else
            Event13:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_101', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_103', 'MaintainPerformanceState': 0})
                }
                Event10:

                call Mask_Talk_Hylia_036_02()

            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_100', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_102', 'MaintainPerformanceState': 0})
                goto Event10
            }
          case 1:
            goto Event13
          case 2:
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 21, 'EndTme': 4})
            && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
                goto Event134
            } else
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_104', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_105', 'MaintainPerformanceState': 0})
            }
            goto Event52
        }
      case 4216207190:

        call Npc_Hylia_036_ShopCamera_02()

        goto Event26
    }
}

void AfterSageOfForest_Talk() {

    call Npc_Hylia_036_ShopCamera()

    switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
      case 0:
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 5})
        && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
            Event27:

            call SleepingTalk({'MessageId00': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_10'})

        } else
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 5}) {

            call WaitingForCustomers({'MessageId00': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_203'})

        } else
        Event44:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_06', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_204', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_201', 'MaintainPerformanceState': 0})
            }
            Event112:

            call Mask_Talk_Hylia_036_02()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_01', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_05', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_200', 'MaintainPerformanceState': 0})
            goto Event112
        }
      case 1:
        goto Event44
      case 2:
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 21, 'EndTme': 4})
        && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
            goto Event27
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_12', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_202', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        if Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            goto Event112
        }
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfterStep03_AND_SageOfForest_NotCompleted_Exp'}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case 1:
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 18}) {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_15', 'DisplayFrame': 120})
                  case 1:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_16', 'DisplayFrame': 120})
                  case 2:
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_17', 'DisplayFrame': 120})
                }
            }
          case 21:
            Event32:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_13'})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_14'})
            }
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_036_Child_CustomerArrived'}) {
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 18, 'EndTme': 0}) {
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_10'})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_11'})
                }
            } else
            if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 16, 'EndTme': 18}) {
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_08'})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_09'})
                }
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_036_Child_CustomerArrivedNum', 'Index': -1, 'Value': 2}) {
              case [0, 1]:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_03'})
                } else {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_02'})
                }
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Hylia_036_Child_CustomerArrivedNum', 'Index': -1, 'Value': 4}) {
                  case [0, 1]:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_04'})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_05'})
                    }
                  case 2:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_06'})
                    } else {
                        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_07'})
                    }
                }
            }
        } else
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 6, 'EndTme': 18})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_036_Child_CustomerMovedPlaza', 'Index': -1}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_12'})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_036_Child:Near_01'})
            }
        }
      case 21:
        goto Event32
    }
}

void SleepingTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId00', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void WaitingForCustomers() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_036_Child_TalkAct2Arrival'}) {
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            Event81:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_04', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_08', 'MaintainPerformanceState': 0})
            }
            Event138:

            call Mask_Talk_Hylia_036_02()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_036_Child_TalkAct2Arrival', 'Index': -1, 'Value': True})
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_09', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_13', 'IsCloseDialog': True, 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            fork {
                GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 2})
            } {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True})
            }

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_16', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId00', 'MaintainPerformanceState': 0})
            goto Event138
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_036_Child_TalkAct2Move'}) {
        goto Event81
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_036_Child_TalkAct2Move', 'Index': -1, 'Value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:Talk_18', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId00', 'MaintainPerformanceState': 0})
        goto Event138
    }
}

void Mask_Talk_Hylia_036_02() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_036_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_036_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_036_Child:GlassTruth'})
        }
    } else {

        call NpcCommon.Mask_Talk_Common_NoTopicNoTalkMonolog({'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_103', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_036_Child:Mask_08'})

    }
}

void InitTalk_Check() {
    switch EventWorldManagerController.EventQueryGreetingTimeDivision() {
      case 0:
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 5}) {
            Event150:
            return 4232984809
        } else
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 5}) {
            goto Event150
        } else
        Event139:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            goto Event150
        } else {
            return 4216207190
        }
      case 1:
        goto Event139
      case 2:
        goto Event150
    }
}

void Npc_Hylia_036_ShopCamera() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_036_Child_Inside', 'Index': -1}) {

        call InitTalk.InitTalk_NormalCamera({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } else {

        call Dedicated_Camera_Flow()

    }
}

void Dedicated_Camera_Flow() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 56.0, 'CameraCollisionMode': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_EventStarter', 'EnableCameraAlpha': True, 'AtVectorSetType': 3, 'MoveTime': 35, 'PosVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 2.0999999046325684, -1.7999999523162842], 'AtVector': [0.0, 1.2999999523162842, 1.2000000476837158], 'IsAtVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player_Event', 'IsEnableRevertFast': False})
    } {

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'ActorName': 'Player_Event'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

    }

}

void Npc_Hylia_036_ShopCamera_02() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_036_Child_Inside', 'Index': -1}) {

        call InitTalk.InitTalk_NormalCamera({'Arg_Greeting': 4, 'Arg_Turn': 0})

    } else {

        call Dedicated_Camera_Flow()

    }
}
