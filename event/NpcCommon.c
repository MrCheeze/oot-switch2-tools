-------- EventFlow: NpcCommon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventBustShotCamera', 'EventMoveCameraToSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerPlayOcarinaFree', 'EventDeleteShowItem', 'EventPlayerConversate', 'EventPlayerTalk', 'EventGoOffstageForUser']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitTalkCameraInterpolationEnd', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerForceSetMaskTalkFlag', 'EventPlayAS', 'EventTriggerForceSetAmiiboMaskTalkFlag', 'EventTriggerLookAtObject', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryIsOnMaskTalkFlag', 'EventQueryIsPlayingSameAS', 'EventQueryIsOnAmiiboMaskTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerIncreaseRupee']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[EmoteReset]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: ['EventQueryNaviAttentionType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter[Sub_CanbeStopped_Npc_01(Arg_Actor)]
entrypoint: Sub_CanbeStopped_Npc_01(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: None

Actor: Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)]
entrypoint: Sub_CanbeStopped_Npc_02(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: None

Actor: Npc_EventStarter[Sub_CanbeStopped_Camera(Arg_Actor)]
entrypoint: Sub_CanbeStopped_Camera(Arg_Actor)
actions: ['EventAIScheduleEndTerror']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)]
entrypoint: NpcCommon_Init_MoveTalk(NpcActor_Washa)
actions: ['EventPlayAS', 'EventNPCTurnToTargetWithAS']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

Actor: Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)]
entrypoint: NpcCommon_Init_MoveTalk(NpcActor_Kikite)
actions: ['EventNPCTurnToTarget', 'EventPlayAS']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

