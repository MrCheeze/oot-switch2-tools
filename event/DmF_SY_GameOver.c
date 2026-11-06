-------- EventFlow: DmF_SY_GameOver --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenGameOverScreen', 'EventWaitGameOverButton', 'EventSetEventResult', 'EventWait', 'EventOpenGameOverReturnTitleCheckScreen', 'EventWaitGameOverReturnTitleCheckButton', 'EventCloseGameOverReturnTitleCheckScreen', 'EventTriggerPauseMgrRequestPause', 'EventWaitUpdate', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerDungeonAddBossRetryNum', 'EventFadeOutByGameSystemActor', 'EventPlayerWaitRagdollStableOrAbyss', 'EventTriggerBancRequestBeforehandLoad', 'EventTriggerZeldaNotesAddIntegratedValueItem']
queries: ['EventQueryGameOverScreen', 'EventQueryGameOverReturnTitleCheckScreen', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm', 'EventSoundWaitForBgmLayerSetFinished', 'EventTriggerSoundBeginForbidScreenDucking']
queries: ['EventQueryIsInGameBgmSuspend']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum', 'EventQueryIsGameDataBoolExp', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: UISystemActor
entrypoint: None()
actions: ['EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge', 'EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerDie', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventTriggerHealLifeMax', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPostAbyss', 'EventPlayerStandUp', 'EventTriggerPlayerUseFairy', 'EventTriggerPlayerUseFairyRecover', 'EventTriggerPlayerRagdollPause', 'EventTriggerPlayerRagdollUnpause', 'EventTriggerSoundDisableInAbyss', 'EventTriggerSoundEnableAfterAbyss', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerPlayerSetInvincibleAfterRevivalFairy']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerIsChild', 'EventQueryCheckPlayerAbyssType', 'EventQueryCheckPlayerDeathReason', 'EventQueryPlayerIsAbyss']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventOcarinaResultCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventStartGameOverFilter', 'EventEndGameOverFilter']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistBottleTypeInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveToGameOverPosition', 'EventWarpToTargetActor', 'EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventTriggerStartFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Start() {
    Player_Event.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': '', 'IsTargetRetry': True})
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {

        call PlayerDead({'SkipResetDebugMode': True, 'ShouldReturnFromAbyss': True})


        call FairyRecovery()

        Event136:
        Player_Event.EventTriggerPlayerRagdollUnpause()
    } else {

        call PlayerDead({'SkipResetDebugMode': False, 'ShouldReturnFromAbyss': False})


        call DisplayGameOver()

        Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 0})
        goto Event136
    }
}

void PlayerDead() {

    call SoundFade()

    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 0}) {

        fork {
            EventCamera.EventTriggerCameraSavePoint()

            call Check_UnderWaterOverHead()

            if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                GameSystemActor.EventPlayerWaitRagdollStableOrAbyss({'IsWaitEnd': True, 'TimeOutFrameForWaitDeadDown': 200.0, 'TimeOutFrame': 600.0})
                if !Player_Event.EventQueryPlayerIsAbyss() {
                    Event202:
                    Player_Event.EventTriggerSoundDisableInAbyss()
                    Event47:

                    fork {

                        call DmF_SY_FallDown.AbyssCamera()

                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                        call StartBgm()

                    }

                    GameSystemActor.EventFadeOutByGameSystemActor({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } else {
                    Player_Event.EventTriggerPlayerRagdollPause()
                    Event17:
                    if !Player_Event.EventQueryCheckPlayerState({'State': 40}) {
                        if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                            PostProcessingActor.EventStartGameOverFilter({'IsWaitEnd': True, 'StartRadius': 0.6000000238418579, 'EndRadius': 1.7999999523162842, 'RequiredFrame': 150})

                            call StartBgm()

                        } else {
                            goto Event47
                        }
                    } else {

                        call GameOverCamera()

                    }
                }
            } else {
                GameSystemActor.EventPlayerWaitRagdollStableOrAbyss({'IsWaitEnd': True, 'TimeOutFrame': 120.0, 'TimeOutFrameForWaitDeadDown': 200.0})
                if !Player_Event.EventQueryPlayerIsAbyss() {
                    goto Event202
                } else
                goto Event17
            }
        } {
            UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False})
        } {
            if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath'}) {

                fork {
                    Player_Event.EventPlayerDie({'IsWaitEnd': False, 'SkipResetDebugMode': 'SkipResetDebugMode'})
                    GameSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})
                } {
                    Npc_Navi.EventNaviMoveToGameOverPosition({'IsWaitEnd': False, 'ArrivedASCommand': 'GameOver_Navi'})
                }

            }
        }

        if !GameDataActor.EventQueryIsBool({'BoolValue': 'ShouldReturnFromAbyss'}) {
            if Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 0}) {
                if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 3}) {
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': False, 'Length': 1})
                } else {
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': False, 'Length': 0})
                }

                call GameOverReturnFromAbyss()

            }
        } else
        if Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 0}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player_Event.EventTriggerSoundEnableAfterAbyss()
        }
    } else {
        SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 0})
        switch Player_Event.EventQueryCheckPlayerDeathReason() {
          case [0, 2]:

            fork {
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

            Event7:
            Player_Event.EventPlayerDie({'SkipResetDebugMode': 'SkipResetDebugMode', 'IsWaitEnd': False})
            if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                Event89:
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
                if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 4}) {
                    Event201:
                    Player_Event.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': True})
                    Event144:
                    if !Player_Event.EventQueryPlayerIsChild() {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'AtVector': [0.0, 1.2100000381469727, 0.0], 'PosVector': [0.0, 1.8200000524520874, -3.450000047683716], 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default()

                        }

                    } else {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default()

                        }

                    }
                    PostProcessingActor.EventEndGameOverFilter({'IsWaitEnd': True, 'StartRadius': 0.6000000238418579, 'EndRadius': 1.7999999523162842, 'RequiredFrame': 0})
                    Player_Event.EventTriggerSoundEnableAfterAbyss()
                    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False})
                    Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 0})

                    fork {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'DamageLStandStartPose', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    } {
                        if !Player_Event.EventQueryPlayerIsChild() {
                            Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 100.0, 'PositionOffset': [-0.4000000059604645, 0.4000000059604645, 0.20000000298023224]})
                        } else {
                            Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 120.0, 'PositionOffset': [-0.5, 0.6000000238418579, 0.20000000298023224]})
                        }
                        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'GameOver_Navi'})
                    }

                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } else
                if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 5}) {
                    goto Event201
                } else {
                    Player_Event.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': False})
                }
                goto Event144
            } else {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})

                call StartBgm()

                Player_Event.EventTriggerSoundEnableAfterAbyss()
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            }
          case 1:
            Player_Event.EventTriggerSoundDisableInAbyss()

            call DmF_SY_FallDown.FallDownFade({'IsGameOver': True})

            goto Event7
        }
    }
}

