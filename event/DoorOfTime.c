-------- EventFlow: DoorOfTime --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventCloseMessageDialog', 'EventTriggerBancRequestBeforehandLoad', 'EventWait']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerHealLifeMax', 'EventTriggerPlayerHealMPMax', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait', 'EventPlayerMoveToAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerSlowWalkStop', 'EventPlayerTurnAndLook', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerWaitStabilityInWater']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime', 'Event_SetWeatherForFlowchart', 'Event_ResetWeatherForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventNaviMoveAtPos', 'EventNaviLookAtObject', 'EventTriggerNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Impa_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventDoNothing', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerSoundStartSceneBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DoorOfTime_SendOff() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlField_0020'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'StepName': 'Step02', 'IsWaitEnd': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'KakarikoVillageNpc'})
}

void DoorOfTime_Escape() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventWorldManagerController.Event_SetWeatherForFlowchart({'Weather': 'GanonCloudy', 'IsImmTrans': True, 'ChangeSpeed': 4})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HrlField_IsThunderON', 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlField_0060', 'FadeInTypeEventEnd': 2})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    EventWorldManagerController.Event_SetWeatherForFlowchart({'Weather': 'GanonCloudy', 'IsImmTrans': True, 'ChangeSpeed': 4})
    EventRequestActor.EventTriggerSetEventBool({'Bool': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HrlField_IsThunderON', 'Value': False})

    fork {
        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [12.0, 148.10000610351562, 58.70000076293945], 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventNaviMoveAtPos({'WorldPos': [7.805420875549316, 150.58070373535156, 62.22951889038086], 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ASCommand': ''})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.09000000357627869, 1.899999976158142, -3.4700000286102295], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsHyruleFieldBridgeClose', 'Value': False, 'Index': -1})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'IsWaitEnd': True, 'StepName': 'Step04'})
    EventWorldManagerController.Event_ResetWeatherForFlowchart({'IsImmTrans': False, 'ChangeSpeed': 0})

    call DoorOfTime_NaviRepeat()

}

void DoorOfTime_GetOcarinaOfTime() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})

    call Common.AirStartUp()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Time', 'FadeInTypeEventEnd': 2})
}

void DoorOfTime_OpenDoor() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 4})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName3': ''})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step04_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Child_TimeTempleDoor_Opened', 'Index': -1})
    && GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_TimeTemple_0010'})
    && !GameSystemActor.EventQueryIsRecommendedMelody() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0010', 'FadeInTypeEventEnd': 2})
        EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_Child_TimeTempleDoor_Opened', 'Index': -1, 'Value': True})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'ASCommand': 'EvtWait', 'Position': [107.91999816894531, 104.16000366210938, -34.0099983215332], 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'Type': 1, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.05000000074505806, 1.7999999523162842, -3.450000047683716], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'IsWaitEnd': True, 'StepName': 'Step06'})
    }
}

void DoorOfTime_Draw() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_TimeTemple_0040'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Market_Child_Field_ChildToAdult'})
    } else {
        GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/SageRoom/SageRoom.bcett.json', 'IsTargetRetry': False})
        Player_Event.EventTriggerParticipateEvent()
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_TimeTemple_0030'})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextStartPos': '', 'NextStartRot': [0.0, 1.5, 0.0], 'NextBanc': 'SageRoom', 'NextPosition': [-0.029999999329447746, 100.1500015258789, 0.0], 'EventStarterName': '', 'BootEventName': 'SageRoom_MeetGanondorf', 'FadePattern': 2, 'IsItemWarp': False})
    }
}

void DoorOfTime_CheckStoneNum() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'IsWaitEnd': True, 'StepName': 'Step03'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsHyruleFieldBridgeClose', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'DoorOfTime_GetStoneCount', 'Index': -1, 'Value': 0})
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'StepName': 'Step2_1'})
            Event5:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'DoorOfTime_GetStoneCount', 'Value': 1, 'Index': -1})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'StepName': 'Step2_2'})
        goto Event5
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'DoorOfTime_GetStoneCount', 'Value': 2, 'Index': -1})
    }
}