Actor: Npc_EventStarter[MultipleEventTalk_Pair(Kikite_Actor)]
entrypoint: MultipleEventTalk_Pair(Kikite_Actor)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[MultipleEventTalk_Pair(Washa_Actor)]
entrypoint: MultipleEventTalk_Pair(Washa_Actor)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[SuggestCamera_Start(NpcActor)]
entrypoint: SuggestCamera_Start(NpcActor)
actions: ['EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[SuggestCamera_Reset(NpcActor)]
entrypoint: SuggestCamera_Reset(NpcActor)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[Npc_IsConfront(NpcActor)]
entrypoint: Npc_IsConfront(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

Actor: Npc_EventStarter[Npc_IsConfront_WithLinkAS(NpcActor)]
entrypoint: Npc_IsConfront_WithLinkAS(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[StartTalking_DuringPlayerTurn(NpcActor)]
entrypoint: StartTalking_DuringPlayerTurn(NpcActor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)]
entrypoint: NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_ShowItem_Cancel(NpcActor)]
entrypoint: NpcCommon_HandOver_ShowItem_Cancel(NpcActor)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[SellMask(NpcActor)]
entrypoint: SellMask(NpcActor)
actions: ['EventAIScheduleReceiveAndWearMask', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc(NpcActor)]
entrypoint: NpcCommon_HandOver_PlayerToNpc(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: ['EventQueryAIScheduleGetPosture']
params: None

Actor: Npc_EventStarter[SuggestCamera_Start_NPCLookOnly(NpcActor)]
entrypoint: SuggestCamera_Start_NPCLookOnly(NpcActor)
actions: ['EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[SuggestCamera_Reset_NPCLookOnly(NpcActor)]
entrypoint: SuggestCamera_Reset_NPCLookOnly(NpcActor)
actions: ['EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_EmptyBottle(NpcActor)]
entrypoint: NpcCommon_HandOver_NpcToPlayer_EmptyBottle(NpcActor)
actions: ['EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[SuggestCamera_Start_90(NpcActor)]
entrypoint: SuggestCamera_Start_90(NpcActor)
actions: ['EventTriggerChangeEmotion', 'EventNPCSwitchTemporarilyLookIKVariationStart', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc_NoTurn(NpcActor)]
entrypoint: NpcCommon_HandOver_PlayerToNpc_NoTurn(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[SuggestCamera_Reset_MaintainAngle(NpcActor)]
entrypoint: SuggestCamera_Reset_MaintainAngle(NpcActor)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_FishingOnly(NpcActor)]
entrypoint: NpcCommon_HandOver_NpcToPlayer_FishingOnly(NpcActor)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_DisplayGet_NoDisplay(NpcActor)]
entrypoint: NpcCommon_HandOver_NpcToPlayer_DisplayGet_NoDisplay(NpcActor)
actions: ['EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS(NpcActor)]
entrypoint: NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[SellMask_1(NpcActor)]
entrypoint: SellMask_1(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Obj_Heart_Piece[DisplayItemSet(DisplayItemActor)]
entrypoint: DisplayItemSet(DisplayItemActor)
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_Receive_PlayerToNpc(NpcActor)]
entrypoint: NpcCommon_Receive_PlayerToNpc(NpcActor)
actions: ['EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)]
entrypoint: NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[SellMask_SkullKidOnly(NpcActor)]
entrypoint: SellMask_SkullKidOnly(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_NoDisplay(NpcActor)]
entrypoint: NpcCommon_HandOver_NpcToPlayer_NoDisplay(NpcActor)
actions: ['EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[Mask_Truth_NotTalkMonolog_Pair(Kikite_Actor)]
entrypoint: Mask_Truth_NotTalkMonolog_Pair(Kikite_Actor)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[Mask_Truth_NotTalkMonolog_Pair(Washa_Actor)]
entrypoint: Mask_Truth_NotTalkMonolog_Pair(Washa_Actor)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[NpcCommon_PlayerEvtTalking_NpcWait(Npc_ActorName)]
entrypoint: NpcCommon_PlayerEvtTalking_NpcWait(Npc_ActorName)
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[Npc_IsConfront_WithLinkAS_ForReceive(NpcActor)]
entrypoint: Npc_IsConfront_WithLinkAS_ForReceive(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Npc_IsConfront_ForReceive(NpcActor)]
entrypoint: Npc_IsConfront_ForReceive(NpcActor)
actions: ['EventTriggerLookAtObject', 'EventNPCTurnToTarget']
queries: ['EventNPCQueryCheckFrontToTarget']
params: None

Actor: Npc_EventStarter[NpcCommon_HandOver_ShowItem_Cancel_ChangeAS(NpcActor)]
entrypoint: NpcCommon_HandOver_ShowItem_Cancel_ChangeAS(NpcActor)
actions: ['EventTalk']
queries: []
params: None

void Sub_CanbeStopped_Npc_01() {

    call InitTalk.InitTalk_OnEvent_NoCamera_AngryOnly({'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 4, 'FirstGreeting_MesageId': 'FirstGreeting_MesageId', 'ActorName': 'ActorNameB', 'InstanceName': 'InstanceNameB'})

    Npc_EventStarter[Sub_CanbeStopped_Npc_01(Arg_Actor)].EventTriggerBecomeSpeaker()

    call Sub_CanbeStopped_Camera({'ActorNameB': 'ActorNameB', 'InstanceNameB': 'InstanceNameB', 'Arg_Actor': 'Arg_Actor'})

    Npc_EventStarter[Sub_CanbeStopped_Npc_01(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'SecondMessageId', 'MaintainPerformanceState': 0})
    Event98:
    Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)].EventDisableRecentTalkFlag({'IsWaitEnd': True})
    if Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)].EventQueryHaveTalked() {
        Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': True})
    }
}

void Sub_CanbeStopped_Npc_02() {

    call InitTalk.InitTalk_OnEvent_NoCamera_AngryOnly({'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 4, 'FirstGreeting_MesageId': 'FirstGreeting_MesageId', 'ActorName': 'ActorNameB', 'InstanceName': 'InstanceNameB'})

    Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)].EventTriggerBecomeSpeaker()

    call Sub_CanbeStopped_Camera({'ActorNameB': 'ActorNameB', 'InstanceNameB': 'InstanceNameB', 'Arg_Actor': 'Arg_Actor'})

    Npc_EventStarter[Sub_CanbeStopped_Npc_02(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'SecondMessageId', 'MaintainPerformanceState': 0})
    goto Event98
}

void Sub_CanbeStopped_Camera() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'ActorNameB', 'InstanceNameB': 'InstanceNameB', 'InstanceNameA': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': False}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': 'InstanceNameB', 'ActorName': 'ActorNameB', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 2, 'Vector': [0.0, 1.5, 0.0]}) {
            Event392:

            fork {
                EventCamera.EventBustShotCamera({'Latitude': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Longitude': 5.0, 'TargetActorName': 'ActorNameB', 'TargetActorInstanceName': 'InstanceNameB', 'IsWaitEnd': True, 'Radius': 1.2000000476837158, 'MoveTime': 0, 'TargetOffset': [0.0, -0.30000001192092896, 1.0]})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            } {
                Npc_EventStarter[Sub_CanbeStopped_Camera(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
            }

        } else {

            fork {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
                GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
            } {
                Npc_EventStarter[Sub_CanbeStopped_Camera(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
            }

        }
    } else {
        goto Event392
    }
}

void NpcCommon_Init_MoveTalk() {
    if !Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)].EventNPCQueryCheckFrontToTarget({'AngleThreshold': 15.0, 'Target': 3, 'InstanceName': '', 'ActorName': 'NpcActor_KikiteFileName'}) {
        if Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventNPCQueryCheckFrontToTarget({'Target': 3, 'AngleThreshold': 15.0, 'InstanceName': '', 'ActorName': 'NpcActor_WashaFileName'}) {

            fork {
                Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventNPCTurnToTarget({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True, 'ActorName': 'NpcActor_WashaName'})
            } {
                Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NpcActor_WashaASName'})
            }

        }
    } else
    if !Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventNPCQueryCheckFrontToTarget({'Target': 3, 'AngleThreshold': 15.0, 'InstanceName': '', 'ActorName': 'NpcActor_WashaFileName'}) {

        fork {
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NpcActor_KikiteASName'})
        } {
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)].EventNPCTurnToTargetWithAS({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': True, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'ASName': 'TalkTurn', 'ActorName': 'NpcActor_KikiteName'})
        }

    } else {

        fork {
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventNPCTurnToTarget({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True, 'ActorName': 'NpcActor_WashaName'})
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Kikite)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NpcActor_KikiteASName'})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        } {
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)].EventNPCTurnToTargetWithAS({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': True, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'ASName': 'TalkTurn', 'ActorName': 'NpcActor_KikiteName'})
            Npc_EventStarter[NpcCommon_Init_MoveTalk(NpcActor_Washa)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NpcActor_WashaASName'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }

    }
}

void Mask_Talk_Common() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Event36:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
      case 0x1d1a8ede:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': 'TalkMonolog', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event36
    }
}

void MultipleEventTalk_Pair() {

    fork {
        Npc_EventStarter[MultipleEventTalk_Pair(Kikite_Actor)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Kikite_ASName', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_EventStarter[MultipleEventTalk_Pair(Washa_Actor)].EventTalk({'MessageId': 'Washa_MessageId', 'ASName': 'Washa_ASName', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    }

}

void SuggestCamera_Start() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter[SuggestCamera_Start(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter[SuggestCamera_Start(NpcActor)].EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        Npc_EventStarter[SuggestCamera_Start(NpcActor)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {

            call NaviEventCommon.Navi_ActorWatch({'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'Target': 'TurnTarget'})

        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'AtVector': 'CameraAtVector', 'CameraCollisionMode': 1, 'MoveTotargetPosType': 'MoveTotargetPosType', 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    }

}

void SuggestCamera_Reset() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }


    fork {
        Npc_EventStarter[SuggestCamera_Reset(NpcActor)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'Target': 3, 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    }

}

void Npc_IsConfront() {
    if !Npc_EventStarter[Npc_IsConfront(NpcActor)].EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 60.0}) {
        Npc_EventStarter[Npc_IsConfront(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        Npc_EventStarter[Npc_IsConfront(NpcActor)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
}

void Npc_IsConfront_WithLinkAS() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'LinkAS', 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call Npc_IsConfront({'NpcActor': 'NpcActor'})

    }

}

void Mask_Talk_Common_NoChangeTheTopic() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Event60:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 0x1d1a8ede:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event60
    }
}

void StartTalking_DuringPlayerTurn() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        Npc_EventStarter[StartTalking_DuringPlayerTurn(NpcActor)].EventTriggerBecomeSpeaker()
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_EventStarter[StartTalking_DuringPlayerTurn(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'NpcMessageID', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
        } {

            call NaviEventCommon.Navi_followPlayer()

        }

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

}

void NpcCommon_PlayOcarina_BeginningTalk() {
    Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)].EventTriggerBecomeSpeaker()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()

    fork {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
    } {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    }


    fork {

        call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

    } {
        if Npc_Navi.EventQueryNaviAttentionType() in [1, 2, 3] {
            Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsWaitEnd': False, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False, 'IsOffCenterCamera': True, 'PassThrough': 0.5, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False})
        }
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtPlayer'}) {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_PlayOcarina_IsReactedFlag'}) {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId_IsSecond', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'ASName'})
    } else {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId_IsFirst', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'ASName': 'ASName'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_PlayOcarina_IsReactedFlag'})
    }
}

void NpcCommon_HandOver_ShowItem_Cancel() {

    fork {
        Npc_EventStarter[NpcCommon_HandOver_ShowItem_Cancel(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': True, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtGet', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    }

}

void ShowItem_Sell() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': True, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'NpcReceiveASName', 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'NpcReceiveAnimeFrames'})
        Npc_EventStarter.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MessageId': 'MessageId', 'ASName': '', 'MaintainPerformanceState': 0})
    }

}

void ShowItem_Cancel() {

    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': True, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtGet', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'MessageId': 'MessageId', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    }

}

void SellMask() {

    fork {
        Npc_EventStarter[SellMask(NpcActor)].EventAIScheduleReceiveAndWearMask({'ASName': 'Act_Mask', 'IsWaitEnd': True})
        Npc_EventStarter[SellMask(NpcActor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 'Frames'})
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'ReceiveItem', 'IsGetEvent': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_EventStarter[SellMask(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter[SellMask(NpcActor)].EventTriggerRequestLookAtTheFront()
    }

}

void NpcCommon_HandOver_PlayerToNpc() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 110, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        switch Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc(NpcActor)].EventQueryAIScheduleGetPosture() {
          case 0:

            call Npc_IsConfront({'NpcActor': 'NpcActor'})

          case [1, 2, 3]:
            Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
    }


    fork {
        Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc(NpcActor)].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'NpcReceiveASName'})
    } {
        PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'PaidRupee'})
    }

}

