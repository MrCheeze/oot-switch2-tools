-------- EventFlow: WarpEvent --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[01]
entrypoint: None()
actions: ['EventSetFaroreWindPoint', 'EventReserveBancChangeForFaroreWind', 'EventWait', 'EventFaroreWindEmitStartEffect']
queries: ['EventQueryCanUseFaroreWind', 'EventQueryHasFaroreWindPoint', 'EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsForbidSetWarpPoint']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenSimpleInfo', 'EventTriggerSetDisplayHeartGauge', 'EventEventFadeOut', 'EventTriggerOpenCurrentSmallLocationUI', 'EventTriggerRequestOpenVanishExchangeItemSimpleInfo', 'EventTriggerRequestOpenLoseRunningRaceSimpleInfo']
queries: ['EventQueryIsRequestLoseRunningRaceAfterBancChanged', 'EventQueryIsRequestVanishExchangeItemAfterBancChanged']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerUseFaroreWind', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpVanish', 'EventTriggerPlayerSetInvincibleAfterFaroreWind', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsEnoughMPFaroreWindWarp', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerReserveNotRebootPlayerCameraAI', 'EventTriggerCameraSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundSetFaroreInfo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveAtActor', 'EventGoOffstageForUser', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait', 'EventTriggerFaroreWindSetActorPos']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[arrive]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vib]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[Navi]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void FaroreWind() {
    Player_Event.EventTriggerParticipateEvent()
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_ReEnter', 'Value': False, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    switch GameSystemActor[01].EventQueryHasFaroreWindPoint() {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_ReEnter', 'Index': -1}) {
            Event10:
            SystemTextNPC.EventTalk({'ChoiceNumber': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_02', 'MaintainPerformanceState': 0})
            switch GameSystemActor[01].EventQueryTalkChoice3() {
              case 0:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})
                if !GameSystemActor[01].EventQueryCanUseFaroreWind() {
                    switchcall SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Warp({'IsFaroreWind': True}) {
                      case 1303515621:
                        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence', 'Index': -1}) {
                            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_66', 'ChoiceLabel1': 13, 'ChoiceLabel2': 14})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event27:

                                call FaroreWind_Warp()

                            }
                        } else {
                            goto Event27
                        }
                    }
                } else {

                    call DisableWarp()

                }
              case 1:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})

                call FaroreWind_SetWarpPoint({'Position': 'Pos', 'YRad': 'YRad'})

                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'ActorName1': 'PlayerCamera', 'Vector1': [0.0, 0.0, 0.0], 'IsConsiderWater': False, 'Vector2': [0.0, 0.5, 0.0]}) {
                    EventCamera.EventTriggerReserveNotRebootPlayerCameraAI()
                }
              case 2:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})

                call Stop()

            }
        } else
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {

                call CheckCameraSetWarpChild()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        } else {

            fork {

                call CheckCameraSetWarpAdult()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': True})
        goto Event10
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_ReEnter', 'Index': -1}) {
            Event53:
            SystemTextNPC.EventTalk({'ChoiceNumber': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_02', 'MaintainPerformanceState': 0})
            switch GameSystemActor[01].EventQueryTalkChoice3() {
              case 0:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})

                call DisableWarpToAnotherEra()

              case 1:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})

                call FaroreWind_SetWarpPoint({'Position': 'Pos', 'YRad': 'YRad'})

              case 2:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': False})

                call Stop()

            }
        } else
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {

                call CheckCameraSetWarpChild()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        } else {

            fork {

                call CheckCameraSetWarpAdult()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsMPBeforeUse', 'Index': -1, 'Value': True})
        goto Event53
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_ReEnter', 'Index': -1}) {
            Event9:
            SystemTextNPC.EventTalk({'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_00', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_FirstTime', 'Index': -1, 'Value': True})
            if !GameSystemActor[01].EventQueryTalkChoice2() {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'ActorName1': 'PlayerCamera', 'Vector1': [0.0, 0.0, 0.0], 'IsConsiderWater': False, 'Vector2': [0.0, 0.5, 0.0]}) {
                    EventCamera.EventTriggerReserveNotRebootPlayerCameraAI()
                }

                call FaroreWind_SetWarpPoint({'Position': 'Pos', 'YRad': 'YRad'})

            } else {

                call Stop()

            }
        } else
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {

                call CheckCameraSetWarpChild()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        } else {

            fork {

                call CheckCameraSetWarpAdult()

            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoStartFaroreWind', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
            }

        }
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WarpPoint_FaoreWind_FirstTime', 'Index': -1}) {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_07', 'ChoiceNumber': 0, 'ChoiceLabel2': 0})
        }
        goto Event9
    }
}

