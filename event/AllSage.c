-------- EventFlow: AllSage --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerBackMoveForAnchor', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerEquipmentUserRequestCreateStaticEquipment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveToAnchor', 'EventTriggerBecomeSpeaker', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventNaviMovePosTalkToPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Sheik_Adult
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Market_Adult_Field_GetArrowLight() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    Event175:
    Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 2, 'IsActive': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0090', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_TimeTemple_0095'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': False, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0110', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_TimeTemple_0115'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_TimeTemple_0125'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0130', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_TimeTemple_0135'})
    UISystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.140000104904175, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': False, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    UISystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    call NaviTalk()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'AllSage', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Defeat_Ganon', 'StepName': 'Step01', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
}

void Market_Adult_AllSage_Start() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0050', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_TimeTemple_0055'})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'Position': [132.97999572753906, 105.68000030517578, -34.04999923706055], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_Child_Firsttime_GotoAdult'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.NaviHint_Shield_Hylian'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfLight', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'AllSage', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfForest', 'StepName': 'Step01'})
}

void SageRoom_AllSage_LastSage() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Awake_Spirit', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Awake_Shadow', 'Index': -1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SageRoom_0010', 'FadeInTypeEventEnd': 2})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'AllSage', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step02'})
    }
}

void Market_Adult_Field_GetLightPrelude() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 3, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Shine', 'FadeInTypeEventEnd': 0})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'AllSage', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeStep': 'Step01_01', 'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})
}

void Navi_GuideSheik_UnderWell() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameB': 'TargetPoint', 'CheckDistance': 1.0}) {
        Player_Event.EventPlayerBackMoveForAnchor({'OffsetDist': 0.5, 'IsWaitEnd': True, 'AnchorInstanceName': 'TargetPoint', 'AnchorActorName': 'DestinationAnchor'})
    }
    Npc_Navi.EventTriggerBecomeSpeaker()
    Npc_Navi.EventNaviMoveToAnchor({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'ASCommand': '', 'LookAtTarget': 5, 'InstanceName': 'NaviAnchor', 'LookAtActorName': 'DestinationAnchor', 'LookAtInstanceName': 'TargetPoint'})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})

    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/AllSage:Talk_05'})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Adult_NaviGuideTimeTemple', 'Index': -1, 'Value': True})
}

void Navi_GuideSheik_SpiritTemple() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.0, 'ActorNameB': 'NaviAnchorAction1', 'InstanceNameB': 'GuideSheik'}) {
        Player_Event.EventPlayerBackMoveForAnchor({'OffsetDist': 0.5, 'AnchorActorName': 'NaviAnchorAction1', 'AnchorInstanceName': 'GuideSheik', 'IsWaitEnd': False})
    }
    Npc_Navi.EventTriggerBecomeSpeaker()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step05_02_Exp'}) {
        Event60:
        Npc_Navi.EventNaviMoveToAnchor({'IsWaitEnd': True, 'LookAtActorName': 'DestinationAnchor', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'ASCommand': '', 'InstanceName': 'GuideSheik', 'LookAtTarget': 2, 'LookAtInstanceName': '', 'IsLookAtObject': False, 'OverwriteRotNearDist': -1.0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Field_TunnelTooSmall_FirstDo', 'Index': -1}) {
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/AllSage:Talk_007', 'OverrideStyle': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Field_TunnelTooSmall_FirstDo', 'Value': False, 'Index': -1})
        } else {
            Npc_Navi.EventTalk({'OverrideStyle': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/AllSage:Talk_008'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Field_TunnelTooSmall_FirstDo', 'Index': -1, 'Value': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Adult_NaviGuideTimeTemple', 'Index': -1}) {
        goto Event60
    } else {
        Npc_Navi.EventNaviMoveToAnchor({'IsWaitEnd': True, 'LookAtActorName': 'DestinationAnchor', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'ASCommand': '', 'InstanceName': 'GuideSheik', 'LookAtTarget': 2, 'LookAtInstanceName': '', 'IsLookAtObject': False, 'OverwriteRotNearDist': -1.0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/AllSage:Talk_003'})

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/AllSage:Talk_004', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Adult_NaviGuideTimeTemple'})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step05_02_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step04_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step05_01_Exp'}) {
                Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'ASCommand': 'Wait', 'IsTurnLooking': False, 'MoveSpeed': 2.0, 'IsUseDisguiseSpeakerPos': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'DistPassThrough': 0.0})
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/AllSage:Talk_006', 'MaintainPerformanceState': 0})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step05_03', 'IsIgnoreChallengeProgressUI': False})
                ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'SageOfSpirit'})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step05_01'})
            }
        }
    }
}