void Mask_Talk_Common_With_InitTalk_NoChangeTheTopic() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        Event63:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Event247:
        return 0x5b3dff05
      case 0xc86bca21:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event247
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Event185:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0x469157c2
    }
}

void Mask_Talk_Common_With_InitTalk() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        Event4:

        call Sub_Mask_Talk_OtherTruthMask_Message({'ASName': '', 'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
        Event248:
        return 0xf7b0eeb8
      case 0xc86bca21:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Event627:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Event107:
        return 0xfab0f371
    }
}

void Truth_MaskOnly_Talk_Common_With_InitTalk() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0, 0xc86bca21]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        return 0x1e48e851
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0x1b48e398
    }
}

void SuggestCamera_Start_NPCLookOnly() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter[SuggestCamera_Start_NPCLookOnly(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter[SuggestCamera_Start_NPCLookOnly(NpcActor)].EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        Npc_EventStarter[SuggestCamera_Start_NPCLookOnly(NpcActor)].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {

            call NaviEventCommon.Navi_ActorWatch({'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})

        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'AtVector': 'CameraAtVector', 'MoveTotargetPosType': 'MoveTotargetPosType', 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    }

}

void SuggestCamera_Reset_NPCLookOnly() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    Npc_EventStarter[SuggestCamera_Reset_NPCLookOnly(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    fork {
        Npc_EventStarter[SuggestCamera_Reset_NPCLookOnly(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'Target': 3, 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    }

}

void NpcCommon_HandOver_NpcToPlayer_EmptyBottle() {

    fork {

        call Dm_SY_GetInEvent.GetInEventInBottle_FindOutCucco({'ActorName': 'ReceiveItem', 'BottleItem': 'Item', 'NPCActorName': 'NPCActorName'})

    } {
        GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_EmptyBottle(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void Mask_Talk_Common_With_InitTalk_NotTalkMonolog() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})


        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
        Event318:
        return 0xf7b0eeb8
      case 0xc86bca21:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event318
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'Mask_Truth_Talk', 'NotPlayLipSyncAnim': True, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0xfab0f371
    }
}

void Mask_Talk_Common_NotTalkMonolog() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Event338:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
      case 0x1d1a8ede:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'Mask_Truth_Talk', 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event338
    }
}

void SuggestCamera_Start_90() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter[SuggestCamera_Start_90(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 'EmotionType', 'IsActFaceOnly': 'IsActFaceOnly'})
    Npc_EventStarter[SuggestCamera_Start_90(NpcActor)].EventNPCSwitchTemporarilyLookIKVariationStart({'IsWaitEnd': True})

    fork {
        Npc_EventStarter[SuggestCamera_Start_90(NpcActor)].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 'TurnTarget', 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {

            call NaviEventCommon.Navi_ActorWatch({'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'Target': 'TurnTarget'})

        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'CameraTargetActorName', 'Actor1InstanceName': 'CameraTargetInstanceName', 'AtVector': 'CameraAtVector', 'MoveTotargetPosType': 'MoveTotargetPosType', 'MoveTime': 90, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    }

}

void Mask_Talk_Common_NoTopicNoTalkMonolog() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Event414:
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 0x1d1a8ede:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event414
    }
}

void NpcCommon_HandOver_PlayerToNpc_NoTurn() {
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc_NoTurn(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 'BeforeReceiveFrames'})
        Npc_EventStarter[NpcCommon_HandOver_PlayerToNpc_NoTurn(NpcActor)].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'NpcReceiveASName'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'PaidRupee'})
    }

}

