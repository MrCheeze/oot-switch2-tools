-------- EventFlow: Npc_Gerudo_016 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_016
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryRandomChoice6', 'EventQueryRandomChoice4', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventDoNothing']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_016_Talk_Event35', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_016_Talk_Event40', 'Index': -1}) {
            if !Npc_Gerudo_016.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_32', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ASName': '', 'MaintainPerformanceState': 0})
                Event33:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_016_Talk_Event40', 'Value': True, 'Index': -1})

                    fork {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        if !Npc_Gerudo_016.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 20.0}) {
                            Npc_Gerudo_016.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        } else {
                            Npc_Gerudo_016.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        }
                    }

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Clear'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_41', 'MaintainPerformanceState': 0})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_42', 'MaintainPerformanceState': 0})

                            call Npc_Gerudo_016_CameraSet()


                            call Quiz_Ex()

                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_33', 'ASName': '', 'MaintainPerformanceState': 0})

                            call Npc_Gerudo_016_CameraSet()


                            call Quiz_Hard()

                        }
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_03', 'MaintainPerformanceState': 0})

                        call Npc_Gerudo_016_CameraSet()


                        call Quiz_Easy()

                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    if !Player_Event.EventQueryPlayerIsEquipMask() {
                        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                            Event69:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Clear'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_34', 'ASName': '', 'MaintainPerformanceState': 0})
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_15', 'MaintainPerformanceState': 0})
                            }
                            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_18', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
                            }
                        } else
                        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
                            Event351:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_104', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_103', 'MaintainPerformanceState': 0})
                        }
                    } else
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                        goto Event351
                    } else
                    goto Event69
                }
            } else {

                call Surprise()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_18', 'MaintainPerformanceState': 0})
                goto Event33
            }
        } else
        if !Npc_Gerudo_016.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_02', 'MaintainPerformanceState': 0})
            goto Event33
        } else {

            call Surprise()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_19', 'MaintainPerformanceState': 0})
            goto Event33
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_016_Talk_Event35', 'Value': True, 'Index': -1})

        call Surprise()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_01', 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_02', 'MaintainPerformanceState': 0})
        goto Event33
    }
}

void SageOfSpirit_IsAfter_Step01_Exp_Near() {
    Npc_Gerudo_016.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_016:Near_01'})
}

void Npc_Gerudo_016_CameraSet() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_Gerudo_016.EventTriggerRequestLookAtTheFront()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Gerudo_016', 'AtVector': [-0.019999999552965164, 1.4199999570846558, 0.1899999976158142], 'PosVector': [0.1599999964237213, 1.2400000095367432, 1.9299999475479126], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void Quiz_Easy() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear', 'Value': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_29', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        switchcall Quiz_Easy_Question1() {
          case fnv1a("clear"):
            Event23:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_30', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear'}) {
                    Event193:
                    switchcall Quiz_Easy_Question2() {
                      case fnv1a("clear"):
                        Event67:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_31', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'}) {
                                switchcall Quiz_Easy_Question3() {
                                  case fnv1a("clear"):
                                    Event272:

                                    call CleardAndMaskTruth()

                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_17', 'MaintainPerformanceState': 0})
                                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Clear'})
                                }
                            } else {
                                switchcall Quiz_Easy_Question2() {
                                  case fnv1a("clear"):
                                    goto Event272
                                }
                            }
                        } else {
                            switchcall Quiz_Easy_Question1() {
                              case fnv1a("clear"):
                                goto Event272
                            }
                        }
                    }
                } else {
                    Event185:
                    switchcall Quiz_Easy_Question1() {
                      case fnv1a("clear"):
                        goto Event67
                    }
                }
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'}) {
                    Event194:
                    switchcall Quiz_Easy_Question3() {
                      case fnv1a("clear"):
                        goto Event67
                    }
                } else {
                    goto Event193
                }
              case 2:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'}) {
                    goto Event185
                } else {
                    goto Event194
                }
            }
        }
      case 1:
        switchcall Quiz_Easy_Question2() {
          case fnv1a("clear"):
            goto Event23
        }
      case 2:
        switchcall Quiz_Easy_Question3() {
          case fnv1a("clear"):
            goto Event23
        }
    }
}

