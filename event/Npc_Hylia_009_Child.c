-------- EventFlow: Npc_Hylia_009_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerLookAtObject']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryCheckIsGet']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventWaitTalkCameraInterpolationEnd', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_009_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayOcarinaFree', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviLookAtObject', 'EventTriggerSetModelAlpha']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Hylia_051_Child
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_002
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_010_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Kakariko_Windmill_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventActorWindmillRotate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Kakariko_Door_A_02
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_009_Child_IsStormSongPlayed'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Near_01'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Npc_Hylia_009_SoonAfterStormSong'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_009_Child_AfterStormFirstTalk'}) {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_54', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_51', 'MaintainPerformanceState': 0})
            }
            Event59:
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_53', 'ASName': 'Act_Windmill_Gazefar', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_50', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_52', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_009_Child_AfterStormFirstTalk'})
            goto Event59
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Kakariko_0050', 'Index': -1}) {
        if !Npc_Hylia_009_Child.EventQueryIsOnRecentTalkFlag() {
            Event121:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_58', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_59', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_29', 'MaintainPerformanceState': 0})
            goto Event121
        }
    } else
    if !Npc_Hylia_009_Child.EventQueryIsOnRecentTalkFlag() {
        Event130:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_30', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_31', 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_MelodyGet_Storm', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_33', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_32', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_29', 'MaintainPerformanceState': 0})
        goto Event130
    }
}

void PlayStormSong() {
    Obj_Kakariko_Door_A_02.EventDoorClose({'IsWaitEnd': True})
    Npc_Hylia_009_Child.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_009_Child_IsInWindmill', 'Index': -1}) {
        Event42:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_009_Adult_PlayedStormSong_1stFloor', 'Index': -1}) {
            EventCamera.EventTriggerCameraSavePoint()
        }

        call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 5, 'HasRecommendedMelody': True})

        if GameSystemActor.EventQueryMelodyTypeForNormal() == 5 {
            Event13:

            call PlayStormSong_fromBancLogic()

        }
    } else {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': False, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Hylia_009_Child', 'LookAtInstanceName': ''})


        fork {

            call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'Arg_Turn': 1})

        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
        }

        if !Npc_Hylia_009_Child.EventQueryIsOnRecentTalkFlag() {
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'ASName': 'Act_Windmill_Happy', 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_34', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_27', 'IsNotBecomeSpeaker': True, 'ASName': 'Act_Windmill_Happy', 'MaintainPerformanceState': 0})
        }
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

        call Dm_SY_Ocarina.PlayOcarinaSequence_NpcBeginningTalk_NotCreateSensor({'MelodyType': 5, 'IsNeedMessageDialogOpenAnim': True})

        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_009_Child', 'PosVector': [1.3200000524520874, 0.4000000059604645, 3.490000009536743], 'AtVector': [0.03999999910593033, 0.7300000190734863, 1.2899999618530273], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            Event62:
            switch GameSystemActor.EventQueryMelodyTypeForNormal() {
              case 0:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_12', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_13', 'MaintainPerformanceState': 0})
                Event10:
                if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Melody_StormSong'}) {
                    Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_25', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_26', 'MaintainPerformanceState': 0})
                }
              case 1:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_14', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 2:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_15', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 3:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_16', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 4:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_17', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 6:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_18', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 7:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_19', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 8:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_20', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 9:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_21', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 10:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_22', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 11:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_23', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

                goto Event10
              case 12:

                call NpcCommon.StartTalking_DuringPlayerTurn({'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_24'})

                goto Event10
              case 13:

                call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_28', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            }
          case 5:
            goto Event13
          case 13:
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            goto Event62
        }
    }
}

