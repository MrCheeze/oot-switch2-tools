-------- EventFlow: Npc_Hylia_Soldier_006_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice3', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Soldier_006_Child
entrypoint: None()
actions: ['EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
            Event29:

            call NormalTalk()

        } else {

            call GetStones()

        }
    } else {
        goto Event29
    }
}

void NormalTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:

        call GoWork()

      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_006_Child_Talk_Event14', 'Index': -1}) {
            if !Npc_Hylia_Soldier_006_Child.EventQueryIsOnRecentTalkFlag() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_21', 'MaintainPerformanceState': 0})
                    Event0:
                    Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_10', 'ASName': 'Act_StandSleep', 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Event128:
                        Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_16', 'ASName': 'Act_StandSleep', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_Soldier_006_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_Soldier_006_Child', 'Target': 2})
                        if !GameSystemActor.EventQueryRandomChoice2() {
                            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_20', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_26', 'MaintainPerformanceState': 0})
                        }
                        Npc_Hylia_Soldier_006_Child.EventTriggerRequestLookAtTheFront()
                    }
                  case 1:
                    Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_24', 'MaintainPerformanceState': 0})
                    goto Event0
                  case 2:
                    Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_25', 'MaintainPerformanceState': 0})
                    goto Event0
                }
            } else {
                Event117:

                call Mask_All()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_006_Child_Talk_Event14', 'Index': -1, 'Value': False})
                Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                Event105:
                Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_18', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_StandSleep', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_22', 'MaintainPerformanceState': 0})
                Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_38', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ASName': 'Act_StandSleep', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Hylia_Soldier_006_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})

                    fork {
                        if !GameSystemActor.EventQueryRandomChoice2() {
                            Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_12', 'IsCloseDialog': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_29', 'MaintainPerformanceState': 0})
                        }
                    } {
                        Npc_Hylia_Soldier_006_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    }

                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_15', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_23', 'MaintainPerformanceState': 0})
                    }
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_006_Child_Talk_Event14', 'Value': True, 'Index': -1})
                    Npc_Hylia_Soldier_006_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                    Npc_Hylia_Soldier_006_Child.EventTriggerRequestLookAtTheFront()
                } else {
                    goto Event128
                }
            }
        } else
        if !Npc_Hylia_Soldier_006_Child.EventQueryIsOnRecentTalkFlag() {

            call Mask_All()

            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_19', 'MaintainPerformanceState': 0})
            goto Event105
        } else {
            goto Event117
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call GoHome()

    }
}

void GetStones() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 0:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


        call MaskTruth_LookIK({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05'})

        if !Npc_Hylia_Soldier_006_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_33', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_30', 'MaintainPerformanceState': 0})
        }
      case 1:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


        call MaskTruth_LookIK({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05'})

        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_39', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_10', 'ASName': 'Act_StandSleep', 'MaintainPerformanceState': 0})
        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Hylia_Soldier_006_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_Soldier_006_Child', 'Target': 2})
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_36', 'MaintainPerformanceState': 0})
            Event92:
            Npc_Hylia_Soldier_006_Child.EventTriggerRequestLookAtTheFront()
          case 1:
            Npc_Hylia_Soldier_006_Child.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'ActorName': 'Npc_Hylia_Soldier_006_Child', 'Target': 2})
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_37', 'MaintainPerformanceState': 0})
            goto Event92
          case 2:
            Npc_Hylia_Soldier_006_Child.EventTalk({'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_16', 'ASName': 'Act_StandSleep', 'MaintainPerformanceState': 0})
        }
      case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
      case 24:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


        call MaskTruth_LookIK({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05_02'})

        if !Npc_Hylia_Soldier_006_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_34', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_32', 'MaintainPerformanceState': 0})
        }
    }
}

void GoWork() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


    call MaskTruth_LookIK({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05'})

    if !Npc_Hylia_Soldier_006_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_01', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_07', 'MaintainPerformanceState': 0})
    }
}

void GoHome() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})


    call MaskTruth_LookIK({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05_02'})

    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        if !Npc_Hylia_Soldier_006_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_41', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_40', 'MaintainPerformanceState': 0})
        }
    } else
    if !Npc_Hylia_Soldier_006_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_04', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Soldier_006_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_08', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    }
}

void Market_CanbeStopped_Npc_Hylia_Soldier_006_01() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_01({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_006_Child', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_006_Child"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_100', 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_101'})

}

void Market_CanbeStopped_Npc_Hylia_Soldier_006_02() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_02({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_006_Child', 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_102', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_006_Child"), 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Talk_103'})

}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier006_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Soldier006_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk0() {
          case fnv1a("Mask_Talk"):
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk0() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'ASName': 'TalkMonolog', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_04', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_07', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_103', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_06', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_08_02', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05_01'}) {
          case 0xfab0f371:
            Event145:
            return fnv1a("Mask_Talk")
          case 0xf7b0eeb8:
            Event146:
            return 0xa6da0479
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'ASName': 'TalkMonolog', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_07', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_103', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_06', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_08_02'}) {
          case 0xfab0f371:
            goto Event145
          case 0xf7b0eeb8:
            goto Event146
        }
    }
}

void MaskTruth_LookIK() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {

        call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_006_Child:Mask_05_01'})

    } else {

        call NpcCommon.Mask_Truth({'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'Mask_Truth_Talk'})

    }
}
