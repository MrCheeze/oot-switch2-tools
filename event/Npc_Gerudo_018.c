-------- EventFlow: Npc_Gerudo_018 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_018
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Gerudo_017
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventAIScheduleNPCForceSecurityLifted']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

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

Actor: Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_014[GetOnTable_Room06(Speaker)]
entrypoint: GetOnTable_Room06(Speaker)
actions: ['EventPlayAS', 'EventTalk']
queries: []
params: None

Actor: Npc_Gerudo_015[GetOnTable_Room06(Listener)]
entrypoint: GetOnTable_Room06(Listener)
actions: ['EventTriggerLookAtObject', 'EventPlayAS', 'EventNPCTurnToTargetWithAS']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoFortress_GetOnTable_Room06', 'Index': -1}) {

        call GetOnTable_Room06({'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_107', 'MessageId_000': 'EventFlowMsg/Npc_Gerudo_018:Talk_108', 'Speaker2': 'Npc_Gerudo_018', 'Speaker': ActorIdentifier(name="Npc_Gerudo_018"), 'Listener': ActorIdentifier(name="Npc_Gerudo_017")})

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_Gerudo_017.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'Npc_Gerudo_018', 'IsWaitEnd': False})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_21', 'MaintainPerformanceState': 0})
            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_25', 'ASName': 'Notice', 'MaintainPerformanceState': 0})
            Event64:

            call Mask_All()

            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ASName': 'Notice', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_14', 'MaintainPerformanceState': 0})
            EventCamera.EventTriggerCameraSavePoint()
            if !Npc_Gerudo_018.EventQueryAvoidDuplicationRandomChoice2() {

                call TalkTo_Gerudo_017({'MessageId_01': 'EventFlowMsg/Npc_Gerudo_018:Talk_19', 'MessageId_02': 'EventFlowMsg/Npc_Gerudo_018:Talk_23'})

            } else {

                call TalkTo_Gerudo_017({'MessageId_01': 'EventFlowMsg/Npc_Gerudo_018:Talk_18', 'MessageId_02': 'EventFlowMsg/Npc_Gerudo_018:Talk_22'})

            }
            Npc_Gerudo_018.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Gerudo_018.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Gerudo_018', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_20', 'MaintainPerformanceState': 0, 'ASName': ''})
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
                Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'OverrideStyle': 8, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Mask_11', 'MaintainPerformanceState': 0, 'ASName': ''})
            }
        } else {
            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_01', 'MaintainPerformanceState': 0})
            Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Talk_24', 'ASName': 'Notice', 'MaintainPerformanceState': 0})
            goto Event64
        }
    }
}

void SageOfSpirit_IsAfter_Step01_Exp_Near() {
    Npc_Gerudo_018.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_018:Near_02'})
}

void Mask_All() {
    switchcall NpcCommon.CheckEquipmentMask() {
      case [3745441359, 1844135360]:

        call NpcCommon.Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_101', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_102', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Gerudo_018:Mask_102', 'ASName': 'Notice'})

        Event90:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 488279774:
        Npc_Gerudo_018.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Notice', 'MessageId': 'EventFlowMsg/Npc_Gerudo_018:Mask_03'})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event90
    }
}

void GetOnTable_Room06() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    Npc_Gerudo_014[GetOnTable_Room06(Speaker)].EventPlayAS({'ASName': 'Act_Surprise_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

    fork {

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'UseNormalTurn': False, 'Target': 3, 'ActorName': 'Speaker2', 'IsDoNavi': False})

            call NaviEventCommon.Navi_ActorWatch({'Target': 3, 'InstanceName': '', 'ActorName': 'Speaker2'})

        } {
            Npc_Gerudo_015[GetOnTable_Room06(Listener)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            if Npc_Gerudo_015[GetOnTable_Room06(Listener)].EventNPCQueryCheckFrontToTarget({'AngleThreshold': 60.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {
                Npc_Gerudo_015[GetOnTable_Room06(Listener)].EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            }
            Npc_Gerudo_015[GetOnTable_Room06(Listener)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Notice'})
        }

    } {
        Npc_Gerudo_014[GetOnTable_Room06(Speaker)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 0, 'MessageId': 'MessageId', 'IsOverrideStyle': False, 'MaintainPerformanceState': 0, 'ASName': ''})
    }

    Npc_Gerudo_014[GetOnTable_Room06(Speaker)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'MessageId_000', 'MaintainPerformanceState': 0, 'ASName': ''})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Obj_Gerudo_SwitchShutter_A_08[RestrictedDoor_GerudoFortress_00].EventDoorClose({'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'GotoPrison_FromFortressGuard', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})

    call Common_Camera_Pln.CameraDoF_Default()

    EventSystemActor.EventTransition({'EventName': 'Dm_Gerudo_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoFortress_GoToPrison_AfterClear'})
}

void TalkTo_Gerudo_017() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'MessageId': 'MessageId_01', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_017', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'TargetFovy': 5.0, 'Actor1ActorName': 'PlayerCamera', 'PosVectorSetType': 1, 'PosVector': [0.0, 0.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 1, 'FovySetType': 1, 'IsEnableRevertFast': False})
    }


    fork {
        Npc_Gerudo_017.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'MessageId': 'MessageId_02', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Npc_Gerudo_017', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVector': [0.5400000214576721, 1.7999999523162842, 3.0], 'AtVector': [0.019999999552965164, 1.2000000476837158, 0.019999999552965164], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}