void NaviTalk() {

    fork {

        call NaviEventCommon.NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': True})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 20.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/AllSage:Talk_0001', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
}

void Check_ShadowTempleStep() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DoorOfTime_AfterAwakeInpa'}) {
            return fnv1a("else")
        } else {
            return fnv1a("Complete")
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_Kakariko_0030', 'Index': -1}) {
        return 0x9f738675
    } else {
        return fnv1a("else")
    }
}

void MelodyOfShine() {
    switchcall Check_ShadowTempleStep() {
      case fnv1a("else"):
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_FireBolero'}) {
            Event140:
            Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0024', 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AllSage_MeetSheik_And_Gone'}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0025', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            } else {
                Event139:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0026', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            }
            Npc_Hylia_Sheik_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0000', 'IsWaitEnd': True, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
            Npc_Hylia_Sheik_Adult.EventTalk({'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0001', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C03-St', 'MaintainPerformanceState': 0})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_WaterSerenade'}) {
            goto Event140
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_Melody_SpiritRequiem'}) {
            goto Event140
        } else {
            goto Event139
        }
      case 0x9f738675:
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0033', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'Demo_Wait_Half', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0035', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C03-St', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0036', 'MaintainPerformanceState': 0})
      case fnv1a("Complete"):
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0034', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'Demo_Wait_Half', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0037', 'MaintainPerformanceState': 0})
        Npc_Hylia_Sheik_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'ASName': 'C03-St', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Shine:Dm_MelodyGet_Shine_0038', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoorOfTime_AfterAwakeInpa'})
    }
}

void MelodyOfSpirit_01() {
    switchcall Check_ShadowTempleStep() {
      case fnv1a("else"):
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0001', 'ASName': 'Demo_Wait_Half', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
      case 0x9f738675:
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Demo_Wait_Half', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0012', 'MaintainPerformanceState': 0})
      case fnv1a("Complete"):
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Demo_Wait_Half', 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0013', 'MaintainPerformanceState': 0})
    }
}

void MelodyOfSpirit_02() {
    switchcall Check_ShadowTempleStep() {
      case fnv1a("else"):
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0011', 'EndDialogOption': 0, 'IsCloseDialog': True, 'ASName': 'Demo_Wait_Half', 'MaintainPerformanceState': 0})
      case 0x9f738675:
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'IsCloseDialog': True, 'ASName': 'Demo_Wait_Half', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0014', 'MaintainPerformanceState': 0})
      case fnv1a("Complete"):
        Npc_Hylia_Sheik_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'IsCloseDialog': True, 'ASName': 'Demo_Wait_Half', 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Spilit:Dm_MelodyGet_Spilit_0015', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DoorOfTime_AfterAwakeInpa'})
    }
}

void MeetSheik_And_Gone() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AllSage_AwakeSage_Fire_Or_Forest'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'AllSage_MeetSheik_And_Gone'})
    }
}

void GoneSheik_And_Meet() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'AllSage_AwakeSage_Fire_Or_Forest'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'AllSage_MeetSheik_And_Gone'})
}

void GetArrowLight_OcarinaBackTimeTemple() {
    goto Event175
}