void FaroreWind_SetWarpPoint() {
    switch GameSystemActor[01].EventQueryIsForbidSetWarpPoint() {
      case 0:

        call DisableSetWarpPoint()

      case 1:

        call DisableSetWarpPointDungeon()

      case 2:
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})

        fork {
            if !Player_Event.EventQueryPlayerIsChild() {

                fork {

                    call CheckCameraCastChild()

                } {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'DemoEndFaroreWindSetting', 'ClothWarpMode': 0, 'IsAllSlot': True})
                } {
                    GameSystemActor[vib].EventWait({'IsWaitEnd': True, 'Frames': 230})
                    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
                }

            } else {

                fork {

                    call CheckCameraCastAdult()

                } {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'DemoEndFaroreWindSetting', 'ClothWarpMode': 0, 'IsAllSlot': True})
                } {
                    GameSystemActor[vib].EventWait({'IsWaitEnd': True, 'Frames': 230})
                    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
                }

            }
        } {
            GameSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 165})
            GameSystemActor[01].EventSetFaroreWindPoint({'IsWaitEnd': True, 'Position': 'Position', 'YRad': 'YRad'})
            GameSystemActor[01].EventFaroreWindEmitStartEffect({'IsWaitEnd': True, 'IsSwitchArriveEffect': False, 'Position': 'Position', 'YRad': 'YRad'})
        }

    }
}

void FaroreWind_Warp() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    if !Player_Event.EventQueryPlayerIsEnoughMPFaroreWindWarp() {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {

                call CheckCameraCastChild()

            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
                Npc_Navi.EventNaviMoveAtActor({'LookAtOffsetBase': 1, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'TargetOffset': [0.0, 0.0, 0.0], 'IsTargetNaviAttentionPos': False, 'ASCommand': '', 'TargetActorName': 'Dm_Locator', 'TargetInstanceName': '', 'IsTurnLooking': True, 'IsWaitEnd': False, 'IsLookAtObject': True, 'LookAtTarget': 2, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
                Npc_Navi.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
            } {
                Dm_Locator.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'PositionOffset': [0.0, 0.75, -0.10000000149011612]})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MapIconDeactivateByAreaActor'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
                Player_Event.EventPlayerUseFaroreWind({'IsWarp': True, 'MiddleASKeyName': '', 'EndASKeyName': '', 'MiddleASViewingFrame': 0.0, 'StartASKeyName': 'DemoEndFaroreWind', 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

                fork {
                    Player_Event.EventPlayerWarpVanish({'IsFarore': True, 'IsWaitEnd': True, 'IsReverse': False, 'Frame': 100.0})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
                } {
                    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
                }

            }

            GameSystemActor[01].EventReserveBancChangeForFaroreWind({'IsWaitEnd': True, 'BootEventName': 'FaroreWindArrive', 'FadePattern': 2})
        } else {

            fork {

                call CheckCameraCastAdult()

            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
                Npc_Navi.EventNaviMoveAtActor({'LookAtOffsetBase': 1, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsUseDisguiseSpeakerPos': False, 'TargetOffset': [0.0, 0.0, 0.0], 'IsTargetNaviAttentionPos': False, 'ASCommand': '', 'TargetActorName': 'Dm_Locator', 'TargetInstanceName': '', 'IsTurnLooking': True, 'IsWaitEnd': False, 'LookAtTarget': 2, 'IsLookAtObject': True, 'OverwriteRotNearDist': -1.0, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
                Npc_Navi.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
            } {
                Dm_Locator.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'PositionOffset': [0.0, 1.2000000476837158, -0.10000000149011612]})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MapIconDeactivateByAreaActor'})
                Player_Event.EventPlayerUseFaroreWind({'IsWarp': True, 'MiddleASKeyName': '', 'EndASKeyName': '', 'MiddleASViewingFrame': 0.0, 'StartASKeyName': 'DemoEndFaroreWind', 'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

                fork {
                    Player_Event.EventPlayerWarpVanish({'IsFarore': True, 'IsWaitEnd': True, 'IsReverse': False, 'Frame': 100.0})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
                } {
                    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
                }

            }

            GameSystemActor[01].EventReserveBancChangeForFaroreWind({'IsWaitEnd': True, 'BootEventName': 'FaroreWindArrive', 'FadePattern': 2})
        }
    } else {
        UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 14})

        call Stop()

    }
}

