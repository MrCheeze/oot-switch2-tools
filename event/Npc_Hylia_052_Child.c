-------- EventFlow: Npc_Hylia_052_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryGameDataCheckStrayDogTakenAway']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_052_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: ['EventQueryAIScheduleGetReceiveInterestType', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsIndoor', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleCheckActorActionAll']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Animal_Dog_Richard_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_White[Stray_White_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Dog_Brown[Stray_Brown_02]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_03]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_04]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_05]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_06]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_07]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Animal_Dog_Brown[Stray_Brown_08]
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Animal_Dog_Brown[CheckPosition(Animal_Dog)]
entrypoint: CheckPosition(Animal_Dog)
actions: []
queries: ['EventQueryIsIndoor']
params: None

void Talk() {
    Event72:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringDog', 'Index': -1}) {
        switchcall NpcCommon.CheckEquipmentMask() {
          case [3745441359, 1844135360, 488279774]:

            call Mask_All()

            Event109:
            switch GameDataActor.EventQueryGameDataCheckStrayDogTakenAway() {
              case 0:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_01"), 'InstanceName': 'Stray_Brown_01'})

              case 1:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_02"), 'InstanceName': 'Stray_Brown_02'})

              case 2:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_03"), 'InstanceName': 'Stray_Brown_03'})

              case 3:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'InstanceName': 'Stray_Brown_04', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_04")})

              case 4:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_05"), 'InstanceName': 'Stray_Brown_05'})

              case 5:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_06"), 'InstanceName': 'Stray_Brown_06'})

              case 6:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_07"), 'InstanceName': 'Stray_Brown_07'})

              case 7:

                call CheckPosition({'ActorName': 'Animal_Dog_Brown', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_Brown", sub_name="Stray_Brown_08"), 'InstanceName': 'Stray_Brown_08'})

              case 8:

                call CheckPosition({'ActorName': 'Animal_Dog_White', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_01"), 'InstanceName': 'Stray_White_01'})

              case 9:

                call CheckPosition({'ActorName': 'Animal_Dog_White', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_02"), 'InstanceName': 'Stray_White_02'})

              case 10:

                call CheckPosition({'ActorName': 'Animal_Dog_White', 'Animal_Dog': ActorIdentifier(name="Animal_Dog_White", sub_name="Stray_White_03"), 'InstanceName': 'Stray_White_03'})

            }
          case 3362507297:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            goto Event109
        }
    } else {

        call Mask_All()

        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case 0:

            call noonTalk_moving()

          case 1:

            call noonTalk_arriving()

          case 2:

            call nightTalk_moving()

          case 3:

            call nightTalk_arriving()

          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
        }
    }
}

void Near() {
    Event117:
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 2]:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_05'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_01'})
        }
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void noonTalk_arriving() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_03', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1, 'Value': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
            Event47:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_60', 'MaintainPerformanceState': 0})
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event47
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_57', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_18', 'MaintainPerformanceState': 0})
    }
    goto Event47
}

void nightTalk_arriving() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_54', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1, 'Value': False})
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_58', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_59', 'MaintainPerformanceState': 0})
        }
    } else
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_35', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    }
}

void nightTalk_moving() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_Npc_Hylia_052_Child_IsInHome'}) {

        call nightTalk_arriving()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_54', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1, 'Value': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_52', 'MaintainPerformanceState': 0})
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_53', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_55', 'MaintainPerformanceState': 0})
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_34', 'MaintainPerformanceState': 0})
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_51', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_08', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        }
    }
}

void noonTalk_moving() {
    if !Npc_Hylia_052_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_30', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_16', 'MaintainPerformanceState': 0})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_10', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_SubEvent_FindRichard_MadamSayThankyou', 'Index': -1, 'Value': False})
    }
}

