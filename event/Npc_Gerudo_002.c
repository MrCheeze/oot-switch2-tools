-------- EventFlow: Npc_Gerudo_002 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerConversate', 'EventPlayerMoveToAnchor']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Gerudo_002
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerLookAtObject']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Npc_Gerudo_002.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Angry_Wait'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Event71:
    Npc_Gerudo_002.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Gerudo_002_Child_First'}) {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'ChoiceLabel3': 1, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_138', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        }
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_111', 'ASName': '', 'MaintainPerformanceState': 0})
        Event21:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Gerudo({'ChoiceLabel1': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1})

            if !GameSystemActor.EventQueryTalkChoice2() {

                call Ganondorf({'ChoiceNumber': -1, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})


                call GetOut({'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_135'})

            } else {
                Event7:

                call GetOut({'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_130'})

            }
          case 1:

            call Ganondorf({'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 2})

            if !GameSystemActor.EventQueryTalkChoice2() {

                call Gerudo({'ChoiceNumber': -1, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})

                Npc_Gerudo_002.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_09', 'MaintainPerformanceState': 0})
                Event65:

                call TrueMaskTalk()

            } else {
                goto Event7
            }
          case 2:
            Npc_Gerudo_002.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_106', 'ASName': '', 'MaintainPerformanceState': 0})
            goto Event65
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Gerudo_002_Child_First'})
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_100', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'ChoiceLabel3': 1, 'ASName': '', 'MaintainPerformanceState': 0})
        goto Event21
    }
}

void TrueMaskTalk() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_05', 'OverrideStyle': 8, 'IsOverrideStyle': True, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GerudoValley_Npc_Gerudo_002_HaveTalked'})
}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_NPC_Gerudo_002_NearPlayer'}) {
        Npc_Gerudo_002.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Gerudo_002:Near00'})
    }
}

void Talk_AfterStopped() {
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

    fork {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Gerudo_002', 'LookAtInstanceName': ''})

    }

    goto Event71
}

void ValleyStopped02_Npc_Gerudo_002_Talk() {

    call Common.AirStartUp_OnlyStopInAir()


    call FocusOnGimmick.RollingStartUp()


    call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Gerudo_002")})

    Npc_Gerudo_002.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoValley_Npc_Gerudo_002_HaveTalked'}) {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_112', 'ASName': '', 'MaintainPerformanceState': 0})
        } else {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_127', 'ASName': '', 'MaintainPerformanceState': 0})
        }
    } {

        fork {
            Npc_Gerudo_002.EventTriggerBecomeSpeaker()
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event1'}) {
            Event89:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event1', 'Value': True, 'Index': -1})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
            goto Event89
        }
    }

    Npc_Gerudo_002.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Angry_Wait'})

    call Talk_AfterStopped()

    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Player_KickOutPos', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'IsMoveAnchorFrontDir': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    } {

        call NaviEventCommon.Navi_followPlayer()

    }

}

void GetOut() {
    Npc_Gerudo_002.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
    if !Npc_Gerudo_002.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'MessageId'})
    } else {
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_128', 'MaintainPerformanceState': 0})
    }

    call TrueMaskTalk()

}

void Gerudo() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event59', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_08', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel3': 0, 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2'})
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_136', 'MaintainPerformanceState': 0})
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_104', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 0})
        } else {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_134', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event59', 'Value': True, 'Index': -1})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_08', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 0})
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 1, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_137', 'MaintainPerformanceState': 0})
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Mask_104', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 0})
        } else {
            Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_104', 'MaintainPerformanceState': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 0})
        }
    }
}

void Ganondorf() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event42', 'Index': -1}) {
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_132', 'MaintainPerformanceState': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Gerudo_002_Talk_Event42', 'Value': True, 'Index': -1})
        Npc_Gerudo_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Gerudo_002:Talk_131', 'MaintainPerformanceState': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2'})
    }
}
