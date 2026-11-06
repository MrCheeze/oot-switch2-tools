-------- EventFlow: Npc_Gerudo_011 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Gerudo_011
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: ['EventQueryAvoidDuplicationRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_001[FortressCleared]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    Event46:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterCompleteTalk_Npc_Gerudo_001'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_011_Talk_Event17', 'Index': -1}) {
                Event7:

                call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker2ActorName': 'Npc_Gerudo_001', 'Actor2': ActorIdentifier(name="Npc_Gerudo_001", sub_name="FortressCleared"), 'Spearker2InstanceName': 'FortressCleared'})


                call Npc_Gerudo_001.MeetingSetUp()


                fork {
                    Npc_Gerudo_001[FortressCleared].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_011', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_Gerudo_001[FortressCleared].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Talk_Confident_Meeting'})
                } {
                    Npc_Gerudo_011.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_001', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'InstanceName': 'FortressCleared'})
                    Npc_Gerudo_011.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                switch Npc_Gerudo_011.EventQueryAvoidDuplicationRandomChoice4() {
                  case 0:

                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_55'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_54'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_48'})

                    Event1:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_011_Talk_Event17', 'Index': -1}) {
                        Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Talk_24', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
                        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                            Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Mask_11', 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog'})
                        }
                    } else
                    if !EventWorldManagerController.EventQueryTimeDivision() {
                        Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Talk_22', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
                    } else {
                        Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Talk_23', 'MaintainPerformanceState': 0, 'ASName': 'Wait'})
                    }
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Mask_05', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog'})
                    }
                  case 1:

                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_54'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_44'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_49'})

                    goto Event1
                  case 2:

                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_50'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_51'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_45'})

                    goto Event1
                  case 3:

                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_56'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_46'})


                    call MultipleEventTalk_Npc_Gerudo_001({'Washa_MessageID': 'EventFlowMsg/Npc_Gerudo_011:Talk_53'})

                    goto Event1
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_011_Talk_Event17', 'Value': True, 'Index': -1})

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

                Npc_Gerudo_001[FortressCleared].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_Gerudo_001[FortressCleared].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'TalkRest'})
                Npc_Gerudo_011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_011:Talk_41', 'MaintainPerformanceState': 0})
            }
        } else {

            call Npc_Gerudo_001.FIrstTalkCleard()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_IsAfterMeeting_Npc_Gerudo_001', 'Index': -1}) {
        goto Event7
    } else {

        call Npc_Gerudo_001.FIrstTalk()

    }
}

void NearActorsTalk() {
    goto Event46
}

void MultipleEventTalk_Npc_Gerudo_001() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': '', 'MessageId': 'Washa_MessageID'})
}