void isPlayerInHouse() {
    Npc_Hylia_052_Child.EventTriggerParticipateEvent()
    Animal_Dog_Richard_01.EventTriggerParticipateEvent()
    switch Npc_Hylia_052_Child.EventQueryAIScheduleCheckActorActionAll() {
      case 2:
        Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_13', 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_052_Child"), 'ActorName': 'Npc_Hylia_052_Child', 'InstanceName': ''})

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Hylia_052_Child', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.0, 1.149999976158142, 0.0], 'MoveTime': 60, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 60.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'MadamCameraPos', 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Event24:
        Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_19', 'MaintainPerformanceState': 0})
      case 3:
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_13', 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_052_Child"), 'ActorName': 'Npc_Hylia_052_Child', 'InstanceName': ''})

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Hylia_052_Child', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 60.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'MoveTime': 60, 'LookAtDis': -1.0, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'Actor2ActorName': '', 'TargetFovy': 50.0, 'PosVector': [0.0, 1.5, 2.5], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        goto Event24
    }
}

void Market_SubEvent_FindRichard_Retry_Near() {
    if !EventWorldManagerController.EventQueryTimeDivision() {
        switch Npc_Hylia_052_Child.EventQueryAIScheduleGetReceiveInterestType() {
          case [0, 7, 8]:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_06', 'DisplayFrame': 90})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_07', 'DisplayFrame': 90})
            }
          case [1, 2, 3, 4, 5, 6, 9, 10, 11]:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_04', 'DisplayFrame': 90})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_08'})
            }
        }
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_052_Child:Near_09'})
    }
}

void Market_SubEvent_FindRichard_Retry_Talk() {

    call Mask_All()


    call Greeting()

    if !EventWorldManagerController.EventQueryTimeDivision() {
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_28', 'MaintainPerformanceState': 0})
    } else {

        call nightTalk_GoneRichard()

    }
}

void nightTalk_GoneRichard() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringRichard', 'Index': -1}) {
        Animal_Dog_Richard_01.EventTriggerParticipateEvent()

        call SubEvent_FindRichard.SubEvent_FindRichard_ClearEvent_OpeningAct()


        call SubEvent_FindRichard.SubEvent_FindRichard_ClearEvent()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Npc_Hylia_052_Child_BringDog', 'Index': -1}) {

        call SubEvent_FindRichard.WhichStrayDog()

    } else {
        Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_29', 'MaintainPerformanceState': 0})
    }
}

void Greeting() {
    if Npc_Hylia_052_Child.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_27', 'MaintainPerformanceState': 0})
    }
}

void NearActorsTalk() {
    goto Event72
}

void NearActorsNear() {
    goto Event117
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_052_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_052_Child_GlassTruth'})
            if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_103', 'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_05_01', 'Arg_Turn_For_MaskTalk': 1}) {
          case 4205900657:
            Event71:
            return 4151362380
          case 4155567800:
            Event73:
            return 2799305849
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_052_Child:Mask_103', 'ASName': 'TalkMonolog', 'Arg_Turn_For_MaskTalk': 3}) {
          case 4205900657:
            goto Event71
          case 4155567800:
            goto Event73
        }
    }
}

void CheckPosition() {
    if !Animal_Dog_Brown[CheckPosition(Animal_Dog)].EventQueryIsIndoor() {
        if !Npc_Hylia_052_Child.EventQueryIsIndoor() {
            Npc_Hylia_052_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_48', 'MaintainPerformanceState': 0})
            Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_49', 'MaintainPerformanceState': 0})
        } else {
            Event135:

            call nightTalk_arriving()

        }
    } else
    if !Npc_Hylia_052_Child.EventQueryIsIndoor() {
        goto Event135
    } else {
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 3, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_48', 'MaintainPerformanceState': 0})
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_50', 'MaintainPerformanceState': 0})
    }
}

void Talk_RichardHouse() {
    goto Event72
}

void NearActorsTalk_RichardHouse() {
    goto Event72
}

void NearActorsNear_RichardHouse() {
    goto Event117
}

void Near_RichardHouse() {
    goto Event117
}