void Recovery() {
    EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
    Player_Event.EventTriggerHealLifeMax()
    Player_Event.EventTriggerPlayerHealMPMax()
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
}

void SageRoom_MeetRauru() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/Market/Market_Adult.bcett.json', 'IsTargetRetry': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SageRoom_0000', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SageRoom_0005'})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextStartPos': '', 'NextStartRot': [0.0, 1.5, 0.0], 'NextBanc': 'Market_Adult', 'BootEventName': 'Market_Adult_AllSage_Start', 'NextPosition': [120.91000366210938, 105.68000030517578, -26.65999984741211], 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})

    call Recovery()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'DoorOfTime', 'IsWaitEnd': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
}

void DoorOfTime_NaviRepeat() {
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

    EventSystemActor.EventWait({'Frames': 16, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/DoorOfTime:NaviRepeat_00_00'})


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TargetPoint', 'AtVectorSetType': 3, 'PosVector': [9.32800006866455, 150.2969970703125, 62.1879997253418], 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }


    fork {
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ASCommand': '', 'IsLookAtObject': True, 'LookAtActorName': 'Obj_Ocarina_Time', 'WorldPos': [11.609999656677246, 149.05999755859375, 58.900001525878906], 'IsTurnLooking': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/DoorOfTime:NaviRepeat_00_01', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'AnchorAction1', 'InstanceName': 'Look_Ocarina', 'IsWaitEnd': False, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': False, 'SlowTurn': True})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1InstanceName': '', 'MoveTime': 60, 'IsWaitEnd': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [1.0, 0.0, 0.0], 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'PosVectorSetType': 1, 'Actor2InstanceName': '', 'Actor1ActorName': '', 'Actor2ActorName': '', 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void Step01_Npc_Hylia_Impa_Child_Talk() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Impa_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventTransition({'EventName': 'Dm_MelodyGet_Zelda', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void DoorOfTime_AreaOut() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HyruleCastle_Zelda_CanbeStopped_Impa_Reset'})
    Npc_Hylia_Impa_Child.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
    Npc_Hylia_Impa_Child.EventDoNothing({'IsWaitEnd': False})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_MelodyGet_Zelda'}) {

        call InitTalk.InitTalk_OnEvent_SetTalkCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_12', 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Impa_Child"), 'Arg_Turn': 2})

        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_15', 'MaintainPerformanceState': 0})
        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_08', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call NpcCommon.Npc_IsConfront_WithLinkAS({'NpcActor': ActorIdentifier(name="Npc_Hylia_Impa_Child"), 'LinkAS': 'EvtTalkYes'})

            Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_10', 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'FadePattern': 0, 'NextBanc': 'HyruleField_Child', 'BootEventName': 'HyruleField_DoorOfTime_SendOff', 'NextStartPos': 'DoorOfTime_MeetImpa_EndPos', 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 180.0, 0.0], 'EventStarterName': '', 'IsItemWarp': False})
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_09', 'MaintainPerformanceState': 0})
            Event8:
            Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'DoorOfTime_AreaOutBackPos', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': True, 'DecSpeedDistance': 3.0, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        }
    } else {

        call InitTalk.InitTalk_OnEvent_SetTalkCamera({'Arg_Turn': 1, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_11', 'ActorName': 'Npc_Hylia_Impa_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Impa_Child")})

        goto Event8
    }
}

void Check_SpiritStoneBase() {

    call SignboardWood.CommonFloorSignCamera({'dist': 3.0, 'upwardAngle': 20.0, 'ofs': [0.0, 1.2999999523162842, 0.0], 'tole_XZAngle': 45.0})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step04_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Child_TimeTempleDoor_Opened', 'Index': -1}) {
            Event36:
            SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:TempleOfTime_000', 'MaintainPerformanceState': 0})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.DoorOfTime_Check_SpiritStoneBase_Event33', 'Index': -1}) {
            goto Event36
        } else {
            SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SignboardWood:TempleOfTime_000', 'MaintainPerformanceState': 0})

            call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/DoorOfTime:NaviRepeat_00_02', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.DoorOfTime_Check_SpiritStoneBase_Event33', 'Value': True, 'Index': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {
        goto Event36
    }
}

void DoorOfTime_GetOcarinaOfTime_AreaOut() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
        if Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            Event208:
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'SwimWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'DoorOfTime_GetOcarinaOfTime_WalkLoopCount', 'Index': -1, 'Value': 0})

        fork {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/DoorOfTime:NaviRepeat_00_04', 'MaintainPerformanceState': 0})
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/DoorOfTime:NaviRepeat_00_03', 'MaintainPerformanceState': 0})
            }
        } {
            if Player_Event.EventQueryCheckPlayerState({'State': 15}) {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'Wait'})
            }
        }

        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'GetOcarinaOfTime_AreaOut_Destination', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'MoveSpeed': 0.5, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'DecSpeedDistance': 3.0, 'IsWaitEnd': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})

        call NaviEventCommon.Navi_followPlayer()

        Event152:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleField_GetOcarinaOfTime_Area', 'Index': -1}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DoorOfTime_GetOcarinaOfTime_WalkLoopCount', 'Index': -1, 'Value': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'DoorOfTime_GetOcarinaOfTime_WalkLoopCount', 'Value': 10, 'Index': -1}) {
              case 0:
                goto Event152
              case [1, 2]:
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GetOcarinaOfTime_AreaOut_Destination', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
                GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            }
        }
    } else {
        Player_Event.EventPlayerWaitStabilityInWater({'IsWaitEnd': True})
        goto Event208
    }
}