void FaroreWind_Arrive() {
    GameSystemActor.EventTriggerFaroreWindSetActorPos()

    fork {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoFaroreWindWarp', 'ClothWarpMode': 0, 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False})

            fork {
                Player_Event.EventPlayerWarpVanish({'IsFarore': True, 'IsReverse': True, 'IsWaitEnd': True, 'Frame': 50.0})
            } {
                GameSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
                GameSystemActor[01].EventFaroreWindEmitStartEffect({'IsSwitchArriveEffect': True, 'IsWaitEnd': True, 'Position': [0.0, 0.0, 0.0], 'YRad': 0.0})
            }

        } {
            EventSystemActor[arrive].EventWait({'IsWaitEnd': True, 'Frames': 95})
        }

    } {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [-0.07999999821186066, 1.809999942779541, 3.450000047683716]}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.6399999856948853, 1.809999942779541, -3.390000104904175], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.07999999821186066, 1.809999942779541, 3.450000047683716], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
                }
            } {
                Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'PositionOffset': [0.0, 0.8500000238418579, -0.10000000149011612]})
                Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                EventSystemActor[Navi].EventWait({'IsWaitEnd': True, 'Frames': 35})
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            }

        } else {

            fork {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.10000000149011612, 1.850000023841858, 3.9800000190734863]}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.28999999165534973, 2.0799999237060547, -3.950000047683716], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.10000000149011612, 1.850000023841858, 3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'IsEnableRevertFast': False})
                }
            } {
                Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'PositionOffset': [0.0, 1.399999976158142, -0.10000000149011612]})
                Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                EventSystemActor[Navi].EventWait({'IsWaitEnd': True, 'Frames': 35})
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            }

        }
    } {
        SoundSystemActor.EventTriggerSoundSetFaroreInfo()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventTriggerOpenCurrentSmallLocationUI()
    }

    Player_Event.EventTriggerPlayerSetInvincibleAfterFaroreWind()
    if !UISystemActor.EventQueryIsRequestLoseRunningRaceAfterBancChanged() {
        UISystemActor.EventTriggerRequestOpenLoseRunningRaceSimpleInfo()
    }
    if !UISystemActor.EventQueryIsRequestVanishExchangeItemAfterBancChanged() {
        UISystemActor.EventTriggerRequestOpenVanishExchangeItemSimpleInfo()
    }
}

void DisableWarp() {

    call DisableWarpActing()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_05', 'ChoiceNumber': 0})
    Event231:
    GameSystemActor[vib].EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void DisableWarpToAnotherEra() {

    call DisableWarpActing()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_06', 'ChoiceNumber': 0})
    goto Event231
}

void DisableSetWarpPoint() {

    call DisableWarpActing()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_03', 'ChoiceNumber': 0})
}

void DisableSetWarpPointDungeon() {

    call DisableWarpActing()

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 1, 'ChoiceLabel3': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/WarpEvent:Talk_04', 'ChoiceNumber': 0})
    goto Event231
}

void CheckCameraSetWarpChild() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [1.0700000524520874, 0.7400000095367432, 1.9500000476837158]}) {
        Event45:
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [1.0700000524520874, 0.7400000095367432, 1.9500000476837158], 'Vector2': [0.41999998688697815, 0.6499999761581421, 0.8399999737739563]}) {
        goto Event45
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'FovySetType': 0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.0700000524520874, 0.7400000095367432, 1.9500000476837158], 'AtVector': [0.41999998688697815, 0.6499999761581421, 0.8399999737739563], 'TargetFovy': 41.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    }
}