void PlayStormSong_fromBancLogic() {
    Obj_Kakariko_Windmill_A_02.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Kakariko_0050', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Windmill_IsHighSpeed'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.10999999940395355, 0.9399999976158142, 1.2000000476837158], 'AtVector': [-0.1599999964237213, 1.0499999523162842, -0.28999999165534973], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_009_Child', 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        }

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_009_Adult_PlayedStormSong_1stFloor', 'Index': -1}) {

            fork {
                Npc_Hylia_009_Child.EventTriggerRequestLookAtTheFront()
            } {

                fork {
                    Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [1.3799999952316284, 105.01000213623047, 49.06999969482422], 'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
                } {
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [-0.5, 0.10000000149011612, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
                    Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                }

            }


            call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'InstanceName': '', 'ActorName': 'Npc_Hylia_009_Child', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'Arg_Greeting': 4})

            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_51', 'ASName': ''})

            fork {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
            } {

                call Common_Camera_Pln.CameraDoF_Event_Common()

            }

            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_57', 'ASName': 'Act_Windmill_Gazefar', 'MaintainPerformanceState': 0})
            Event123:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Windmill_StartSlowdown'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'KakarikoVillage_Windmill_IsHighSpeed'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Hylia_009_SoonAfterStormSong'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        } else {

            fork {
                Npc_Hylia_009_Child.EventTriggerRequestLookAtTheFront()
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            } {
                Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
            }


            call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'InstanceName': '', 'ActorName': 'Npc_Hylia_009_Child', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'Arg_Greeting': 4})

            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_51', 'ASName': ''})
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_57', 'ASName': 'Act_Windmill_Gazefar', 'MaintainPerformanceState': 0})

            fork {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            } {
                Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
            }

            goto Event123
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Hylia_009_Child_DeleteWaterPlane'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        EventSystemActor.EventTransition({'EventName': 'Dm_Kakariko_0050', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [1.3799999952316284, 105.01000213623047, 49.06999969482422], 'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [-0.5, 0.10000000149011612, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }


        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_009_Child', 'PosVector': [-1.0299999713897705, 0.4000000059604645, 3.5399999618530273], 'AtVector': [0.05999999865889549, 0.7099999785423279, 1.2899999618530273], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Event_Common()

        }

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_DeleteDummyLadder', 'Index': -1, 'Value': True})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'InnerRatio': 1.0, 'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 1.0, 'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'Color': 0, 'Length': 0, 'IsNoPlayAnime': False})

        fork {
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_56', 'MaintainPerformanceState': 0})
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_55', 'MaintainPerformanceState': 0})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Windmill_IsHighSpeed'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Obj_Kakariko_Windmill_A_02.EventActorWindmillRotate({'RotateRate': 10.0, 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        }


        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [1.3043650388717651, 105.96589660644531, 46.770111083984375], 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 0, 'WorldPos': [1.3043650388717651, 105.96589660644531, 46.770111083984375]})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 120, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Npc_Hylia_009_Child', 'PosVector': [-2.25, 0.7400000095367432, -0.7699999809265137], 'AtVector': [0.019999999552965164, 1.3600000143051147, 2.119999885559082], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 120})

        }

        Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_57', 'ASName': 'Act_Windmill_Gazefar', 'MaintainPerformanceState': 0})

        call WarpNPC()

        goto Event123
    }
}

void PlayStormSong_Back_Child() {
    Obj_Kakariko_Door_A_02.EventDoorClose({'IsWaitEnd': True})
    Npc_Hylia_009_Child.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_009_Child_IsInWindmill', 'Index': -1}) {
        goto Event42
    } else {
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

        call Dm_SY_Ocarina.PlayOcarinaSequence_NpcBeginningTalk_NotCreateSensor({'MelodyType': 5, 'IsNeedMessageDialogOpenAnim': True})


        call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'Arg_Turn': 1})

        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 0:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_12', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_60', 'MaintainPerformanceState': 0})
            Event175:
            if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Item_Melody_StormSong'}) {
                Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_61', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_009_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_63', 'MaintainPerformanceState': 0})
            }
          case 1:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_14', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 2:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_15', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 3:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_16', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 4:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_17', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 5:

            call PlayStormSong_fromBancLogic()

          case 6:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_18', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 7:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_19', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 8:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_20', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 9:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_21', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 10:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_22', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 11:

            call NpcCommon.StartTalking_DuringPlayerTurn({'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_23', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': ''})

            goto Event175
          case 12:

            call NpcCommon.StartTalking_DuringPlayerTurn({'ActorName': 'Npc_Hylia_009_Child', 'InstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Hylia_009_Child"), 'NpcMessageID': 'EventFlowMsg/Npc_Hylia_009_Child:Talk_24'})

            goto Event175
        }
    }
}

void Mask_All() {
    switchcall Mask_Talk() {
      case fnv1a("Mask_Talk"):
        if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NotTalkMonolog({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_05_01'}) {
          case 0xf7b0eeb8:
            Event92:
            return 0xa6da0479
          case 0xfab0f371:
            Event88:
            return fnv1a("Mask_Talk")
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NotTalkMonolog({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_009_Child:Mask_103'}) {
          case 0xf7b0eeb8:
            goto Event92
          case 0xfab0f371:
            goto Event88
        }
    }
}

void WarpNPC() {

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Hylia_051_GotoWell'})
        Npc_Hylia_051_Child.EventTriggerParticipateEvent()
        Npc_Hylia_051_Child.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 4, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': -1})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Soldier_002_GotoWell'})
        Npc_Hylia_Soldier_002.EventTriggerParticipateEvent()
        Npc_Hylia_Soldier_002.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 2, 'ClothWarpMode': -1})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Hylia_010_GotoWell'})
        Npc_Hylia_010_Child.EventTriggerParticipateEvent()
        Npc_Hylia_010_Child.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 8, 'ClothWarpMode': -1})
    }

}

void PlayStormSong_InWindmill() {
    Obj_Kakariko_Door_A_02.EventDoorClose({'IsWaitEnd': True})
    Npc_Hylia_009_Child.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_009_Child_IsInWindmill', 'Index': -1}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KakarikoVillage_Npc_Hylia_009_Adult_PlayedStormSong_1stFloor', 'Index': -1}) {
            EventCamera.EventTriggerCameraSavePoint()
        }

        call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 5, 'HasRecommendedMelody': True})

        Event95:
        if GameSystemActor.EventQueryMelodyTypeForNormal() == 5 {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'PlayStormSong_fromBancLogic'})
        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 5})

        goto Event95
    }
}
