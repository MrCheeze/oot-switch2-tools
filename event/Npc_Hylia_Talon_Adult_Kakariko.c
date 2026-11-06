-------- EventFlow: Npc_Hylia_Talon_Adult_Kakariko --------

Actor: Npc_Hylia_Talon_Adult_Kakariko
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleSimpleGetUp', 'EventTriggerAIScheduleSelectSchedule', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventShowItemPlayAS']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerForceSetMaskTalkFlag']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnMaskTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Item_PocketCucco
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
        Event12:
        if !Npc_Hylia_Talon_Adult_Kakariko.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_02', 'MaintainPerformanceState': 0})
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_05_02', 'ASName': '', 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
    } else
    goto Event12
}

void Near() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_Talon_Adult_Kakariko.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Near_01', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_Hylia_Talon_Adult_Kakariko.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Near_03'})
    }
}

void Npc_Hylia_Talon_Adult_ShowPocketCucco() {

    call SubEvent_GetSwordBigGoron.InitTalk_OnEvent_ShowItemOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'ActorNameA': 'Npc_Hylia_Talon_Adult_Kakariko', 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Talon_Adult_Kakariko"), 'CameraType': True})

    Player_Event.EventTriggerParticipateEvent()

    fork {

        call ShowItem.ShowItemSuccess_NoCamera({'AssignableItem': 35})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Hylia_Talon_Adult_Kakariko'})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult', 'Index': -1}) {
        Player_Event.EventShowItemPlayAS({'ASCommand': 'Use', 'IsWaitEnd': True})
        Item_PocketCucco.EventTriggerEmitXLink({'SLinkKey': 'Crowing', 'ELinkKey': ''})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_101', 'MaintainPerformanceState': 0, 'EndDialogOption': 3, 'IsCloseDialog': False})

        call NpcCommon.ShowItem_Close()

    } else {
        Player_Event.EventShowItemPlayAS({'ASCommand': 'Use', 'IsWaitEnd': True})
        Item_PocketCucco.EventTriggerEmitXLink({'SLinkKey': 'Crowing', 'ELinkKey': ''})
        GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

        fork {

            call NpcCommon.ShowItem_Close()

            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk'})
        } {
            Npc_Hylia_Talon_Adult_Kakariko.EventAIScheduleSimpleGetUp({'IsWaitEnd': True, 'IsChangeMotionType': True, 'IsChangeMoveState': True})

            fork {

                call Common_Camera_Pln.CameraDoF_Default()

            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-44.58000183105469, 99.30999755859375, 28.479999542236328], 'AtVector': [-44.560001373291016, 99.22000122070312, 28.059999465942383], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
            }

            Npc_Hylia_Talon_Adult_Kakariko.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 7, 'FadeTime': 0.0})
            Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_100', 'ASName': 'Wakeup', 'MaintainPerformanceState': 0})
            Npc_Hylia_Talon_Adult_Kakariko.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 7, 'FadeTime': 0.0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01'})
            Npc_Hylia_Talon_Adult_Kakariko.EventTriggerAIScheduleSelectSchedule()
        }

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 47})
    }
}

void KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_Epona_IsCompleted_Exp'}) {

        call SubEvent_GetSwordBigGoron_LeaveKakariko()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Talon_Adult_Kakariko_KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk_Event4', 'Index': -1}) {
        if !Npc_Hylia_Talon_Adult_Kakariko.EventQueryIsOnRecentTalkFlag() {

            call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_08', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_103'})

            Event33:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Talon_HaveTalked_aboutLonLonRanch'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Talon_HaveTalked_RemindLonLonRanch'}) {
                    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_108', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_107', 'MaintainPerformanceState': 0})
                    }
                } else
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_115', 'ChoiceLabel1': 2, 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_113', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'MaintainPerformanceState': 0})
                }
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_105', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'KakarikoVillage_Talon_HaveTalked_RemindLonLonRanch'})
                } else {
                    Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_114', 'MaintainPerformanceState': 0})
                }
            } else
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_115', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_113', 'MaintainPerformanceState': 0})
            }
            Event38:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_105', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'KakarikoVillage_Talon_HaveTalked_aboutLonLonRanch'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'KakarikoVillage_Talon_HaveTalked_RemindLonLonRanch'})
                Event32:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01_01'})
            } else {
                Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_104', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                goto Event32
            }
        } else {
            Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_109', 'MaintainPerformanceState': 0})

            call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_08', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_103'})

            Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_116', 'MaintainPerformanceState': 0})
            goto Event33
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Talon_Adult_Kakariko_KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk_Event4', 'Value': True, 'Index': -1})

        call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_08', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Mask_103'})

        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_103', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_106', 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        goto Event38
    }
}

void KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Talon_Adult_Kakariko_KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk_Event4', 'Index': -1}) {
        Npc_Hylia_Talon_Adult_Kakariko.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Near_02'})
    }
}

void SubEvent_GetSwordBigGoron_LeaveKakariko() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Talon_Adult_Kakariko_KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk_Event4', 'Index': -1}) {
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_112', 'MaintainPerformanceState': 0})
        Event6:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'ClothWarpMode': 0})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_102', 'MaintainPerformanceState': 0})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': False, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_111', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_LeaveKakariko_Npc_Hylia_Talon_Adult', 'Index': -1, 'Value': True})
        Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'WorldPos': [-51.902000427246094, 97.85099792480469, 33.6879997253418], 'IsDoNavi': True})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [-51.902000427246094, 97.85099792480469, 33.6879997253418], 'Target': 0, 'ActorName': '', 'InstanceName': ''})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step02'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Talon_Adult_Kakariko_KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult_Talk_Event4', 'Value': True, 'Index': -1})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_103', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Adult_Kakariko.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Adult_Kakariko:Talk_110', 'MaintainPerformanceState': 0})
        goto Event6
    }
}

void SunSong_Talon_TurnOverInBed() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_CrowedCucco_Npc_Hylia_Talon_Adult', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Talon_TurnOverInBed_SunSong', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Talon_TurnOverInBed_SunSong', 'Value': False, 'Index': -1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Talon_TurnOverInBed_SunSong', 'Index': -1, 'Value': True})
        }
    }
}
