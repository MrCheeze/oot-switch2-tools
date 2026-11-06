-------- EventFlow: Npc_Gerudo_015 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_015
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryAvoidDuplicationRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_014
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventAIScheduleNPCForceSecurityLifted']
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_014[GetOnTable_Room02(Speaker)]
entrypoint: GetOnTable_Room02(Speaker)
actions: ['EventTriggerLookAtObject', 'EventPlayAS', 'EventTalk']
queries: []
params: None

Actor: Npc_Gerudo_015[GetOnTable_Room02(Listner)]
entrypoint: GetOnTable_Room02(Listner)
actions: ['EventTriggerLookAtObject', 'EventPlayAS', 'EventNPCTurnToTargetWithAS']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

void Talk() {
    Event57:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_GetOnTable_Room02'}) {

        call InitTalk.InitTalk_Pair({'Spearker2InstanceName': '', 'Arg_Greeting': 3, 'Spearker2ActorName': 'Npc_Gerudo_014', 'Arg_Turn': 0, 'Actor2': ActorIdentifier(name="Npc_Gerudo_014")})


        call GetOnTable_Room02({'MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_102', 'MessageId_000': 'EventFlowMsg/Npc_Gerudo_015:Talk_103', 'Speaker': ActorIdentifier(name="Npc_Gerudo_015"), 'Listner': ActorIdentifier(name="Npc_Gerudo_014"), 'ActorName': 'Npc_Gerudo_015'})

    } else {

        call InitTalk.InitTalk_Pair({'Spearker2ActorName': 'Npc_Gerudo_014', 'Spearker2InstanceName': '', 'Actor2': ActorIdentifier(name="Npc_Gerudo_014"), 'Arg_Turn': 0, 'Arg_Greeting': 3})

        Npc_Gerudo_015.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_014', 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Gerudo_014.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_015', 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterFirstTalk_Npc_Gerudo_015'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                  case [0, 1]:

                    call MeetingTalk_01()

                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'GerudoFortress_MeetingTalkNo'})
                    Event10:
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                        Npc_Gerudo_015.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_015:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'Act_Joy_Wait', 'MaintainPerformanceState': 0})
                    }
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                      case 1:

                        call MeetingTalk_02()

                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 2})
                        goto Event10
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                          case 1:

                            call MeetingTalk_03()

                            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 3})
                            goto Event10
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'GerudoFortress_MeetingTalkNo'}) {
                              case 1:

                                call MeetingTalk_04()

                                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'GerudoFortress_MeetingTalkNo', 'Value': 4})
                                goto Event10
                              case 2:
                                switch Npc_Gerudo_015.EventQueryAvoidDuplicationRandomChoice4() {
                                  case 0:
                                    Event15:

                                    call MeetingTalk_01()

                                    goto Event10
                                  case 1:

                                    call MeetingTalk_02()

                                    goto Event10
                                  case 2:

                                    call MeetingTalk_03()

                                    goto Event10
                                  case 3:
                                    Event33:

                                    call MeetingTalk_04()

                                    goto Event10
                                }
                            }
                        }
                    }
                }
            } else
            if !GameSystemActor.EventQueryRandomChoice2() {
                goto Event15
            } else {
                goto Event33
            }
            goto Event10
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_IsAfterFirstTalk_Npc_Gerudo_015'})

            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_25', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_22', 'Kikite_ASName': 'Act_Joy_Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014")})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_28', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Act_Surprise_Wait', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_39', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014")})

            Npc_Gerudo_014.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_40', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})

            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Gerudo_015.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_015:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'Act_Joy_Wait', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void NearActorsTalk() {
    goto Event57
}

void NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_IsAfterFirstTalk_Npc_Gerudo_015'}) {
        switch Npc_Gerudo_015.EventQueryAvoidDuplicationRandomChoice4() {
          case 0:
            Npc_Gerudo_015.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_015:Near_04'})
          case 1:
            Npc_Gerudo_015.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_015:Near_05'})
          case 2:
            Npc_Gerudo_015.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_015:Near_06'})
          case 3:
            Npc_Gerudo_015.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_015:Near_07'})
        }
    } else {
        Npc_Gerudo_015.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_015:Near_03'})
    }
}

void MeetingTalk_01() {

    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_18', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_17', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_27', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_41', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014")})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_42', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_43', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Kikite_ASName': 'Wait'})

}

void MeetingTalk_02() {
    Npc_Gerudo_015.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})

    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_46', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_19'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_21'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_26', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Kikite_ASName': 'Wait'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_44'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_45'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_47'})

}

void MeetingTalk_03() {

    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Wait', 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_36', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_ASName': 'Talk'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_20'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_37', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_ASName': 'Act_Joy_Wait'})

    Npc_Gerudo_015.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})

    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_38'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_29'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_12'})

}

void MeetingTalk_04() {

    call NpcCommon.MultipleEventTalk_Pair({'Kikite_ASName': 'Wait', 'Washa_ASName': 'Talk', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_23'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_30'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_13'})


    call NpcCommon.MultipleEventTalk_Pair({'Washa_ASName': '', 'Kikite_ASName': 'Wait', 'Kikite_Actor': ActorIdentifier(name="Npc_Gerudo_015"), 'Washa_Actor': ActorIdentifier(name="Npc_Gerudo_014"), 'Washa_MessageId': 'EventFlowMsg/Npc_Gerudo_015:Talk_14'})

}

void GetOnTable_Room02() {
    Npc_Gerudo_014[GetOnTable_Room02(Speaker)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Gerudo_014[GetOnTable_Room02(Speaker)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Surprise_Wait'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Gerudo_015[GetOnTable_Room02(Listner)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'UseNormalTurn': False, 'Target': 3, 'ActorName': 'ActorName', 'IsDoNavi': False})

            call NaviEventCommon.Navi_ActorWatch({'Target': 3, 'ActorName': 'ActorName', 'InstanceName': ''})

        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            if Npc_Gerudo_015[GetOnTable_Room02(Listner)].EventNPCQueryCheckFrontToTarget({'AngleThreshold': 60.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {
                Npc_Gerudo_015[GetOnTable_Room02(Listner)].EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            }
            Npc_Gerudo_015[GetOnTable_Room02(Listner)].EventPlayAS({'ASName': 'Notice', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    } {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Gerudo_014[GetOnTable_Room02(Speaker)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Notice', 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
        } else {
            Npc_Gerudo_014[GetOnTable_Room02(Speaker)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'MessageId_000', 'ASName': 'Notice', 'MaintainPerformanceState': 0})
        }
    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00].EventDoorClose({'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'GotoPrison_FromFortressGuard', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})

    call Common_Camera_Pln.CameraDoF_Default()

    EventSystemActor.EventTransition({'EventName': 'Dm_Gerudo_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_GoToPrison_AfterClear'})
}
