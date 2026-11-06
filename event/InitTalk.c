-------- EventFlow: InitTalk --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventGossipStoneResetState', 'EventNPCTurnToObjectGreeting', 'EventAIScheduleEndTerror', 'EventPlayAS', 'EventTriggerKokiriRequestComeCloserFairy', 'EventASWaitForPlayFinished', 'EventTriggerShopItemSetModelLodManual', 'EventTriggerSetModelLodManual']
queries: ['EventQueryHasControllerSet', 'EventQueryAIScheduleIsOwnerSleeping', 'EventQueryAIScheduleIsWokeUp', 'EventQueryAIScheduleGetPosture', 'EventNPCQueryCheckTurnToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventBustShotCamera', 'EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerConversate', 'EventTriggerPlayerLookAtObject', 'EventPlayerTalk', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventTriggerPlayerRequestLookAtTheFront', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventPlayerBackMoveForTalk', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerMove', 'EventTriggerEmitDoorFailureSE', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse', 'EventQueryPlayerIsChild', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_006_Child
entrypoint: None()
actions: ['EventWaitFinishTrainingAction']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_RunningMan_Child
entrypoint: None()
actions: ['EventNPCHyliaRunningManChildTurnToObjectGreeting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_EventStarter[Sub_InitTalk_Npc(Arg_Actor)]
entrypoint: Sub_InitTalk_Npc(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent(Arg_Actor)]
entrypoint: InitTalk_OnEvent(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual', 'EventAIScheduleEndTerror', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Npc_NoSpeaker(Arg_Actor)]
entrypoint: Sub_InitTalk_Npc_NoSpeaker(Arg_Actor)
actions: ['EventAIScheduleEndTerror', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[Sub_InitFlag_Npc(Arg_Actor)]
entrypoint: Sub_InitFlag_Npc(Arg_Actor)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetModelLodManual']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_NoTalk(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_NoTalk(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Pair(Actor2)]
entrypoint: InitTalk_Pair(Actor2)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_CameraStop(Arg_Actor)]
entrypoint: InitTalk_OnEvent_CameraStop(Arg_Actor)
actions: ['EventTalk', 'EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Enemy_Scrub_Business[InitTalk_Enemy(Arg_Actor)]
entrypoint: InitTalk_Enemy(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker(Arg_Actor)]
entrypoint: Sub_InitTalk_AISchedule_Npc_NoSpeaker(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventNPCTurnToObjectGreeting', 'EventPlayAS']
queries: ['EventQueryAIScheduleIsArrived', 'EventQueryHasControllerSet']
params: None

Actor: Npc_Kokiri_Mido_Child[InitTalk_Blocker(BlockerNpc)]
entrypoint: InitTalk_Blocker(BlockerNpc)
actions: ['EventWaitFinishBlockerAction']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoPlayerEvtTalk(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoPlayerEvtTalk(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)]
entrypoint: InitTalk_OnEvent_SetTalkCamera(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker', 'EventASWaitForPlayFinished', 'EventTriggerLookAtObject', 'EventTalk', 'EventAIScheduleEndTerror']
queries: ['EventQueryCheckTerrorLevel', 'EventQueryIsPlayingSameAS']
params: None

Actor: Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)]
entrypoint: Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventPlayAS', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryAIScheduleIsArrived', 'EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_Pair_NoSpeakerNpcPlayAS(Actor2)]
entrypoint: InitTalk_Pair_NoSpeakerNpcPlayAS(Actor2)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Common_Settings(Arg_Actor)]
entrypoint: Sub_InitTalk_Common_Settings(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Trio_NoSpeakerNpcPlayAS(Actor2)]
entrypoint: InitTalk_Trio_NoSpeakerNpcPlayAS(Actor2)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Trio_NoSpeakerNpcPlayAS(Actor3)]
entrypoint: InitTalk_Trio_NoSpeakerNpcPlayAS(Actor3)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Trio_NoSpeakerNpcPlayAS(Actor1)]
entrypoint: InitTalk_Trio_NoSpeakerNpcPlayAS(Actor1)
actions: ['EventPlayAS']
queries: ['EventNPCQueryCheckTurnToTarget']
params: None

Actor: Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor2)]
entrypoint: InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor2)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor3)]
entrypoint: InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor3)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor4)]
entrypoint: InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor4)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor1)]
entrypoint: InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor1)
actions: ['EventPlayAS']
queries: ['EventNPCQueryCheckTurnToTarget']
params: None