void Quiz_Easy_Question1() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_05', 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case [0, 2]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_08', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_11', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event186:
        return 0xc5aee3ca
      case 1:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_07', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear'})
        return fnv1a("clear")
      case 3:

        call Quiz_Cancel()

        goto Event186
    }
}

void Quiz_Easy_Question2() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_09', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceLabel3': 12, 'ChoiceLabel4': 5, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case [0, 1]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_22', 'NotPlayLipSyncAnim': True, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_43', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_12', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event188:
        return 0xc5aee3ca
      case 2:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_16', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'})
        return fnv1a("clear")
      case 3:

        call Quiz_Cancel()

        goto Event188
    }
}

void Quiz_Easy_Question3() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_12', 'ChoiceNumber': 4, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 8, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case [0, 1]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_24', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_15', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event190:
        return 0xc5aee3ca
      case 2:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_23', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'})
        return fnv1a("clear")
      case 3:

        call Quiz_Cancel()

        goto Event190
    }
}

void Quiz_Cancel() {

    call Npc_Gerudo_016_CameraReset()

    if !Player_Event.EventQueryPlayerIsEquipMask() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_21', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_17', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_105', 'MaintainPerformanceState': 0})
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_106', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_21', 'MaintainPerformanceState': 0})
    }
}

void Quiz_Hard_Question1() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_26', 'ChoiceNumber': 4, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceLabel4': 9, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case [0, 1]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_08', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_13', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event233:
        return 0xc5aee3ca
      case 2:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_11', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'})
        return fnv1a("clear")
      case 3:

        call Quiz_Cancel()

        goto Event233
    }
}

void Quiz_Hard_Question2() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'OverrideStyle': 8, 'ChoiceLabel4': 5, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_27', 'ChoiceLabel1': 17, 'ChoiceLabel2': 19, 'ChoiceLabel3': 20, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_36', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'})
        return fnv1a("clear")
      case [1, 2]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_22', 'NotPlayLipSyncAnim': True, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_43', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_14', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event235:
        return 0xc5aee3ca
      case 3:

        call Quiz_Cancel()

        goto Event235
    }
}

void Quiz_Hard_Question3() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_28', 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'ChoiceLabel3': 23, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_13', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question3Clear'})
        return fnv1a("clear")
      case [1, 2]:

        call Npc_Gerudo_016_CameraReset()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_24', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_16', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
        }
        Event237:
        return 0xc5aee3ca
      case 3:

        call Quiz_Cancel()

        goto Event237
    }
}

void Quiz_Hard() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question3Clear'})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_29', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        switchcall Quiz_Hard_Question1() {
          case fnv1a("clear"):
            Event251:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_30', 'MaintainPerformanceState': 0})
            switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                    Event7:
                    switchcall Quiz_Hard_Question2() {
                      case fnv1a("clear"):
                        Event247:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_31', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                                switchcall Quiz_Hard_Question3() {
                                  case fnv1a("clear"):
                                    Event209:

                                    call CleardAndMaskTruth()

                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_35', 'MaintainPerformanceState': 0})
                                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Clear'})
                                }
                            } else {
                                switchcall Quiz_Hard_Question2() {
                                  case fnv1a("clear"):
                                    goto Event209
                                }
                            }
                        } else {
                            switchcall Quiz_Hard_Question1() {
                              case fnv1a("clear"):
                                goto Event209
                            }
                        }
                    }
                } else {
                    Event6:
                    switchcall Quiz_Hard_Question1() {
                      case fnv1a("clear"):
                        goto Event247
                    }
                }
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                    Event8:
                    switchcall Quiz_Hard_Question3() {
                      case fnv1a("clear"):
                        goto Event247
                    }
                } else {
                    goto Event7
                }
              case 2:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question3Clear'}) {
                    goto Event6
                } else {
                    goto Event8
                }
            }
        }
      case 1:
        switchcall Quiz_Hard_Question2() {
          case fnv1a("clear"):
            goto Event251
        }
      case 2:
        switchcall Quiz_Hard_Question3() {
          case fnv1a("clear"):
            goto Event251
        }
    }
}