void SageRoom_MeetGanondorf() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/SageRoom/SageRoom.bcett.json', 'IsTargetRetry': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0040', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventWait({'Frames': 180, 'IsWaitEnd': True})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsSetMessageTargetActorName': True, 'Actor': 'Weapon_Sword_Master', 'IsEquipDIrect': True, 'IsGetEvent': False})

    call ReplaceEquipmentForEraChange.ReplaceEquipmentForEraChange()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1, 'Value': False})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextStartPos': '', 'NextStartRot': [0.0, 1.5, 0.0], 'NextBanc': 'SageRoom', 'NextPosition': [-0.029999999329447746, 100.1500015258789, 0.0], 'EventStarterName': '', 'BootEventName': 'SageRoom_MeetRauru', 'FadePattern': 2, 'IsItemWarp': False})
}

void DoorOfTime_DiscoverySword() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Market_Child_TimeTemple_DeleteLightShaft_FirstTime_00'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_TimeTemple_0020'})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'StandPosAfterSwordDiscovery', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': True, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void Dm_MelodyGet_Zelda_After_Npc_Hylia_Impa_Child_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 2})

    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_08', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call NpcCommon.Npc_IsConfront_WithLinkAS({'NpcActor': ActorIdentifier(name="Npc_Hylia_Impa_Child"), 'LinkAS': 'EvtTalkYes'})

        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_10', 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'FadePattern': 0, 'NextBanc': 'HyruleField_Child', 'BootEventName': 'HyruleField_DoorOfTime_SendOff', 'NextStartPos': 'DoorOfTime_MeetImpa_EndPos', 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 180.0, 0.0], 'EventStarterName': '', 'IsItemWarp': False})
    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Impa_Child:Talk_09', 'MaintainPerformanceState': 0})
    }
}

void Dm_MelodyGet_Time_After() {
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HyruleField_DoorOfTime_Escape_EndPos', 'IsWaitEnd': True, 'UseDemoWait': True, 'NotChangeRot': False, 'ASCommand': 'EvtWait'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.1899999976158142, 1.8300000429153442, -3.450000047683716], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventTriggerNaviWarpToPlayerHomePosition({'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'DoorOfTime', 'IsWaitEnd': True, 'StepName': 'Step05'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'DoorOfTime', 'IsFirstStep': False})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 2, 'BgmName': 'BGM_HyruleField'})
}
