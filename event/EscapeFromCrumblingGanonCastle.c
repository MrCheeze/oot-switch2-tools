-------- EventFlow: EscapeFromCrumblingGanonCastle --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventAIScheduleRailCalcCurrentAndNextIndex', 'EventTriggerAIScheduleSelectSchedule']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerUnequip', 'EventPlayerContinueWalk', 'EventTriggerPlayerEventStartWithRolling']
queries: ['EventQueryIsDirToTarget', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartRoomSend', 'EventTriggerSetOcclusionReferenceToListener']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetCutChangeCopyFrameNum', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void StartFireTrap_3F() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Zelda_Adult.EventTriggerParticipateEvent()
    Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 14, 'ClothWarpMode': -1})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'LookBackPoint', 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'AtVector': [0.15000000596046448, 1.25, -2.0], 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [-1.75, 0.4000000059604645, 1.75], 'IsEnableRevertFast': False})
    if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookFrontPoint', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 60.0}) {
        Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': True, 'DecSpeedDistance': 0.5, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False, 'MoveSpeed': 3.0, 'IsKeepSpeed': True, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtCaution', 'AnchorInstanceName': 'LookFrontPoint', 'AnchorActorName': 'DestinationAnchor'})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookFrontPoint', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 90.0}) {

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTurnAroundSurpriseCaution', 'ClothWarpMode': 0})
            } {
                Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtTurnAroundSurprise'})
            }

        } else {

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution'})
            } {
                Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            }

            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookBackPoint', 'PosOffset': [0.0, 0.0, -2.0], 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_IsCaughtByFireTrap_3F', 'Value': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'StepName': 'Step05', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.800000011920929})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge01', 'Length': 0.5})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'LayoutMsg/MessageInGame_00:Surprised03', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
    }

    Npc_Hylia_Zelda_Adult.EventTriggerAIScheduleSelectSchedule()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void EndFireTrap_3F() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution'})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    Npc_Hylia_Zelda_Adult.EventTriggerParticipateEvent()
    Npc_Hylia_Zelda_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 14, 'ClothWarpMode': -1})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'LookBackPoint', 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'ToleranceDistance': 1.0, 'LookAtVectorY': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 5.0, 'ToleranceXZAngle': 45.0, 'ToleranceYDownwardAngle': 10.0, 'ToleranceYUpwardAngle': 15.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_IsCaughtByFireTrap_3F', 'Value': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.800000011920929})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge00', 'Length': 1.0})
        }

    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Nervous', 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookBackPoint', 'PosOffset': [0.0, 0.0, -2.0], 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookBackPoint', 'PosOffset': [0.0, 0.0, -2.0], 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Zelda_Adult_ExecuteInterruptSpecialAction07', 'Value': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'StepName': 'Step07'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
}

void Reset_Npc_Hylia_Zelda_Adult_StepStart() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_AfterStep03', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_AfterStep05', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_AfterStep08', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'EscapeFromCrumblingGanonCastle_AfterStep10', 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'StepName': 'Ready'})

    call DmF_SY_GameOver.Start_EscapeFromGanonCastle()

}

void CrumblingGanonCastle_3F_Fookshot() {

    fork {

        call Common.AirStartUp()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08'})
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        PostProcessingActor.EventSetCutChangeCopyFrameNum({'FrameNum': 2})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0150'})
}

void CrumblingGanonCastle_2F_FallDown() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0160'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'EscapeFromCrumblingGanonCastle_2F_FallDown'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step09'})
    Npc_Hylia_Zelda_Adult.EventAIScheduleRailCalcCurrentAndNextIndex({'IsOneWay': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}

void CrumblingGanonCastle_1F_BreakRoom() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'BgmLocalProperty_BGM_EscapeFromGanonTower', 'Index': -1})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Zelda_Adult.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0180'})
}

void CrumblingGanonCastle_EscapeComplete() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Zelda_Adult.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'EscapeFromCrumblingGanonCastle_CreateDistantView', 'Index': -1, 'Value': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0170'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_FinalBattle_0002'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'InsideGanonCastle_Dungeon_EscapeGo'})
}

void TrapStart_3F() {
    SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSetOcclusionReferenceToListener({'CommandLife': 0})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HoverBoot', 'ArmorSlot': 2}) {
        Event133:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'BgmLocalProperty_BGM_EscapeFromGanonTower', 'Index': -1})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        call StartFireTrap_3F()

        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'LookFrontPoint', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 30.0}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 1.649999976158142, -2.0]}) {
                Event186:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseDemoWait': True, 'InstanceName': 'PlayerPos'})
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 2, 'IsNearOffset': False, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False, 'IsDisguisedPlayerPos': True, 'Target': 3, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos'})
                VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'AtVector': [0.0, 1.5499999523162842, 8.0], 'PosVector': [0.0, 1.600000023841858, -2.0], 'IsEnableRevertFast': False})
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsLinearMove': False, 'MoveTime': 45, 'MoveTotargetPosType': 0, 'AtVector': [0.0, 1.5499999523162842, 0.0], 'PosVector': [0.0, 1.649999976158142, -4.0], 'IsEnableRevertFast': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'EscapeFromCrumblingGanonCastle_StartFireTrap_3F'})
                Event149:
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution', 'ForceFadeFrame': 20.0})
                } {
                    Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                }

                VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'IsLinearMove': False, 'MoveTime': 45, 'MoveTotargetPosType': 0, 'AtVector': [0.0, 1.5499999523162842, 0.0], 'CameraCollisionLookAtActor': 3, 'PosVector': [0.0, 1.649999976158142, -1.2999999523162842], 'IsEnableRevertFast': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'EscapeFromCrumblingGanonCastle_StartFireTrap_3F'})
                goto Event149
            }
        } else {
            goto Event186
        }
    } else {
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        Player_Event.EventPlayerContinueWalk({'IsWaitEnd': True, 'ASCommand': 'EvtCaution'})
        goto Event133
    }
}
