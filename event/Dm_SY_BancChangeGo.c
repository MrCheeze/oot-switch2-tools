-------- EventFlow: Dm_SY_BancChangeGo --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerLeaveGameSafetySection']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMoveToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerPutAway']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerChangeScenery', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventBasedOnLookAtCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestEnduringCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBoolArrayAllOnce']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsBool', 'EventQueryGameDataIntBranch', 'EventQueryCheckElapsedTime']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_InsideJabu_Jabu_Ceiling_A_06
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteRollbackChallengeStep', 'EventTriggerMiniGameCatchCuccoPositionLottery']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[instance1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[instance0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[instance1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_JabuJabu
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

void EntryPoint0() {

    call BancChangeGo_Common()

    EventCamera.EventTriggerCameraSavePoint()

    fork {

        call BancChangePlayerAction()

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        SoundSystemActor.EventTriggerChangeScenery({'Command': 0, 'NexttSceneryName': '', 'NextBancParam': 'NextBanc', 'FadeTime': 2.0})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }

    Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsCheckAir'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1}) {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'BootEventName': 'BootEventName', 'NextStartPos': 'NextStartPosAir', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        } else {
            Event50:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        }
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
        goto Event50
    }
}

void BancChangePlayerAction() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2})
    && !Player_Event.EventQueryCheckPlayerState({'State': 1})
    && !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventTriggerParticipateEvent()
            Event163:
            if !Player_Event.EventQueryCheckPlayerState({'State': 6})
            && !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    goto Event163
                } else {
                    GameSystemActor[instance0].EventWait({'Frames': 60, 'IsWaitEnd': True})
                    Event4:
                    Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'IsKeepSpeed': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.0, 'AnchorInstanceName': 'FieldDungeonEntranceGo', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsSheathed': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
                    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': True})
                    }
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                }
            } else {
                goto Event4
            }
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    } else {
        goto Event4
    }
}

void InsideGanonCaslte_Dungeon_EscapeGo() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'BgmLocalProperty_BGM_EscapeFromGanonTower', 'Index': -1})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    GameSystemActor.EventTriggerLeaveGameSafetySection()

    call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FinalBattleField_ChangeENVForBeforeBattle'})
}

void Dm_SY_BancChangeGo_HyruleCastle() {

    call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    if !Player_Event.EventQueryPlayerIsChild()
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsPlayerLeavesHyruleCastleArea', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsPlayerLeavesHyruleCastleArea', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void Dm_SY_BancChangeGo_LostWood() {

    call BancChangeGo_Common()

    EventCamera.EventTriggerCameraSavePoint()

    fork {

        call BancChangePlayerAction()

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        SoundSystemActor.EventTriggerChangeScenery({'Command': 0, 'NexttSceneryName': '', 'FadeTime': 1.0, 'NextBancParam': 'NextBanc'})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 1, 'Length': 1, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 2, 'IsRestoreDoF': False})
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'CameraCollisionMode': 1, 'ToleranceDistance': 1.0, 'IsWaitEnd': False, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'TargetOffset': [0.0, 1.0, 0.0], 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 0, 'LookAtVectorXZ': 0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'IdealDistance': 6.0, 'MoveTime': 200, 'IsLinearMove': False})
    }

    Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsCheckAir'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1}) {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'BootEventName': 'BootEventName', 'NextStartPos': 'NextStartPosAir', 'EventStarterName': 'NextStartPos', 'FadePattern': 2, 'IsItemWarp': False})
        } else {
            Event68:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'NextStartPos', 'FadePattern': 2, 'IsItemWarp': False})
        }
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
        goto Event68
    }
}

void Npc_Zora_007_Adult_Positioning() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_01_Talked', 'Index': -1}) {

        call PositionReset()

        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Zora_007_Adult_Positioning_Choice'}) {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_02', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Zora_007_Adult_Positioning_Choice', 'Value': 1, 'Index': -1})
          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_03', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Zora_007_Adult_Positioning_Choice', 'Value': 2, 'Index': -1})
          case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_01', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Zora_007_Adult_Positioning_Choice', 'Value': 0, 'Index': -1})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_01', 'Index': -1, 'Value': True})
    }
}

void PositionReset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Zora_007_Adult_Positioning_01', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_007_Adult_Positioning_02', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_007_Adult_Positioning_03', 'Value': False})
}

void SubFlow_CustomMoveCamera_UnderWater() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'LookAtVectorY': 1, 'TargetActorInstanceName': 'focus_underWater', 'IdealDistance': 4.0, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'MoveTime': 90, 'IsWaitEnd': False, 'TargetOffset': [0.0, 0.0, -3.0]})
}

void Dm_SY_BancChangeGo_UnderWater() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithRolling()

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        SoundSystemActor.EventTriggerChangeScenery({'Command': 0, 'NexttSceneryName': '', 'FadeTime': 1.0, 'NextBancParam': 'NextBanc'})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'IsKeepSpeed': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.0, 'AnchorInstanceName': 'FieldDungeonEntranceGo', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    } {

        call SubFlow_CustomMoveCamera_UnderWater({'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0], 'AdultAddAtVector': [0.0, 1.2999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.0, -3.5], 'AdultAddPosVector': [0.0, 1.0, -3.5]})

    }

    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': True})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsCheckAir'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1}) {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'BootEventName': 'BootEventName', 'NextStartPos': 'NextStartPosAir', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        } else {
            Event116:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        }
        GameSystemActor.EventTriggerRequestAutoSave()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'AfterKeepEndInterpolateCountScale': 2.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
        goto Event116
    }
}