void SuggestCamera_Reset_MaintainAngle() {
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})

    fork {
        Npc_EventStarter[SuggestCamera_Reset_MaintainAngle(NpcActor)].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': False, 'Target': 3, 'SlowTurn': False, 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName', 'UseNormalTurn': False, 'IsDoNavi': False})
        } {

            call NaviEventCommon.Navi_ActorWatch({'Target': 3, 'ActorName': 'TurnTargetActorName', 'InstanceName': 'TurnTargetInstanceName'})

        }

    }

}

void NpcCommon_HandOver_NpcToPlayer_FishingOnly() {

    fork {

        call Dm_SY_GetInEvent.GetInEvent_FishingRod({'ActorName': 'ReceiveItem'})

    } {
        GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_FishingOnly(NpcActor)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void NpcCommon_HandOver_NpcToPlayer_DisplayGet_NoDisplay() {

    fork {

        call Dm_SY_GetInEvent.GetInEvent_NotTurn_DisplayGet({'Target': 3, 'ActorName': 'ReceiveItem', 'Npc_EventStarter': 'NpcActor', 'ASName': 'ASName', 'NpcActorName': 'NpcActorName', 'NpcInstanceName': 'NpcInstanceName'})

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_DisplayGet_NoDisplay(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void Mask_Talk_Common_NoChangeTheTopic_NotTalkMonolog() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': ''})

        Event460:
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 0x1d1a8ede:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        goto Event460
    }
}

void NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS() {
    Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitingAnimeFrames'})
    } {
        Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_NoTurn_NoWaitAS(NpcActor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'NpcShowItemASName', 'IsWaitEnd': False})
    }


    call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ActorName': 'ReceiveItem', 'ASName': 'ASName', 'Npc_EventStarter': 'NpcActor', 'Target': 3, 'NpcActorName': 'NpcActorName', 'NpcInstanceName': 'NpcInstanceName'})

}

void NpcCommon_PlayerTalk_WaitFrame() {
    EventSystemActor[0].EventWait({'Frames': 'Frames', 'IsWaitEnd': True})
    Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
}

void SellMask_1() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }


    fork {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    Npc_EventStarter[SellMask_1(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_EventStarter[SellMask_1(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
}

void Truth_MaskOnly_Talk_Common_NoInitTalk() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0, 0xc86bca21]:
        return 0x1e48e851
      case 0x1d1a8ede:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0x1b48e398
    }
}

void Mask_Truth() {
    if Npc_EventStarter.EventQueryIsOnMaskTalkFlag()
    && !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void Sub_Mask_Talk_OtherTruthMask_Message() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Keaton_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        Event27:
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Skull_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Spooky_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Bunny_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Goron_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Zora_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Gerudo_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event27
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Amiibo00_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        Event59:
        Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Amiibo01_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event59
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'Mask_Amiibo02_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event59
    }
}