void DisplayGameOver() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventOpenGameOverScreen({'IsWaitEnd': True})
    Event2:
    GameSystemActor.EventWaitGameOverButton({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryGameOverScreen() {
        GameSystemActor.EventSetEventResult({'IsWaitEnd': True, 'EventResult': 'Retry'})
        Event12:
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath', 'Index': -1})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsBossBattle', 'Index': -1}) {
            GameSystemActor.EventTriggerDungeonAddBossRetryNum()
        }
        PostProcessingActor.EventEndGameOverFilter({'IsWaitEnd': True, 'StartRadius': 0.6000000238418579, 'EndRadius': 1.7999999523162842, 'RequiredFrame': 0})
        SoundSystemActor.EventSoundWaitForBgmLayerSetFinished({'LayerSetName': 'FanfareLayerSet', 'IsWaitEnd': True, 'TimeoutFrame': 480})
        GameSystemActor.EventTriggerPauseMgrRequestPause({'PauseType': 'GameOverPause'})
        GameSystemActor.EventWaitUpdate({'IsWaitEnd': True, 'UpdateCount': 1})
    } else {
        GameSystemActor.EventOpenGameOverReturnTitleCheckScreen({'IsWaitEnd': True, 'TopButton': 'LayoutMsg/SystemWindow_00:1003', 'BottomButton': 'LayoutMsg/SystemWindow_00:1001', 'Text': 'LayoutMsg/SystemWindow_00:0003'})
        GameSystemActor.EventWaitGameOverReturnTitleCheckButton({'IsWaitEnd': True})
        if !GameSystemActor.EventQueryGameOverReturnTitleCheckScreen() {
            GameSystemActor.EventSetEventResult({'IsWaitEnd': True, 'EventResult': 'Title'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_ToTitleFromGameOver', 'Index': -1, 'Value': True})
            goto Event12
        } else {
            GameSystemActor.EventCloseGameOverReturnTitleCheckScreen({'IsWaitEnd': True})
            goto Event2
        }
    }
}

void Start_EscapeFromGanonCastle() {

    call DisplayGameOver()

}

void FairyRecovery() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    Player_Event.EventTriggerPlayerUseFairy()
    GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 13, 'Frame': 30})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    Player_Event.EventTriggerPlayerUseFairyRecover()

    fork {
        Player_Event.EventPlayerStandUp({'IsWaitEnd': True})
    } {
        if Player_Event.EventQueryCheckPlayerState({'State': 40}) {
            if !Player_Event.EventQueryPlayerIsChild() {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'FovySetType': 0, 'LatShiftRange': 120.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': '', 'MoveTime': 90, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.8200000524520874, -3.450000047683716], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'FovySetType': 0, 'LatShiftRange': 120.0, 'MoveTotargetPosType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': '', 'MoveTime': 90, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }
        }
    } {
        if !Player_Event.EventQueryPlayerIsAbyss() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False})
        } else {

            fork {
                PostProcessingActor.EventEndGameOverFilter({'IsWaitEnd': True, 'RequiredFrame': 90, 'StartRadius': 0.6000000238418579, 'EndRadius': 1.7999999523162842})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            }

        }
    }

    Player_Event.EventTriggerPlayerSetInvincibleAfterRevivalFairy()
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    if !SoundSystemActor.EventQueryIsInGameBgmSuspend() {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': True, 'WithPlayableEvent': True, 'ResumeDelay': 0})
    }
}

