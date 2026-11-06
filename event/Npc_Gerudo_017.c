-------- EventFlow: Npc_Gerudo_017 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorActionAll']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_017
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_018
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_GetOnTable_Room06', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {

            call Npc_Gerudo_018.GetOnTable_Room06({'Speaker2': 'Npc_Gerudo_017', 'Speaker': ActorIdentifier(name="Npc_Gerudo_017"), 'Listener': ActorIdentifier(name="Npc_Gerudo_018"), 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_105', 'MessageId_000': 'EventFlowMsg/Npc_Gerudo_017:Talk_106'})

        } else {

            call Npc_Gerudo_018.GetOnTable_Room06({'Speaker2': 'Npc_Gerudo_017', 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_107', 'Speaker': ActorIdentifier(name="Npc_Gerudo_017"), 'Listener': ActorIdentifier(name="Npc_Gerudo_018"), 'MessageId_000': 'EventFlowMsg/Npc_Gerudo_017:Talk_108'})

        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 4, 5, 6, 7]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

        Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_140', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
                Event27:

                call Talk_turn018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Mask_121'})

                if !Npc_Gerudo_017.EventQueryAvoidDuplicationRandomChoice2() {

                    call TalkTo_Gerudo_018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_133', 'CamMessageId2': 'EventFlowMsg/Npc_Gerudo_017:Talk_137'})

                } else {

                    call TalkTo_Gerudo_018({'CamMessageId2': 'EventFlowMsg/Npc_Gerudo_017:Talk_148', 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_147'})

                }
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_139', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
                goto Event27
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
                goto Event27
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Mask_105', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
            } else
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
                Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Mask_125', 'MaintainPerformanceState': 0})
            } else {
                Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_122'})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Event83:
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Mask_106', 'MaintainPerformanceState': 0})
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            goto Event83
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
            goto Event83
        } else {
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_124', 'MaintainPerformanceState': 0})
        }
      case 1:

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 4})

        Npc_Gerudo_017.EventTriggerRequestLookAtTheFront()
        switch Npc_Gerudo_017.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:

            call Talk_turn018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_132'})


            call TalkTo_Gerudo_018({'CamMessageId2': 'EventFlowMsg/Npc_Gerudo_017:Talk_144', 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_142'})

            Event40:
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_138', 'ASName': 'Act_LookAround', 'MaintainPerformanceState': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_134', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
            Event21:
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Mask_05', 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
            }
          case 1:

            call Talk_turn018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_130'})


            call TalkTo_Gerudo_018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_143', 'CamMessageId2': 'EventFlowMsg/Npc_Gerudo_017:Talk_144'})

            goto Event40
          case 2:

            call Talk_turn018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_131'})


            call TalkTo_Gerudo_018({'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_145', 'CamMessageId2': 'EventFlowMsg/Npc_Gerudo_017:Talk_146'})

            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_138', 'ASName': 'Act_LookAround', 'MaintainPerformanceState': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_017:Talk_135', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
            goto Event21
        }
    }
}

void SageOfSpirit_IsAfter_Step01_Exp_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case 1:
        Npc_Gerudo_017.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_017:Near_03'})
      case 6:
        Npc_Gerudo_017.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_017:Near_04'})
    }
}

void TalkTo_Gerudo_018() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Gerudo_018', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            Npc_Gerudo_017.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        }

    } {
        Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Angry_Wait', 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    }

    Npc_Gerudo_017.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_018', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': '017_CamPos', 'VectorSetType': 3, 'Vector': [0.0, -0.5, 0.0], 'IsIgnoreVectorReferenceActorRot': False}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'Npc_Gerudo_018', 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': '017_CamPos', 'PosVector': [0.0, -0.5, 0.0], 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'Npc_Gerudo_018', 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': '017_CamPos', 'MoveTime': 45, 'PosVector': [0.0, -0.5, 0.0], 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': False, 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0], 'UseNormalTurn': False, 'ActorName': 'Npc_Gerudo_018', 'IsDoNavi': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceDistance': 1.0, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 0.0, 'ToleranceYDownwardAngle': 2.5, 'ToleranceYUpwardAngle': 10.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'LookAtVectorY': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_Gerudo_018', 'TargetActorInstanceName': '', 'IdealDistance': 4.5})

    fork {
        Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Angry_Wait', 'MessageId': 'CamMessageId2', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    Npc_Gerudo_017.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    Npc_Gerudo_017.EventTriggerLookAtObject({'ActorName': 'Npc_Gerudo_018', 'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': False, 'ActorName': 'Npc_Gerudo_017', 'Target': 3, 'PosOffset': [0.0, 0.0, 0.0], 'UseNormalTurn': False, 'IsDoNavi': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_IsAfterScolded_Npc_Gerudo_017', 'Index': -1, 'Value': True})
}

void Talk_turn018() {

    fork {
        Npc_Gerudo_018.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_Gerudo_017', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    }

}