void Mask_Talk_Common_With_InitTalk_KokiriOnly() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        goto Event4
      case 0xc86bca21:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 0, 'NpcFairy_MovingFlag': False})

        goto Event627
    }
}

void Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk', 'NpcFairy_MovingFlag': True})

        goto Event63
      case 0xc86bca21:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk', 'NpcFairy_MovingFlag': True})

        goto Event247
      case 0x1d1a8ede:

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 0, 'NpcFairy_MovingFlag': False})

        goto Event185
    }
}

void Mask_Talk_Common_With_InitTalk_SettingAllAS() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})


        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': 'ASName'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'MaintainPerformanceState': 0})
        goto Event248
      case 0xc86bca21:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Event208:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'Mask_Truth_Talk', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        goto Event107
    }
}

void CheckEquipmentMask() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        Event130:
        if !Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
            Event228:
            return 0xc86bca21
        } else {
            return 0xdf3ee64f
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
        goto Event130
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        if !Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
            goto Event228
        } else {
            return 0x1d1a8ede
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Event212:
        if !Npc_EventStarter.EventQueryIsOnAmiiboMaskTalkFlag() {
            goto Event228
        } else {
            return 0x6deb45c0
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        goto Event212
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        goto Event212
    } else {
        goto Event228
    }
}

void CheckAlreadyMaskTalked() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Keaton', 'ArmorSlot': 0}) {
        Event241:
        if !Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
            Event233:
            return 0x2fe33985
        } else {
            Event231:
            return 0x4deaea8c
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Skull'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Spooky'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Zora'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Gerudo'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        goto Event241
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
        Event242:
        if !Npc_EventStarter.EventQueryIsOnAmiiboMaskTalkFlag() {
            goto Event233
        } else {
            goto Event231
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
        goto Event242
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        goto Event242
    } else {
        goto Event231
    }
}

