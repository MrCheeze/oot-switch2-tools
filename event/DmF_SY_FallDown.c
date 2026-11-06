-------- EventFlow: DmF_SY_FallDown --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventWait']
queries: ['EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventAbyssCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerSoundEndForbidScreenDucking', 'EventTriggerSoundBeginForbidScreenDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataEnum', 'EventQueryIsBool', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerAbyss', 'EventPlayerPostAbyss', 'EventTriggerSoundDisableInAbyss', 'EventTriggerSoundEnableAfterAbyss', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventTriggerPlayerSetInvincibleAfterReturnAbyss']
queries: ['EventQueryCheckPlayerAbyssType', 'EventQueryPlayerIsChild', 'EventQueryPlayerIsAbyss']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[u]
entrypoint: None()
actions: ['EventDmLocatorWarpToNearAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventTriggerStartFadeIn', 'EventTriggerStartFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[FadeNavi]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistBottleTypeInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DmF_SY_FallDown() {

    call FallDownSoundFadeOut()


    call FallDownFade({'IsGameOver': False})

    if !GameSystemActor.EventQueryIsDreamWorld() {
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 16, 'GameDataName': 'DreamWorld_BossRushBossCount'}) {
          case [0, 2]:
            Event23:

            call ReturnFromAbyss()

          case 1:

            call DreamBossStage.TimeCountStop()

        }
    } else {
        goto Event23
    }
}

void AbyssCamera() {
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 3}) {
        Event29:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } else
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 5}) {
        goto Event29
    } else
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 4}) {
        goto Event29
    } else
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 7}) {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    } else
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 8}) {
        Dm_Locator[u].EventDmLocatorWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'WhirlpoolCamera'})
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'ToleranceXZAngle': 180.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceDistance': 0.5, 'LookAtVectorY': 0, 'CameraCollisionMode': 2, 'TargetActorName': 'Dm_Locator', 'CameraCollisionLookAtActorOffset': [0.0, 1.7000000476837158, 0.0], 'TargetActorInstanceName': 'u', 'ToleranceYUpwardAngle': 40.0, 'ToleranceYDownwardAngle': 39.0, 'IdealDistance': 3.5, 'MoveTime': 60})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath'}) {

        fork {
            EventSystemActor[FadeNavi].EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !Player_Event.EventQueryPlayerIsAbyss() {
                if Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 9}) {
                    EventSystemActor[FadeNavi].EventWait({'Frames': 5, 'IsWaitEnd': True})
                }
                Npc_Navi.EventTriggerStartFadeOut({'FadeFrame': 20})
            }
        } {
            EventCamera.EventAbyssCamera({'IsWaitEnd': True, 'MinRadius': 1.0, 'Fovy': 65.0, 'JudgeTooCloseHeight': -0.30000001192092896, 'IsReferenceTargetPosOnce': True, 'TargetApproachRate': 0.10000000149011612, 'FovyApproachRate': 0.05000000074505806, 'LatitudeCushionRate': 0.20000000298023224})
        }

    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    }
}

void ReturnFromAbyss() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 27})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DmF_SY_FallDown_Elevator_Reset', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 4}) {
        Event84:
        Player_Event.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': True})
        Event60:
        Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 0})

        fork {
            if !Player_Event.EventQueryPlayerIsChild() {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.2100000381469727, 0.0], 'PosVector': [0.0, 1.8200000524520874, -3.450000047683716], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }


        call FallDownSoundFadeIn()

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False})

        fork {
            UISystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False})
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        }

        Player_Event.EventTriggerPlayerSetInvincibleAfterReturnAbyss()
    } else
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 5}) {
        goto Event84
    } else {
        Player_Event.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': False})
    }
    goto Event60
}

void FallDownFade() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 8}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedNaviBalloonMessage.type036'}) {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 15})
            Event2:

            fork {

                fork {
                    if GameDataActor.EventQueryIsBool({'BoolValue': 'IsGameOver'}) {
                        Player_Event.EventPlayerAbyss({'IsWaitEnd': True, 'InvalidDamage': False})
                    }
                } {
                    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 3}) {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsGameOver'}) {
                            if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                                Event3:
                                UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': True})
                            } else {
                                UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False})
                            }
                        } else {
                            goto Event3
                        }
                    } else
                    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 4}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ForestTemple_IsInFallingCeilingRoom', 'Index': -1}) {
                            Event37:
                            if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsGameOver'}) {
                                if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                                    Event42:
                                    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 3})
                                } else {
                                    UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': False, 'Length': 3, 'IsWaitEnd': False})
                                }
                            } else {
                                goto Event42
                            }
                        } else
                        Event25:
                        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsGameOver'}) {
                            if !PouchSystemActor.EventQueryIsExistBottleTypeInPouch({'BottleItem': 9}) {
                                UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
                            } else {
                                UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': False, 'Length': 0, 'IsWaitEnd': False})
                            }
                        } else {
                            UISystemActor.EventEventFadeOut({'Color': 0, 'IsNoPlayAnime': False, 'Length': 0, 'IsWaitEnd': True})
                        }
                    } else
                    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 5}) {
                        goto Event25
                    } else
                    if !Player_Event.EventQueryCheckPlayerAbyssType({'AbyssType': 9}) {
                        goto Event37
                    } else {
                        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                        goto Event25
                    }
                }

            } {

                call AbyssCamera()

            }

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedNaviBalloonMessage.type015'})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 36})
            goto Event2
        }
    } else {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 15})
        goto Event2
    }
}

void FallDownSoundFadeOut() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 2, 'DuckingName': 'Dm:WorldSEミュート(奈落)', 'DuckingName2': 'Dm:Bgmミュート(戦闘BGMフェード)'})
    SoundSystemActor.EventTriggerSoundBeginForbidScreenDucking({'CommandLife': 0})
    Player_Event.EventTriggerSoundDisableInAbyss()
}

void FallDownSoundFadeIn() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:WorldSEミュート(奈落)', 'DuckingName2': 'Dm:Bgmミュート(戦闘BGMフェード)'})
    SoundSystemActor.EventTriggerSoundEndForbidScreenDucking()
    Player_Event.EventTriggerSoundEnableAfterAbyss()
}
