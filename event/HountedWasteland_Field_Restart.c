-------- EventFlow: HountedWasteland_Field_Restart --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerMoveToOffsetAnchor', 'EventPlayerContinueWalk', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ClearHountedWastelandOutAreaTimeRatio']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_GuidePoe_Adult
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundDisableDuckingHountedWasteland', 'EventTriggerSoundEnableDuckingHountedWasteland', 'EventTriggerSoundSetWastelandRatioTargetOne', 'EventTriggerSoundSetWastelandRatioTargetZero']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void HountedWasteland_Field_RestartToEntrance() {
    Event52:

    fork {
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventPlayerContinueWalk({'IsWaitEnd': True, 'ASCommand': 'EvtSandStorm'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVector': [0.0, 1.75, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 20, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventTriggerSoundDisableDuckingHountedWasteland()
        SoundSystemActor.EventTriggerSoundSetWastelandRatioTargetOne()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ApproachedGoal'}) {

        call WarpPointCheck({'PointFromColossus': 'WarpPoint04_2', 'PointFromFortress': 'WarpPoint04_1'})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'}) {

            call MoveEntrance({'PointFromColossus': 'WarpPoint04_2', 'PointFromFortress': 'WarpPoint04_1', 'LookAround': False, 'LookAroundAnim': 'EvtWait'})

            Event29:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventTriggerSoundEnableDuckingHountedWasteland()

            call HountedWasteLand_Restart_Navi()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'})

            call MoveEntrance({'PointFromColossus': 'WarpPoint04_2', 'PointFromFortress': 'WarpPoint04_1', 'LookAround': True, 'LookAroundAnim': 'EvtLookAround'})

            goto Event29
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_IsRespawnAtGuidePoeRuins'}) {

        call WarpPointCheck({'PointFromColossus': 'WarpPoint03_2', 'PointFromFortress': 'WarpPoint03_1'})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'}) {

            call MoveEntrance({'PointFromColossus': 'WarpPoint03_2', 'PointFromFortress': 'WarpPoint03_1', 'LookAround': False, 'LookAroundAnim': 'EvtWait'})

            goto Event29
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'})

            call MoveEntrance({'PointFromColossus': 'WarpPoint03_2', 'PointFromFortress': 'WarpPoint03_1', 'LookAround': True, 'LookAroundAnim': 'EvtLookAround'})

            goto Event29
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_IsRespawnBeyondQuickSand'}) {

        call WarpPointCheck({'PointFromFortress': 'WarpPoint02_1', 'PointFromColossus': 'WarpPoint02_2'})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'}) {

            call MoveEntrance({'PointFromFortress': 'WarpPoint02_1', 'PointFromColossus': 'WarpPoint02_2', 'LookAround': False, 'LookAroundAnim': 'EvtWait'})

            goto Event29
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'})

            call MoveEntrance({'PointFromFortress': 'WarpPoint02_1', 'PointFromColossus': 'WarpPoint02_2', 'LookAround': True, 'LookAroundAnim': 'EvtLookAround'})

            goto Event29
        }
    } else {

        call WarpPointCheck({'PointFromColossus': 'WarpPoint01_2', 'PointFromFortress': 'WarpPoint01_1'})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'}) {

            call MoveEntrance({'PointFromColossus': 'WarpPoint01_2', 'PointFromFortress': 'WarpPoint01_1', 'LookAround': False, 'LookAroundAnim': 'EvtWait'})

            goto Event29
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HountedWasteland_isFirstRespawn_01'})

            call MoveEntrance({'PointFromColossus': 'WarpPoint01_2', 'PointFromFortress': 'WarpPoint01_1', 'LookAround': True, 'LookAroundAnim': 'EvtLookAround'})

            goto Event29
        }
    }
}

void HountedWasteland_Field_RestartToCheckpoint() {
    goto Event52
}

void HountedWasteland_Reset_Guide() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GuidePoe_IsGuiding', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGuiding', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing', 'Index': -1, 'Value': True})
        Event38:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_Disappear'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ApproachedGoal'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_IsGoalandRestart', 'Value': True})
                Event32:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                SoundSystemActor.EventTriggerSoundSetWastelandRatioTargetZero()
                EventWorldManagerController.Event_ClearHountedWastelandOutAreaTimeRatio({'IsWaitEnd': True})
                EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            } else {

                fork {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_Disappear', 'Value': False})
                } {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GuidePoe_IsTookGoalAction'})
                }

                Event8:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GuidePoe_HaveSeen'}) {
                    Npc_GuidePoe_Adult.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'AnchorType': 4, 'ClothWarpMode': -1})
                }
                goto Event32
            }
        } else
        goto Event8
    } else
    goto Event38
}

void HountedWasteLand_Restart_Navi() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ArrivedFromColossus'}) {
        Event1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_HaveTalkedNaviMessage'}) {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 450})
        } else {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 449})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_HaveTalkedNaviMessage', 'Index': -1, 'Value': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_GuidePoe_Adult_IsMissing'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_RestartedOnce'}) {
            goto Event1
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ApproachedGoal'}) {
            goto Event1
        } else {

            call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/HountedWasteland_Field_Restart:Talk_00'})

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/HountedWasteland_Field_Restart:Talk_01', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_RestartedOnce', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_HaveTalkedNaviMessage', 'Index': -1, 'Value': True})
        }
    } else
    goto Event1
}

void WarpPointCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ArrivedFromColossus'}) {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'AnchorAction1', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PointFromColossus'})
    } else {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'AnchorAction1', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PointFromFortress'})
    }
}

void MoveEntrance() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.140000104904175, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {

        call HountedWasteland_Reset_Guide()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ArrivedFromColossus'}) {
            Player_Event.EventPlayerMoveToOffsetAnchor({'AnchorActorName': 'AnchorAction1', 'MoveSpeed': 1.0, 'IsOffsetBasedOnAnchorDir': True, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsWaitEnd': True, 'DecSpeedDistance': 3.0, 'Offset': [0.0, 0.0, 4.0], 'AnchorInstanceName': 'PointFromColossus', 'FinishASCommand': 'LookAroundAnim'})
        } else {
            Player_Event.EventPlayerMoveToOffsetAnchor({'AnchorActorName': 'AnchorAction1', 'MoveSpeed': 1.0, 'IsOffsetBasedOnAnchorDir': True, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsWaitEnd': True, 'DecSpeedDistance': 3.0, 'Offset': [0.0, 0.0, 4.0], 'AnchorInstanceName': 'PointFromFortress', 'FinishASCommand': 'LookAroundAnim'})
        }
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'LookAround'}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'ForceFadeFrame': 25.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
    }
}