Actor: Npc_Hylia_030_Child[InitTalk_NpcDesireMask(NpcDesireMask)]
entrypoint: InitTalk_NpcDesireMask(NpcDesireMask)
actions: ['EventNPCDesireMaskTurnToObjectGreeting']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)]
entrypoint: InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker', 'EventTriggerLookAtObject', 'EventTalk', 'EventAIScheduleEndTerror']
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Common_Settings_KokiriOnly(Arg_Actor)]
entrypoint: Sub_InitTalk_Common_Settings_KokiriOnly(Arg_Actor)
actions: ['EventTriggerKokiriRequestComeCloserFairy']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_Pair_NoSpeakerNpcPlayAS_KokiriOnly(Actor2)]
entrypoint: InitTalk_Pair_NoSpeakerNpcPlayAS_KokiriOnly(Actor2)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_Navi(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_Navi(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Common_Settings_BedSleeping(Arg_Actor)]
entrypoint: Sub_InitTalk_Common_Settings_BedSleeping(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_SkullDad[InitTalk_Npc_SkullFamily(NpcActor)]
entrypoint: InitTalk_Npc_SkullFamily(NpcActor)
actions: ['EventWaitFinishFallEnd']
queries: []
params: None

Actor: Enemy_Scrub_Business[InitTalk_Enemy_ScrubBusiness(Arg_Actor)]
entrypoint: InitTalk_Enemy_ScrubBusiness(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Npc_Hylia_Ingo_001_Child[InitTalk_Npc_Ingo(NpcActor)]
entrypoint: InitTalk_Npc_Ingo(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Npc_Deku(Arg_Actor)]
entrypoint: Sub_InitTalk_Npc_Deku(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventAIScheduleEndTerror', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)]
entrypoint: InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)
actions: ['EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Npc_Multiple(Arg_Actor)]
entrypoint: Sub_InitTalk_Npc_Multiple(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

Actor: Npc_EventStarter[Sub_InitTalk_Common_Settings_Multiple(Arg_Actor)]
entrypoint: Sub_InitTalk_Common_Settings_Multiple(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)]
entrypoint: Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)
actions: ['EventASWaitForPlayFinished', 'EventAIScheduleEndTerror']
queries: ['EventQueryCheckTerrorLevel', 'EventQueryIsPlayingSameAS']
params: None

void InitTalk() {
    if !Npc_EventStarter.EventQueryAIScheduleIsOwnerSleeping() {
        if !Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
            Event99:

            call InitTalk_NoMaskTalk({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

        } else
        if Npc_EventStarter.EventQueryAIScheduleGetPosture() in [0, 1, 2, 3] {
            goto Event99
        }
    } else {
        goto Event99
    }
}

void Sub_InitTalk_Npc() {
    Npc_EventStarter[Sub_InitTalk_Npc(Arg_Actor)].EventTriggerBecomeSpeaker()
    Event34:

    call Sub_InitFlag_Npc({'Arg_Actor': 'Arg_Actor'})

    Npc_EventStarter[Sub_InitTalk_Npc_NoSpeaker(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    Event12:
    if !Npc_EventStarter[Sub_InitTalk_Npc_Multiple(Arg_Actor)].EventQueryHasControllerSet() {
        Npc_EventStarter[Sub_InitTalk_Npc_Multiple(Arg_Actor)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
    }
}

void InitTalk_OnEvent() {

    fork {

        call PlayerTurnCheck({'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA'})

    } {

        call Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Turn': 'Arg_Turn', 'Arg_Actor': 'Arg_Actor'})

    } {

        call SetTalkCamera_DependingDistance({'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'})

    }

}

void InitTalk_Door() {

    call InitTalk_Door_Changed({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

}

void InitTalk_OnEvent_NoCamera() {
    Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)].EventTriggerBecomeSpeaker()
    Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
        Event129:
        Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})

        fork {
            Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter[InitTalk_OnEvent_NoCamera(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'FirstGreeting_MesageId', 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

        }


        call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
    goto Event129
}

void Sub_InitTalk_Npc_NoSpeaker() {
    goto Event34
}

void Sub_InitFlag_Npc() {
    Npc_EventStarter[Sub_InitFlag_Npc(Arg_Actor)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_EventStarter[Sub_InitFlag_Npc(Arg_Actor)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    Npc_EventStarter[Sub_InitFlag_Npc(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
}

void InitTalk_Book() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()
    } {

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_OnEvent_NoCamera_NoTalk() {

    fork {

        call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

    } {

        call Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Turn': 'Arg_Turn', 'Arg_Actor': 'Arg_Actor'})

    }

}

void InitTalk_Pair() {

    fork {

        call Sub_InitTalk_Common_Settings_Multiple({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker({'Arg_Actor': 'Actor2', 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'Spearker1ActorName': 'Npc_EventStarter', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'EventTalkCameraType': 2, 'Speaker1SetType': 1})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_GossipStone() {

    fork {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventGossipStoneResetState({'IsWaitEnd': True})
    } {

        call SetTalkCamera_DependingDistance({'InstanceNameA': '', 'ActorNameA': 'Npc_EventStarter'})

    } {

        call NaviEventCommon.NaviMove_Attention({'TargetInstanceName': '', 'TargetActorName': 'Npc_EventStarter', 'IsUseDisguiseSpeakerPos': False, 'TargetOffset': [0.0, 0.8299999833106995, 0.0]})

    }

}

void InitTalk_OnEvent_CameraStop() {

    call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})


    fork {
        Npc_EventStarter[InitTalk_OnEvent_CameraStop(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'MessageId': 'FirstGreeting_MesageId', 'MaintainPerformanceState': 0})
    } {
        Npc_EventStarter[InitTalk_OnEvent_CameraStop(Arg_Actor)].EventTriggerBecomeSpeaker()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': '', 'UseNormalTurn': False, 'IsDoNavi': True})
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    }

}

void InitTalk_Enemy() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    } {
        Enemy_Scrub_Business[InitTalk_Enemy(Arg_Actor)].EventTriggerBecomeSpeaker()
    } {

        call SetTalkCamera_DependingDistance({'ActorNameA': 'LookAtActorName', 'InstanceNameA': 'LookAtInstanceName'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName'})

    }

}

void Sub_InitTalk_AISchedule_Npc_NoSpeaker() {
    if Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker(Arg_Actor)].EventQueryAIScheduleIsArrived() {
        Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker(Arg_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }
    Event553:
    Npc_EventStarter[Sub_InitTalk_Npc_Multiple(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': -1})

    call Sub_NoticeEd_WaitForPlayFinished({'EndTerrorCheck': False, 'Npc_EventStarter': 'Arg_Actor'})

    Event521:

    call Sub_InitFlag_Npc({'Arg_Actor': 'Arg_Actor'})

    goto Event12
}

void InitTalk_NoMaskTalk() {

    fork {

        call Sub_InitTalk_Common_Settings({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_Animal() {
    Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {

        call SetTalkCamera()

    }

}

void InitTalk_DirectShop() {
    Npc_EventStarter.EventTriggerShopItemSetModelLodManual({'LodLevel': 0})

    call Common_Camera_Pln.CameraDoF_Default()

}

void SetTalkCamera() {

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_Npc_Kokiri_006_Child() {

    fork {
        Npc_EventStarter.EventTriggerBecomeSpeaker()
    } {
        Npc_Kokiri_006_Child.EventWaitFinishTrainingAction({'IsWaitEnd': True})
    }


    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        fork {

            call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

            Npc_EventStarter.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

        } {

            call SetTalkCamera()

        }

    }

}

void InitTalk_Blocker() {
    Npc_Kokiri_Mido_Child[InitTalk_Blocker(BlockerNpc)].EventWaitFinishBlockerAction({'IsWaitEnd': True})

    fork {
        Npc_EventStarter.EventTriggerBecomeSpeaker()
    } {

        call SetTalkCamera()

    } {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }


    call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

    Npc_EventStarter.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
    Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
}

void InitTalk_NaviPlayerSide() {

    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        call NaviEventCommon.NaviMove_PlayerHomePos({'IsLookAtPlayer': 'IsLookAtPlayer', 'IsUseDisguiseSpeakerPos': True})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void InitTalk_NaviPlayerFront_MoveWait() {

    call NaviEventCommon.NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': False})


    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'isNearCamera'}) {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
        } else {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        }
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void InitTalk_NaviPlayerSide_MoveWait() {

    call NaviEventCommon.NaviMove_PlayerHomePos({'IsLookAtPlayer': 'IsLookAtPlayer', 'IsUseDisguiseSpeakerPos': False})


    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void SetTalkCamera_DependingDistance() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'CheckDistance': 2.5999999046325684, 'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'}) {

        fork {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        }

    } else {

        fork {

            call Common_Camera_Pln.CameraDoF_Event_Normal()

        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        }

    }
}

void SetTalkCamera_DependingDistancePlusLong() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Player_Event', 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA', 'CheckDistance': 5.0}) {

        call SetTalkCamera_DependingDistance({'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'})

    } else {

        fork {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        } {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            EventCamera.EventBustShotCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 1.5], 'CameraCollisionMode': 1, 'Latitude': 0.0, 'Longitude': 0.0, 'IsWaitEnd': False, 'MoveTime': 0, 'TargetActorName': 'ActorNameA', 'TargetActorInstanceName': 'InstanceNameA', 'TargetOffset': 'TargetOffset', 'Radius': 1.2000000476837158})
        }

    }
}

void InitTalk_GossipStone_TimeZone() {

    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventGossipStoneResetState({'IsWaitEnd': True})
    } {

        call SetTalkCamera_NormalType()

    }

}

void InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly() {
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)].EventTriggerBecomeSpeaker()
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})

    fork {
        Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter[InitTalk_OnEvent_NoCamera_PlayerTriggerActionOnly(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MessageId': 'FirstGreeting_MesageId', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }


    call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

}

void InitTalk_InprisonedGoron() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': True, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {

        call Sub_InitTalk_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'Is_JailOpened'}) {

            call SetTalkCamera()

        } else {

            call Set_ImprisonedGoron_Camera()

        }
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }

}

void InitTalk_OnEvent_NoPlayerEvtTalk() {

    fork {

        call Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Turn': 'Arg_Turn', 'Arg_Actor': 'Arg_Actor'})

    } {

        call SetTalkCamera_DependingDistance({'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'})

    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void InitTalk_OnEvent_SetTalkCamera() {
    Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventTriggerBecomeSpeaker()

    call SetTalkCamera_DependingDistance({'ActorNameA': 'ActorName', 'InstanceNameA': 'InstanceName'})

    switch Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventQueryCheckTerrorLevel() {
      case 0:
        if !Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventQueryIsPlayingSameAS({'ASName': 'Notice_Ed', 'Partial': ''}) {
            Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventASWaitForPlayFinished({'ASName': 'Notice_Ed', 'IsWaitEnd': True})
        }
        Event190:

        fork {
            Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MessageId': 'FirstGreeting_MesageId', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

        }


        call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

      case [1, 2, 3, 4, 5]:
        Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
        goto Event190
    }
}

void Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS() {
    Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': -1})

    call Sub_NoticeEd_WaitForPlayFinished({'Npc_EventStarter': 'Arg_Actor', 'EndTerrorCheck': True})

    if !Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)].EventQueryAIScheduleIsArrived() {
        Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NoSpeakerNPC_PlayAS_Waiting'})
    } else {
        Npc_EventStarter[Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS(Arg_Actor)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'NoSpeakerNPC_PlayAS_OnMove'})
    }
    goto Event521
}

void InitTalk_Pair_NoSpeakerNpcPlayAS() {

    fork {
        Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Spearker1PlayAS_Waiting'})

        call Sub_InitTalk_Common_Settings_Multiple({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Actor': 'Actor2', 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker2PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker2PlayAS_Waiting'})

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'Spearker1ActorName': 'Npc_EventStarter', 'Spearker1InstanceName': '', 'EventTalkCameraType': 2, 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Speaker1SetType': 1})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void Sub_InitTalk_Common_Settings() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        call Sub_InitTalk_Npc({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Arg_Actor'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }

}

void InitTalk_Trio_NoSpeakerNpcPlayAS() {

    fork {
        if !Npc_EventStarter[InitTalk_Trio_NoSpeakerNpcPlayAS(Actor1)].EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
            Npc_EventStarter[InitTalk_Trio_NoSpeakerNpcPlayAS(Actor1)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        }

        call Sub_InitTalk_Common_Settings_Multiple({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Actor1'})

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Actor': 'Actor2', 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker2PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker2PlayAS_Waiting'})

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Actor3', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker3PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker3PlayAS_Waiting'})

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'EventTalkCameraType': 2, 'Speaker3SetType': 1, 'Speaker1SetType': 1, 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName', 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName'})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_Quatro_NoSpeakerNpcPlayAS() {

    fork {
        if !Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor1)].EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
            Npc_EventStarter[InitTalk_Quatro_NoSpeakerNpcPlayAS(Actor1)].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        }

        call Sub_InitTalk_Common_Settings_Multiple({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Actor1'})

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Actor': 'Actor2', 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker2PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker2PlayAS_Waiting'})

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Actor3', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker3PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker3PlayAS_Waiting'})

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Actor4', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker4PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker4PlayAS_Waiting'})

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker2SetType': 1, 'IsWaitEnd': False, 'EventTalkCameraType': 2, 'Speaker3SetType': 1, 'Speaker4SetType': 1, 'Speaker1SetType': 1, 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Spearker3ActorName': 'Spearker3ActorName', 'Spearker3InstanceName': 'Spearker3InstanceName', 'Spearker4ActorName': 'Spearker4ActorName', 'Spearker4InstanceName': 'Spearker4InstanceName', 'Spearker1ActorName': 'Spearker1ActorName', 'Spearker1InstanceName': 'Spearker1InstanceName'})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_NaviPlayerFront() {

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3})
        && !Player_Event.EventQueryCheckPlayerState({'State': 12})
        && !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
            }
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    } {

        call NaviEventCommon.NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': True})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void InitTalk_NpcDesireMask() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
        Npc_EventStarter.EventASWaitForPlayFinished({'ASName': 'Notice_StandUp', 'IsWaitEnd': True})
        Npc_Hylia_030_Child[InitTalk_NpcDesireMask(NpcDesireMask)].EventNPCDesireMaskTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 'Arg_Greeting', 'TurnType': 'Arg_Turn'})
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_OnEvent_SetTalkCamera_Flinch() {
    Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)].EventTriggerBecomeSpeaker()

    call SetTalkCamera_DependingDistance({'ActorNameA': 'ActorName', 'InstanceNameA': 'InstanceName'})


    fork {
        Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MessageId': 'FirstGreeting_MesageId', 'MaintainPerformanceState': 0, 'ASName': 'Act_Angry_Wait'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtFlinch', 'IsWaitEnd': True, 'ClothWarpMode': 0})

        call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

    }


    call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

    Npc_EventStarter[InitTalk_OnEvent_SetTalkCamera_Flinch(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
}

void Sub_InitTalk_Common_Settings_KokiriOnly() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        call Sub_InitTalk_Npc({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Arg_Actor'})

        if !GameDataActor.EventQueryIsBool({'BoolValue': 'NpcFairy_MovingFlag'}) {
            Npc_EventStarter[Sub_InitTalk_Common_Settings_KokiriOnly(Arg_Actor)].EventTriggerKokiriRequestComeCloserFairy()
        }
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }

}

void InitTalk_KokiriOnly() {

    fork {

        call Sub_InitTalk_Common_Settings_KokiriOnly({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'NpcFairy_MovingFlag': 'NpcFairy_MovingFlag'})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_GossipStone_NaviTalk() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'TurnFaceControlType': 3, 'Direction': 5.0, 'SlowTurn': True, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventGossipStoneResetState({'IsWaitEnd': True})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Normal()

    } {
        Npc_Navi.EventTriggerBecomeSpeaker()

        fork {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        } {

            call NaviEventCommon.NaviMove_Attention({'TargetInstanceName': '', 'TargetActorName': 'Npc_EventStarter', 'IsUseDisguiseSpeakerPos': True, 'TargetOffset': [0.0, 0.8299999833106995, 0.0]})

        }

    }

}

void InitTalk_Npc_Hylia_RunningMan_Child() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()

        call Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
        Npc_Hylia_RunningMan_Child.EventNPCHyliaRunningManChildTurnToObjectGreeting({'GreetType': 'Arg_Greeting', 'TurnType': 'Arg_Turn', 'IsWaitEnd': True})
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_Pair_NoSpeakerNpcPlayAS_KokiriOnly() {

    fork {
        if !Npc_EventStarter.EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
            Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        }

        fork {
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
        } {

            call Sub_InitTalk_Npc_Multiple({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})

            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

        }

    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Sub_InitTalk_AISchedule_Npc_NoSpeaker_PlayAS({'Arg_Actor': 'Actor2', 'Arg_Greeting': 'Arg_Greeting', 'NoSpeakerNPC_PlayAS_OnMove': 'Spearker2PlayAS_OnMove', 'NoSpeakerNPC_PlayAS_Waiting': 'Spearker2PlayAS_Waiting', 'Arg_Turn': 1})

    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'Spearker1ActorName': 'Npc_EventStarter', 'Spearker1InstanceName': '', 'EventTalkCameraType': 2, 'Spearker2ActorName': 'Spearker2ActorName', 'Spearker2InstanceName': 'Spearker2InstanceName', 'Speaker1SetType': 1})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_OnEvent_NoCamera_Navi() {

    fork {

        call InitTalk_OnEvent({'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

    }

}

void SetTalkCamera_NormalType() {

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void InitTalk_NormalCamera() {

    fork {

        call Sub_InitTalk_Common_Settings({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {

        call SetTalkCamera_NormalType()

    }

}

void InitTalk_BackMoveCounter() {

    fork {

        fork {
            Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 'OffsetDist'})
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
        } {

            call Sub_InitTalk_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

        }

    } {

        call SetTalkCamera()

    }

}

void PlayerTurnCheck() {
    if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 135.0, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'}) {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'IsDoNavi': False})
    }
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
}

void InitTalk_NaviPlayerSide_MoveWait_LookTarget() {

    call NaviEventCommon.NaviMove_PlayerHomePos_LookTarget({'IsUseDisguiseSpeakerPos': False, 'IsTurnLooking': True, 'OverwriteRotNearDist': 0.3499999940395355, 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase'})


    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': False}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void InitTalk_OnEvent_NoWaitClearTerrorr() {
    Npc_EventStarter[InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)].EventTriggerBecomeSpeaker()

    call Sub_InitFlag_Npc({'Arg_Actor': 'Arg_Actor'})

    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
        Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 10, 'WaitUntilStable': False})
        Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
        Event449:

        fork {
            Npc_EventStarter[InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MessageId': 'FirstGreeting_MesageId', 'ASName': 'ASName', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})


            call NaviEventCommon.Navi_ActorWatch({'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'Target': 3})

        }

        if !Npc_EventStarter[InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)].EventQueryHasControllerSet() {
            Npc_EventStarter[InitTalk_OnEvent_NoWaitClearTerrorr(Arg_Actor)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 3})
        }
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
    goto Event449
}

void InitTalk_OnEvent_NoCamera_Navi_ForceNormalCamera() {

    fork {

        fork {

            call PlayerTurnCheck({'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA'})

        } {

            call Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Turn': 'Arg_Turn', 'Arg_Actor': 'Arg_Actor'})

        } {

            fork {

                call Common_Camera_Pln.CameraDoF_Event_Normal()

            } {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
                GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
            }

        }

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

    }

}

void Sub_InitTalk_Common_Settings_BedSleeping() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_EventStarter', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {

        call Sub_InitTalk_Npc({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Arg_Actor'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }

}

void InitTalk_BedSleepingNpc() {

    fork {

        call Sub_InitTalk_Common_Settings_BedSleeping({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_Door_Changed() {

    fork {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'WorldPos': 'PreOpenPos', 'ApplySlowMove': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': True, 'SlowTurn': False, 'InstanceName': 'LookAtDoor', 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'WorldPos': 'LastPos', 'IsDoNavi': False})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTime': 35, 'Actor1InstanceName': 'KnockDoorPos', 'PosVector': [0.0, 1.6799999475479126, -3.7699999809265137], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTime': 35, 'Actor1InstanceName': 'KnockDoorPos', 'AtVector': [0.0, 1.3600000143051147, 0.0], 'PosVector': [0.0, 1.7200000286102295, -3.7799999713897705], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsEnableRevertFast': False})
        }
    }

    Player_Event.EventTriggerEmitDoorFailureSE()
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtDoorFailure', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
}

void InitTalk_Npc_SkullFamily() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()
        Npc_SkullDad[InitTalk_Npc_SkullFamily(NpcActor)].EventWaitFinishFallEnd({'IsWaitEnd': True})

        call Sub_InitTalk_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    } {

        call SetTalkCamera()

    }

}

void InitTalk_Enemy_ScrubBusiness() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    } {
        Enemy_Scrub_Business[InitTalk_Enemy_ScrubBusiness(Arg_Actor)].EventTriggerBecomeSpeaker()
    } {

        call SetTalkCamera_NormalType()

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName'})

    }

}

void InitTalk_Npc_Ingo() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()

        call Npc_Hylia_Ingo_001_Adult.ASandTurnCheck({'Npc_Hylia_Ingo_Actor': 'NpcActor'})


        call Sub_InitTalk_Npc({'Arg_Actor': ActorIdentifier(name="Npc_EventStarter"), 'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    } {

        call SetTalkCamera()

    }

}

void Sub_InitTalk_Npc_Deku() {
    Npc_EventStarter[Sub_InitTalk_Npc_Deku(Arg_Actor)].EventTriggerBecomeSpeaker()

    call Sub_InitFlag_Npc({'Arg_Actor': 'Arg_Actor'})

    Npc_EventStarter[Sub_InitTalk_Npc_Deku(Arg_Actor)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    if !Npc_EventStarter[Sub_InitTalk_Npc_Deku(Arg_Actor)].EventQueryHasControllerSet() {
        Npc_EventStarter[Sub_InitTalk_Npc_Deku(Arg_Actor)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 'Arg_Turn', 'GreetType': 'Arg_Greeting'})
    }
}

void InitTalk_OnEvent_NoCamera_AngryOnly() {
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)].EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter[InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)].EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter[InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter[InitTalk_OnEvent_NoCamera_AngryOnly(Arg_Actor)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'FirstGreeting_MesageId', 'EndDialogOption': 3, 'IsOverwritePartialSlotFace': False, 'OverwritePartialSlotFace': 'Face', 'IsOverwriteVoiceType': False, 'OverwriteVoiceType': 22, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': False, 'LookAtActorName': 'ActorName', 'LookAtInstanceName': 'InstanceName', 'LookAtTarget': 2})

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

        call PlayerTurnCheck({'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})

    }


    call Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 3, 'Arg_Actor': 'Arg_Actor', 'Arg_Turn': 'Arg_Turn'})

}