void MaskTalkGoron() {
    switchcall CheckEquipmentMask() {
      case 0xdf3ee64f:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 3})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Goron'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId06', 'MaintainPerformanceState': 0})
            Event305:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId09', 'MaintainPerformanceState': 0})
            Event230:
            Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
            Event326:
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId103', 'MaintainPerformanceState': 0})
            goto Event305
        }
      case 0x6deb45c0:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 3})
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId101', 'MaintainPerformanceState': 0})
            Event307:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId09', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
            goto Event326
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo0'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId102', 'MaintainPerformanceState': 0})
            goto Event307
        } else
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId103', 'MaintainPerformanceState': 0})
            goto Event307
        }
      case 0xc86bca21:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 3})
      case 0x1d1a8ede:
        if !Npc_EventStarter.EventQueryIsPlayingSameAS({'Partial': '', 'ASName': 'ASName'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'MessageId05', 'NotPlayLipSyncAnim': True, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'ASName': 'TalkMonolog', 'MessageId': 'MessageId05', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 3})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'ASName': '', 'MessageId': 'MessageId10', 'MaintainPerformanceState': 0})
        goto Event230
    }
}

void Mask_Truth_NotTalkMonolog() {
    if Npc_EventStarter.EventQueryIsOnMaskTalkFlag()
    && !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void Truth_MaskOnly_Talk_Common_With_InitTalk_TalkMonologOverwriteAS() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0, 0xc86bca21]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        return 0x1e48e851
      case 0x1d1a8ede:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'NotPlayLipSyncAnim': True, 'MessageId': 'Mask_Truth_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        return 0x1b48e398
    }
}