void Quiz_Ex() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GerudoFortress_QuizHard_Question3Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear', 'Value': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_29', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    switch GameSystemActor.EventQueryRandomChoice6() {
      case 0:
        switchcall Quiz_Easy_Question1() {
          case fnv1a("clear"):
            Event268:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_39', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_30', 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryRandomChoice6() {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear'}) {
                    Event142:
                    switchcall Quiz_Easy_Question2() {
                      case fnv1a("clear"):
                        Event344:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_37', 'MaintainPerformanceState': 0})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'OverrideStyle': 8, 'IsOverrideStyle': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_31', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question1Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        Event333:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event333
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event333
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event333
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        Event332:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event332
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event332
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event332
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        Event331:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        goto Event331
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event331
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event331
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        Event330:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        goto Event330
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event330
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event330
                                    }
                                }
                            } else
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                switchcall Quiz_Easy_Question2() {
                                  case fnv1a("clear"):
                                    Event76:

                                    call Extra_Clear()

                                }
                              case 1:
                                switchcall Quiz_Easy_Question3() {
                                  case fnv1a("clear"):
                                    goto Event76
                                }
                              case 2:
                                switchcall Quiz_Hard_Question1() {
                                  case fnv1a("clear"):
                                    goto Event76
                                }
                              case 3:
                                switchcall Quiz_Hard_Question2() {
                                  case fnv1a("clear"):
                                    goto Event76
                                }
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event334:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event334
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event334
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event334
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event335:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        goto Event335
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event335
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event335
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event336:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        goto Event336
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event336
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event336
                                    }
                                }
                            } else
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                switchcall Quiz_Easy_Question1() {
                                  case fnv1a("clear"):
                                    Event337:

                                    call Extra_Clear()

                                }
                              case 1:
                                switchcall Quiz_Easy_Question3() {
                                  case fnv1a("clear"):
                                    goto Event337
                                }
                              case 2:
                                switchcall Quiz_Hard_Question1() {
                                  case fnv1a("clear"):
                                    goto Event337
                                }
                              case 3:
                                switchcall Quiz_Hard_Question2() {
                                  case fnv1a("clear"):
                                    goto Event337
                                }
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event339:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        goto Event339
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question2() {
                                      case fnv1a("clear"):
                                        goto Event339
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event339
                                    }
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event338:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        goto Event338
                                    }
                                  case 2:
                                    switchcall Quiz_Hard_Question1() {
                                      case fnv1a("clear"):
                                        goto Event338
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event338
                                    }
                                }
                            } else
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                switchcall Quiz_Easy_Question1() {
                                  case fnv1a("clear"):
                                    Event343:

                                    call Extra_Clear()

                                }
                              case 1:
                                switchcall Quiz_Easy_Question2() {
                                  case fnv1a("clear"):
                                    goto Event343
                                }
                              case 2:
                                switchcall Quiz_Hard_Question1() {
                                  case fnv1a("clear"):
                                    goto Event343
                                }
                              case 3:
                                switchcall Quiz_Hard_Question2() {
                                  case fnv1a("clear"):
                                    goto Event343
                                }
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                                switch GameSystemActor.EventQueryRandomChoice4() {
                                  case 0:
                                    switchcall Quiz_Easy_Question1() {
                                      case fnv1a("clear"):
                                        Event340:

                                        call Extra_Clear()

                                    }
                                  case 1:
                                    switchcall Quiz_Easy_Question2() {
                                      case fnv1a("clear"):
                                        goto Event340
                                    }
                                  case 2:
                                    switchcall Quiz_Easy_Question3() {
                                      case fnv1a("clear"):
                                        goto Event340
                                    }
                                  case 3:
                                    switchcall Quiz_Hard_Question3() {
                                      case fnv1a("clear"):
                                        goto Event340
                                    }
                                }
                            } else
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                switchcall Quiz_Easy_Question1() {
                                  case fnv1a("clear"):
                                    Event341:

                                    call Extra_Clear()

                                }
                              case 1:
                                switchcall Quiz_Easy_Question2() {
                                  case fnv1a("clear"):
                                    goto Event341
                                }
                              case 2:
                                switchcall Quiz_Easy_Question3() {
                                  case fnv1a("clear"):
                                    goto Event341
                                }
                              case 3:
                                switchcall Quiz_Hard_Question2() {
                                  case fnv1a("clear"):
                                    goto Event341
                                }
                            }
                        } else
                        switch GameSystemActor.EventQueryRandomChoice4() {
                          case 0:
                            switchcall Quiz_Easy_Question1() {
                              case fnv1a("clear"):
                                Event342:

                                call Extra_Clear()

                            }
                          case 1:
                            switchcall Quiz_Easy_Question2() {
                              case fnv1a("clear"):
                                goto Event342
                            }
                          case 2:
                            switchcall Quiz_Easy_Question3() {
                              case fnv1a("clear"):
                                goto Event342
                            }
                          case 3:
                            switchcall Quiz_Hard_Question1() {
                              case fnv1a("clear"):
                                goto Event342
                            }
                        }
                    }
                } else {
                    Event141:
                    switchcall Quiz_Easy_Question1() {
                      case fnv1a("clear"):
                        goto Event344
                    }
                }
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question2Clear'}) {
                    Event144:
                    switchcall Quiz_Easy_Question3() {
                      case fnv1a("clear"):
                        goto Event344
                    }
                } else {
                    goto Event142
                }
              case 2:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizEasy_Question3Clear'}) {
                    Event89:
                    switchcall Quiz_Hard_Question1() {
                      case fnv1a("clear"):
                        goto Event344
                    }
                } else {
                    goto Event144
                }
              case 3:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question1Clear'}) {
                    Event121:
                    switchcall Quiz_Hard_Question2() {
                      case fnv1a("clear"):
                        goto Event344
                    }
                } else {
                    goto Event89
                }
              case 4:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question2Clear'}) {
                    Event122:
                    switchcall Quiz_Hard_Question3() {
                      case fnv1a("clear"):
                        goto Event344
                    }
                } else {
                    goto Event121
                }
              case 5:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_QuizHard_Question3Clear'}) {
                    goto Event141
                } else {
                    goto Event122
                }
            }
        }
      case 1:
        switchcall Quiz_Easy_Question2() {
          case fnv1a("clear"):
            goto Event268
        }
      case 2:
        switchcall Quiz_Easy_Question3() {
          case fnv1a("clear"):
            goto Event268
        }
      case 3:
        switchcall Quiz_Hard_Question1() {
          case fnv1a("clear"):
            goto Event268
        }
      case 4:
        switchcall Quiz_Hard_Question2() {
          case fnv1a("clear"):
            goto Event268
        }
      case 5:
        switchcall Quiz_Hard_Question3() {
          case fnv1a("clear"):
            goto Event268
        }
    }
}

void Extra_Clear() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_38', 'MaintainPerformanceState': 0})

    call CleardAndMaskTruth()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_35', 'MaintainPerformanceState': 0})
}

void Surprise() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkSurprise', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_00', 'ASName': 'Notice', 'MaintainPerformanceState': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
}

void CleardAndMaskTruth() {
    Npc_Gerudo_016.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': ''})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventDoNothing({'IsWaitEnd': True})
    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Talk_20', 'MaintainPerformanceState': 0})
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_016:Mask_05', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    }
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_016', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Npc_Gerudo_016_CameraReset() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventDoNothing({'IsWaitEnd': True})
    }

}