void Set_ImprisonedGoron_Camera() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'DestinationAnchor', 'InstanceNameA': 'isInAreaA', 'IsAnchorActorA': True, 'ActorNameB': 'Player_Event', 'CheckDistance': 5.0, 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': False}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'camPos_Imprisoned_A', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'camPos_Imprisoned_A', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'atPos_Imprisoned_A', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'camPos_Imprisoned_A', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'atPos_Imprisoned_A', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'MoveTime': 30, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'ActorInstanceName': 'camPos_Imprisoned_B', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'camPos_Imprisoned_B', 'Actor2InstanceName': 'atPos_Imprisoned_B', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'MoveTime': 30, 'Actor1InstanceName': 'camPos_Imprisoned_B', 'Actor2InstanceName': 'atPos_Imprisoned_B', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
}

void Sub_InitTalk_Npc_Multiple() {
    Npc_EventStarter[Sub_InitTalk_Npc_Multiple(Arg_Actor)].EventTriggerBecomeSpeaker()
    goto Event553
}

void Sub_InitTalk_Common_Settings_Multiple() {

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 'Arg_Greeting'})
    } {

        call Sub_InitTalk_Npc_Multiple({'Arg_Turn': 'Arg_Turn', 'Arg_Greeting': 'Arg_Greeting', 'Arg_Actor': 'Arg_Actor'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 1, 'LookAtActorName': 'Npc_EventStarter'})

    }

}

void Sub_NoticeEd_WaitForPlayFinished() {
    switch Npc_EventStarter[Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)].EventQueryCheckTerrorLevel() {
      case 0:
        if !Npc_EventStarter[Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)].EventQueryIsPlayingSameAS({'ASName': 'Notice_Ed', 'Partial': ''}) {
            Npc_EventStarter[Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)].EventASWaitForPlayFinished({'ASName': 'Notice_Ed', 'IsWaitEnd': True})
        }
      case [1, 2, 3, 4, 5]:
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'EndTerrorCheck'}) {
            Npc_EventStarter[Sub_NoticeEd_WaitForPlayFinished(Npc_EventStarter)].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': False})
        }
    }
}