void CheckCameraSetWarpAdult() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.949999988079071, 0.9900000095367432, 2.5999999046325684]}) {
        Event62:
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [0.949999988079071, 0.9900000095367432, 2.5999999046325684], 'Vector2': [0.3100000023841858, 0.9100000262260437, 0.9399999976158142]}) {
        goto Event62
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'FovySetType': 0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 41.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.949999988079071, 0.9900000095367432, 2.5999999046325684], 'AtVector': [0.3100000023841858, 0.9100000262260437, 0.9399999976158142], 'IsEnableRevertFast': False})
    }
}

void CheckCameraCastChild() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.019999999552965164, 0.9200000166893005, 2.2200000286102295]}) {
        Event71:
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [-0.019999999552965164, 0.9200000166893005, 2.2200000286102295], 'Vector2': [0.019999999552965164, 0.8999999761581421, 0.2199999988079071]}) {
        goto Event71
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'FovySetType': 0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-0.019999999552965164, 0.9200000166893005, 2.2200000286102295], 'AtVector': [0.019999999552965164, 0.8999999761581421, 0.2199999988079071], 'IsEnableRevertFast': False})
    }
}

void CheckCameraCastAdult() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [-0.019999999552965164, 1.190000057220459, 2.950000047683716]}) {
        Event86:
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [-0.019999999552965164, 1.190000057220459, 2.950000047683716], 'Vector2': [0.029999999329447746, 1.340000033378601, 0.27000001072883606]}) {
        goto Event86
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'FovySetType': 0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.029999999329447746, 1.340000033378601, 0.27000001072883606], 'PosVector': [-0.019999999552965164, 1.190000057220459, 2.950000047683716], 'IsEnableRevertFast': False})
    }
}

void DisableWarpActing() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [-0.10000000149011612, 0.6499999761581421, 1.7000000476837158]}) {
                Event269:
                DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
            } else
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [-0.10000000149011612, 0.6499999761581421, 1.7000000476837158], 'Vector2': [0.0, 0.6000000238418579, 0.0]}) {
                goto Event269
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveTime': 30, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 0.6000000238418579, 0.0], 'PosVector': [-0.10000000149011612, 0.6499999761581421, 1.7000000476837158], 'IsEnableRevertFast': False})
            }
        } {
            GameSystemActor[vib].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 60.0})
            Dm_Locator.EventTriggerParticipateEvent()
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    } else {

        fork {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.0, 0.8100000023841858, 1.899999976158142]}) {
                Event259:
                DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
            } else
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False, 'Vector1': [0.0, 0.9100000262260437, 1.899999976158142], 'Vector2': [0.0, 1.100000023841858, 0.0]}) {
                goto Event259
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveTime': 30, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.8100000023841858, 1.899999976158142], 'AtVector': [0.0, 1.100000023841858, 0.0], 'IsEnableRevertFast': False})
            }
        } {
            GameSystemActor[vib].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ClothWarpMode': 0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 60.0})
            Dm_Locator.EventTriggerParticipateEvent()
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Dm_Locator', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    }
}

void Stop() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'ActorName1': 'PlayerCamera', 'Vector1': [0.0, 0.0, 0.0], 'IsConsiderWater': False, 'Vector2': [0.0, 0.5, 0.0]}) {
        EventCamera.EventTriggerReserveNotRebootPlayerCameraAI()
    }
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoFaroreWindCancel', 'ClothWarpMode': 0, 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
