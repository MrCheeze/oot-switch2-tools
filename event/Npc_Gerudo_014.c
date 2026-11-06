-------- EventFlow: Npc_Gerudo_014 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_015
entrypoint: None()
actions: ['EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Gerudo_014
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

void Talk() {
    Event42:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_GetOnTable_Room02'}) {

        call InitTalk.InitTalk_Pair({'Spearker2ActorName': 'Npc_Gerudo_015', 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Actor2': ActorIdentifier(name="Npc_Gerudo_015"), 'Arg_Greeting': 3})


        call Npc_Gerudo_015.GetOnTable_Room02({'MessageId': 'EventFlowMsg/Npc_Gerudo_014:Talk_100', 'MessageId_000': 'EventFlowMsg/Npc_Gerudo_014:Talk_101', 'Speaker': ActorIdentifier(name="Npc_Gerudo_014"), 'Listner': ActorIdentifier(name="Npc_Gerudo_015"), 'ActorName': 'Npc_Gerudo_014'})

    } else {

        call InitTalk.InitTalk_Pair({'Spearker2ActorName': 'Npc_Gerudo_015', 'Spearker2InstanceName': '', 'Arg_Turn': 0, 'Actor2': ActorIdentifier(name="Npc_Gerudo_015"), 'Arg_Greeting': 3})

        Npc_Gerudo_015.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_014', 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Gerudo_014.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_015', 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterFirstTalk_Npc_Gerudo_015'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
              case [0, 1]:

                call Npc_Gerudo_015.MeetingTalk_01()

                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'GerudoFortress_MeetingTalkNo'})

                call TrueMask_suprise()

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                  case 1:

                    call Npc_Gerudo_015.MeetingTalk_02()

                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 2})

                    call TrueMask()

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                      case 1:

                        call Npc_Gerudo_015.MeetingTalk_03()

                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 3})

                        call TrueMask_suprise()

                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                          case 1:

                            call Npc_Gerudo_015.MeetingTalk_04()

                            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 4})

                            call TrueMask_suprise()

                          case 2:
                            switch Npc_Gerudo_015.EventQueryAvoidDuplicationRandomChoice4() {
                              case 0:

                                call Npc_Gerudo_015.MeetingTalk_01()


                                call TrueMask_suprise()

                              case 1:

                                call Npc_Gerudo_015.MeetingTalk_02()


                                call TrueMask()

                              case 2:

                                call Npc_Gerudo_015.MeetingTalk_03()


                                call TrueMask_suprise()

                              case 3:

                                call Npc_Gerudo_015.MeetingTalk_04()


                                call TrueMask_suprise()

                            }
                        }
                    }
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_IsAfterFirstTalk_Npc_Gerudo_015'})

            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_25', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'TalkMonolog'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_22', 'Kikite_ASName': 'Act_Joy_Wait'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_28', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'TalkMonolog'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Act_Surprise_Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_39'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_40', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'TalkMonolog'})

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Gerudo_014.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_014:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'Act_Think_Wait', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void SageOfSpirit_IsAfter_Step01_Exp_Near() {
    Event9:
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_014:Near_01'})
}

void NearActorsTalk() {
    goto Event42
}

void NearActorsNear() {
    goto Event9
}

void TrueMask() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_Gerudo_014.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_014:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    }
}

void TrueMask_suprise() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_Gerudo_014.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_014:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0, 'ASName': 'TalkMonolog', 'NotPlayLipSyncAnim': True})
    }
}