void Start_DreamWorld() {
    Player_Event.EventTriggerParticipateEvent()
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {

        call PlayerDead({'SkipResetDebugMode': True, 'ShouldReturnFromAbyss': True})


        call FairyRecovery()

    } else {

        call SoundFade()

        if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 0}) {
            Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})

            fork {
                GameSystemActor.EventPlayerWaitRagdollStableOrAbyss({'IsWaitEnd': True, 'TimeOutFrame': 120.0, 'TimeOutFrameForWaitDeadDown': 200.0})
            } {
                Npc_Navi.EventNaviMoveToGameOverPosition({'IsWaitEnd': False, 'ArrivedASCommand': 'GameOver_Navi'})
            } {
                UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
                UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': False})
            }

            Event58:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Player_Event.EventTriggerHealLifeMax()
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_AllBossBattle_IsAfter_Retry_Exp'}) {

                call SubEvent_AllBossBattle.BossStageExitProcess()

            } else {
                Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [0.0, 0.10999999940395355, 0.0], 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 120.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
                EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            }
        } else {
            Player_Event.EventTriggerSoundDisableInAbyss()

            call DmF_SY_FallDown.FallDownFade({'IsGameOver': True})

            Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})
            goto Event58
        }
    }
}

void GameOverCamera() {

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'CheckDistance': 1.5}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                    Event143:
                    EventCamera.EventOcarinaResultCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveTime': 150, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'LatShiftRange': 10.0, 'LongShiftRange': 60.0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'Actor1ActorBone': 'Skl_Root', 'AtVector': [0.0, 0.10000000149011612, 0.0], 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': False})
                } else {
                    Event93:
                    EventCamera.EventOcarinaResultCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveTime': 150, 'PosVectorSetType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'LatShiftRange': 10.0, 'LongShiftRange': 60.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorBone': 'Skl_Root', 'AtVector': [0.0, 0.10000000149011612, 0.0], 'OnetimeShiftRange': 10.0, 'ExtraCheckSaftyPos': False})
                }
            } else
            if EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName2': 'Player_Event', 'IsConsiderWater': False, 'ActorName1': 'EventCamera', 'Vector1': [0.0, 0.0, 0.0], 'Vector2': [0.0, 1.7999999523162842, 0.0], 'SpaceCheckRadius': 0.15000000596046448, 'IsEnableCameraBodyCheck': False}) {
                goto Event93
            }
        } else {
            goto Event143
        }
    } {

        call StartBgm()

        PostProcessingActor.EventStartGameOverFilter({'IsWaitEnd': True, 'StartRadius': 0.6000000238418579, 'EndRadius': 1.7999999523162842, 'RequiredFrame': 150})
    }

}

void StartBgm() {
    if PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_GameOver', 'IsReleaseDucking': False, 'CommandLife': 2})
    }
}

void Start_Delayed() {
    Player_Event.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_GameOver', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void GameOverReturnFromAbyss() {
    goto Event89
}

void SoundFade() {
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 0}) {
        if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
            Event168:
            SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName': 'Dm:WorldSEミュート(ゲームオーバー)', 'DuckingName2': 'Dm:PlayerSEミュート(ゲームオーバー)', 'CommandLife': 0})
            Event165:
            if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                Event164:
                SoundSystemActor.EventSoundRequestDucking({'CommandLife': 0, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
            } else
            if !GameSystemActor.EventQueryIsDreamWorld() {
                goto Event164
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
                goto Event164
            } else {
                SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': True, 'CommandLife': 2, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
            }
        } else
        if !GameSystemActor.EventQueryIsDreamWorld() {
            goto Event168
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
            goto Event168
        } else {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName': 'Dm:WorldSEミュート(ゲームオーバー)', 'DuckingName2': 'Dm:PlayerSEミュート(ゲームオーバー)', 'CommandLife': 2})
        }
        goto Event165
    } else
    if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
        Event153:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:WorldSEミュート(奈落)', 'CommandLife': 0})
        goto Event165
    } else
    if !GameSystemActor.EventQueryIsDreamWorld() {
        goto Event153
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsSkipRetrySequence', 'Index': -1}) {
        goto Event153
    } else {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:WorldSEミュート(奈落)', 'CommandLife': 2})
    }
    goto Event165
}

void Check_UnderWaterOverHead() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
            Event195:
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName2': 'Player_Event', 'IsConsiderWater': False, 'ActorName1': 'EventCamera', 'Vector1': [0.0, 0.0, 0.0], 'Vector2': [0.0, 1.7999999523162842, 0.0], 'SpaceCheckRadius': 0.15000000596046448, 'IsEnableCameraBodyCheck': False}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            goto Event195
        }
    } else {
        goto Event195
    }
}