void Mask_Talk_Npc_Hylia_RunningMan_Child_With_InitTalk_SettingAllAS() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_Npc_Hylia_RunningMan_Child({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})


        call Sub_Mask_Talk_OtherTruthMask_Message({'Mask_Keaton_Talk': 'Mask_Keaton_Talk', 'Mask_Skull_Talk': 'Mask_Skull_Talk', 'Mask_Spooky_Talk': 'Mask_Spooky_Talk', 'Mask_Bunny_Talk': 'Mask_Bunny_Talk', 'Mask_Goron_Talk': 'Mask_Goron_Talk', 'Mask_Zora_Talk': 'Mask_Zora_Talk', 'Mask_Gerudo_Talk': 'Mask_Gerudo_Talk', 'Mask_Amiibo00_Talk': 'Mask_Amiibo00_Talk', 'Mask_Amiibo01_Talk': 'Mask_Amiibo01_Talk', 'Mask_Amiibo02_Talk': 'Mask_Amiibo02_Talk', 'ASName': 'ASName'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChangeMstxtForActor': False, 'MessageId': 'ChangeTheTopic_Talk', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        goto Event248
      case 0xc86bca21:

        call InitTalk.InitTalk_Npc_Hylia_RunningMan_Child({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk_Npc_Hylia_RunningMan_Child({'Arg_Greeting': 4, 'Arg_Turn': 0})

        goto Event208
    }
}

void DisplayItemSet() {
    Obj_Heart_Piece[DisplayItemSet(DisplayItemActor)].EventTriggerParticipateEvent()
    Obj_Heart_Piece[DisplayItemSet(DisplayItemActor)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_NormalCamera() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_NormalCamera({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        goto Event63
      case 0xc86bca21:

        call InitTalk.InitTalk_NormalCamera({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event247
      case 0x1d1a8ede:

        call InitTalk.InitTalk_NormalCamera({'Arg_Greeting': 4, 'Arg_Turn': 0})

        goto Event185
    }
}

void NpcCommon_Receive_PlayerToNpc() {
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': False}) {

            call Npc_IsConfront({'NpcActor': 'NpcActor'})

        } else {
            Npc_EventStarter[NpcCommon_Receive_PlayerToNpc(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        }
        GameSystemActor[1].EventWait({'Frames': 'BeforeReceiveFrames', 'IsWaitEnd': True})
        Npc_EventStarter[NpcCommon_Receive_PlayerToNpc(NpcActor)].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'NpcReceiveASName'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'PaidRupee'})
    }

}

void Mask_Talk_Common_With_InitTalk_Kokiri_006_Only() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        goto Event4
      case 0xc86bca21:

        call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk_Npc_Kokiri_006_Child({'Arg_Greeting': 4, 'Arg_Turn': 0})

        goto Event627
    }
}

void NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly() {
    Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)].EventTriggerBecomeSpeaker()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()

    fork {
        if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'ActorName': 'Npc_SkullKid_Child', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 5.0}) {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_SkullKid_Child', 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        }
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 60, 'PosVector': [-25.170000076293945, 101.05999755859375, 2.069999933242798], 'AtVector': [-31.010000228881836, 102.22000122070312, -0.14000000059604645], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    } {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    }


    fork {

        call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_SkullKid_Child', 'LookAtInstanceName': ''})

    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtPlayer'}) {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_PlayOcarina_IsReactedFlag'}) {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'MessageId_IsSecond', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter[NpcCommon_PlayOcarina_BeginningTalk_SkullKidOnly(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'MessageId_IsFirst', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_PlayOcarina_IsReactedFlag'})
    }
}

void SellMask_SkullKidOnly() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'ClothWarpMode': 0})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    Npc_EventStarter[SellMask_SkullKidOnly(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_EventStarter[SellMask_SkullKidOnly(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
}

void NpcCommon_HandOver_NpcToPlayer_NoDisplay() {

    fork {

        call Dm_SY_GetInEvent.GetInEvent_NotTurn({'Target': 3, 'ActorName': 'ReveiveItem', 'ASName': 'ASName', 'Npc_EventStarter': 'NpcActor', 'NpcActorName': 'NpcActorName', 'NpcInstanceName': 'NpcInstanceName'})

    } {
        EventSystemActor[EmoteReset].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_EventStarter[NpcCommon_HandOver_NpcToPlayer_NoDisplay(NpcActor)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

}

void ShowItem_Close() {
    Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': True, 'ChangeVisibleOffWithRequestDelete': False})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtGet', 'KeepOneTimeAnm': False, 'IsWaitEnd': True, 'ClothWarpMode': 0})
}

void Mask_Truth_NotTalkMonolog_Pair() {
    if Npc_EventStarter.EventQueryIsOnMaskTalkFlag()
    && !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'}) {

        fork {
            Npc_EventStarter[Mask_Truth_NotTalkMonolog_Pair(Kikite_Actor)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Kikite_ASName'})
        } {
            Npc_EventStarter[Mask_Truth_NotTalkMonolog_Pair(Washa_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'NotPlayLipSyncAnim': True, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'Washa_ASName', 'MessageId': 'Washa_MessageId'})
        }

        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void NpcCommon_PlayerEvtTalking_NpcWait() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'KeepOneTimeAnm': False, 'IsWaitEnd': 'Player_IsWaitEnd', 'ASCommand': 'Player_AS'})
    } {
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_EventStarter[NpcCommon_PlayerEvtTalking_NpcWait(Npc_ActorName)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_EventStarter[NpcCommon_PlayerEvtTalking_NpcWait(Npc_ActorName)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Normal_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void Mask_Talk_Common_With_InitTalk_Ingo_Only() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call InitTalk.InitTalk_Npc_Ingo({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

        goto Event4
      case 0xc86bca21:

        call InitTalk.InitTalk_Npc_Ingo({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

        goto Event248
      case 0x1d1a8ede:

        call InitTalk.InitTalk_Npc_Ingo({'Arg_Greeting': 4, 'Arg_Turn': 0, 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

        goto Event627
    }
}

void Npc_IsConfront_WithLinkAS_ForReceive() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'LinkAS'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call Npc_IsConfront_ForReceive({'NpcActor': 'NpcActor'})

    }

}

void Npc_IsConfront_ForReceive() {
    if !Npc_EventStarter[Npc_IsConfront_ForReceive(NpcActor)].EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 15.0}) {
        Npc_EventStarter[Npc_IsConfront_ForReceive(NpcActor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        Npc_EventStarter[Npc_IsConfront_ForReceive(NpcActor)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
}

void NpcCommon_HandOver_ShowItem_Cancel_ChangeAS() {

    fork {
        Npc_EventStarter[NpcCommon_HandOver_ShowItem_Cancel_ChangeAS(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'MessageId', 'ASName': 'ASName'})
    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': True, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtGet', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    }

}

void Mask_Talk_Common_With_InitTalk_Kokiri_006_Adult_Only() {
    switchcall CheckEquipmentMask() {
      case [0xdf3ee64f, 0x6deb45c0]:

        call Npc_Kokiri_006_Adult.InitTalk_Npc_Kokiri_006_Adult({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_MaskTalk'})

        goto Event4
      case 0xc86bca21:

        call Npc_Kokiri_006_Adult.InitTalk_Npc_Kokiri_006_Adult({'Arg_Greeting': 4, 'Arg_Turn': 'Arg_Turn_For_IgnoreMaskTalk'})

        goto Event248
      case 0x1d1a8ede:

        call Npc_Kokiri_006_Adult.InitTalk_Npc_Kokiri_006_Adult({'Arg_Greeting': 4, 'Arg_Turn': 0})

        goto Event627
    }
}