void Dm_SY_BancChangeGo_GanonCastle() {

    call BancChangeGo_Common()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()

    fork {

        call BancChangePlayerAction()

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        SoundSystemActor.EventTriggerChangeScenery({'Command': 0, 'NexttSceneryName': '', 'NextBancParam': 'NextBanc', 'FadeTime': 120.0})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 2, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 120, 'TargetFovy': 60.0, 'AtVector': [0.0, 1.0, -0.44999998807907104], 'PosVector': [0.0, 2.5, -10.0], 'EndRecelerateRate': 0.5, 'IsEnableRevertFast': False})
    }

    Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsCheckAir'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1}) {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'BootEventName': 'BootEventName', 'NextStartPos': 'NextStartPosAir', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        } else {
            Event133:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'NextStartPos', 'IsItemWarp': False})
        }
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
        goto Event133
    }
}

void BancChangeGo_Common() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
}

void JabujabuToLake() {

    fork {
        EventSystemActor[instance1].EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerRequestEnduringCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 16, 'Power': 0.20000000298023224})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'MouthOpen', 'IsIgnoreDucking': True})
    } {

        call EntryPoint_Jabujabu({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir', 'Wait': 30, 'FromInside': True})

    } {
        Land_InsideJabu_Jabu_Ceiling_A_06.EventPlayAS({'ASName': 'Open', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Dm_SY_BancChangeGo_KakarikoVillage() {

    call BancChangeGo_Common()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_049_Child_IsCompleted', 'Index': -1})
    && !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'CatchCucco_ElapsedTime', 'ElapsedHour': 72}) {
        GameDataActor.EventTriggerSetGameDataBoolArrayAllOnce({'GameDataName': 'MiniGame_CatchCucco_PutsInFence', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Npc_Hylia_049_Child_IsCompleted', 'Index': -1})
        ChallengeSystemActor.EventTriggerMiniGameCatchCuccoPositionLottery()
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Minigame_CatchCucco', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
        Event79:

        call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    } else {
        goto Event79
    }
}

void DeathMountainTrail_ToGoronCity() {

    call BancChangeGo_Common()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {

        call SageOfFire.SageOfFire_CityInFromDeathMt()

    }

    call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

}

void DeathMountainCrater_ToGoronCity() {

    call BancChangeGo_Common()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {

        call SageOfFire.SageOfFire_CityInFromCrater()

    }

    call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

}

void Dm_SY_BancChangeGo_ZoraFountain() {

    call BancChangeGo_Common()


    call Npc_Zora_007_Adult_Positioning()


    call EntryPoint0({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

}

void LakeToJabuJabu() {

    fork {
        EventSystemActor[instance1].EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerRequestEnduringCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 16, 'Power': 0.20000000298023224})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'MouthClose', 'IsIgnoreDucking': True})
    } {

        call EntryPoint_Jabujabu({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir', 'FromInside': False, 'Wait': 45})

    } {
        Npc_JabuJabu.EventTriggerParticipateEvent()
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Get_StoneOfWater_Complete', 'Index': -1}) {
            Npc_JabuJabu.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'ASName': 'Act_Close_Mouth_Fine_St'})
            Npc_JabuJabu.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Close_Mouth_Fine', 'IsWaitEnd': True})
            Npc_JabuJabu.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Act_Close_Mouth_Fine_Ed'})
        } else {
            Npc_JabuJabu.EventPlayAS({'Partial': '', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ASName': 'Act_Close_Mouth_St', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
            Npc_JabuJabu.EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': True, 'IsAnimeDriven': True, 'ASName': 'Act_Close_Mouth', 'ForceFadeInFrame': -1.0})
        }
    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void EntryPoint_Jabujabu() {

    call BancChangeGo_Common()

    EventCamera.EventTriggerCameraSavePoint()

    fork {

        call BancChangePlayerAction()

    } {
        SoundSystemActor.EventTriggerChangeScenery({'Command': 0, 'NexttSceneryName': '', 'FadeTime': 2.0, 'NextBancParam': 'NextBanc'})
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'FromInside'}) {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        } else {
            Dm_Locator.EventTriggerParticipateEvent()
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_JabuJabu', 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1, 'OffsetBase': 1})
            if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor2ActorName': 'Dm_Locator', 'TargetFovy': 50.0, 'IsLinearMove': False, 'EndRecelerateRate': 0.5, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'PosVectorSetType': 4, 'PosVector': [0.0, 0.0, 10.0], 'MoveTime': 160, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor2ActorName': 'Dm_Locator', 'TargetFovy': 50.0, 'IsLinearMove': False, 'EndRecelerateRate': 0.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 160, 'PosVector': [0.0, 2.0, -10.0], 'IsEnableRevertFast': False})
            }
        }
    } {
        GameSystemActor[instance1].EventWait({'IsWaitEnd': True, 'Frames': 'Wait'})
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 1})
    }

    Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsCheckAir'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1}) {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'IsItemWarp': False, 'NextBanc': 'NextBanc', 'BootEventName': 'BootEventName', 'NextStartPos': 'NextStartPosAir', 'EventStarterName': 'NextStartPos'})
        } else {
            Event190:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'IsItemWarp': False, 'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'EventStarterName': 'NextStartPos'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsSetAirStartPosAfterBancChange', 'Index': -1, 'Value': False})
        goto Event190
    }
}
