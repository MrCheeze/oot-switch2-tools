-------- EventFlow: Dm_SY_Get --------

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventTriggerAddOwnToPouch', 'EventTriggerSetOwnNameToMessage', 'EventTriggerGetFirstExpansionMaxNumActor', 'EventGoOffstageForUser', 'EventTriggerInvalidateShadow', 'EventTriggerRequestDeath', 'EventTriggerSetModelVisible', 'EventTriggerPlayerNoHit', 'EventTriggerModelBindForItemGetDemo', 'EventPlayAS', 'EventTriggerSetModelLodManual']
queries: ['EventQueryCheckTagOnPouchActor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryPlayerCameraIsEventAfterConnecting', 'EventQueryCameraCheckRayCastForBasedOnLookAt', 'EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithClimb', 'EventPlayerWaitStabilityInWater', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventTriggerPlayerFadeVoice']
queries: ['EventQueryPlayerIsChild', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Get/Dm_SY_Get_EK_Link/workspace.pp__ModelProject.gyml', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenPickUpWindow', 'EventTriggerSetDisplayHeartGauge', 'EventStartRecoverOrAddHeartGauge', 'EventTriggerReserveRecoverOrAddHeartGauge', 'EventTriggerSetDisplaySmallKey', 'EventTriggerReserveBornMPGauge', 'EventBornMPGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRecoverByCureItem', 'EventTriggerRecoverByCureItemForShop']
queries: ['EventQueryIsAutoSavePouchContent', 'EventQueryIsMaxLifeUpPouchContent', 'EventQueryIsHeartPiece', 'EventQueryIsSmallKey', 'EventQueryPouchContentGetType', 'EventQueryIsRecoverHeartOrMpActor', 'EventQueryIsExistInPouch', 'EventQueryIsFairy']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviTreasureboxSmall', 'EventNaviChangeAttentionTypeToNone']
queries: ['EventQueryNaviAttentionType']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Get/Dm_SY_Get/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Get.root.as', 'EventMemberCreateMethod': 2}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem', 'EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchContentGuestPerformer[Default_Get(Actor)]
entrypoint: Default_Get(Actor)
actions: []
queries: []
params: None

Actor: PouchContentGuestPerformer[GetDisplayProcess(Actor)]
entrypoint: GetDisplayProcess(Actor)
actions: []
queries: []
params: None

void Dm_SY_Get() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerFadeVoice()

    fork {
        if Player_Event.EventQueryCheckPlayerState({'State': 2}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                Event118:
                PouchContentGuestPerformer.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
                goto Event118
            }
        }
    } {
        Player_Event.EventTriggerPlayerEventStartWithClimb()
    }

    if Player_Event.EventQueryCheckPlayerState({'State': 0}) {

        fork {
            Player_Event.EventPlayerWaitStabilityInWater({'IsWaitEnd': True})
        } {
            PouchContentGuestPerformer.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    }

    call Common.AirStartUp()

    Npc_Navi.EventNaviChangeAttentionTypeToNone({'IsWaitEnd': True})
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                Event184:

                call Dm_SY_Get_WithoutPlayer.Dm_SY_Get_WithoutPlayer({'ActorName': 'ActorName'})

                if Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': True})
                }
                if PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() == 3 {

                    call GoldTokenFirstTime()

                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
                Event91:
                switchcall IsCameraHit({'ActorName': 'ActorName'}) {
                  case 1700614218:
                    goto Event184
                  case 576506075:
                    switchcall IsSpace() {
                      case 2849390305:

                        call Default_Get({'ActorName': 'ActorName', 'Actor': ActorIdentifier(name="PouchContentGuestPerformer")})


                        call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

                        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                            PouchContentGuestPerformer.EventTriggerRequestDeath({'DeathReason': 10})
                        }
                        switch PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() {
                          case [0, 2, 3]:
                            Event155:
                            EventEffectEmitter.EventEffectStopGetItem()
                            if !PouchSystemActor.EventQueryIsAutoSavePouchContent({'ActorName': 'ActorName'}) {
                                GameSystemActor.EventTriggerRequestAutoSave()
                            }
                            if PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() == 3 {

                                call GoldTokenFirstTime()

                            }
                          case 1:

                            call SubEvent_GetFireArrow.GetFireArrow()

                            goto Event155
                          case 4:

                            call CheckHeart({'ActorName': 'ActorName'})

                            goto Event155
                        }
                      case 1700614218:
                        goto Event184
                    }
                }
            } else {
                goto Event184
            }
        } else {
            goto Event91
        }
    } else {
        goto Event184
    }
}

void Default_Get() {
    PouchContentGuestPerformer.EventTriggerSetModelLodManual({'LodLevel': 0})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        if !EventCamera.EventQueryPlayerCameraIsEventAfterConnecting() {

            fork {
                PouchContentGuestPerformer.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

                call GetDisplayProcess({'Actor': ActorIdentifier(name="PouchContentGuestPerformer"), 'ActorName': 'ActorName'})

            } {

                call Dm_SY_Get_Camera({'ActorName': 'ActorName'})

            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
            }

        } else {

            fork {
                PouchContentGuestPerformer.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

                call GetDisplayProcess({'Actor': ActorIdentifier(name="PouchContentGuestPerformer"), 'ActorName': 'ActorName'})

            } {

                call Dm_SY_Get_Camera({'ActorName': 'ActorName'})

            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
                SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
            }

        }
    } {
        if !Npc_Navi.EventQueryNaviAttentionType() {
            switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
              case 0:
                Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
              case [1, 2, 3]:

                call Navi_GetBig()

            }
        }
    }

}

void PouchAddItem() {
    PouchContentGuestPerformer.EventTriggerSetOwnNameToMessage()

    call GetPouchContent.OpenGetWindow()

    switch PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() {
      case 0:

        call Get_StoneOfWater.StoneOfWater_GetRutoletter()

        Event39:
        PouchContentGuestPerformer.EventTriggerGetFirstExpansionMaxNumActor()
        PouchContentGuestPerformer.EventTriggerAddOwnToPouch()
        switch PouchContentGuestPerformer.EventQueryCheckTagOnPouchActor() {
          case [0, 2, 3, 4]:
            Event45:
            UISystemActor.EventTriggerRequestOpenPickUpWindow({'ActorName': 'ActorName'})
            EventSystemActor[0].EventWait({'Frames': 1, 'IsWaitEnd': True})

            call MaskNaviReaction()

          case 1:

            call MPOpen()

            goto Event45
        }
      case [1, 2, 3, 4]:
        goto Event39
    }
}

void GoldTokenFirstTime() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 1}) {
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_NpcSkullDad_IsAfterFirstTalk_Adult'}) {
            Event108:
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 200})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_NpcSkullDad_IsAfterFirstTalk_Child'}) {
            goto Event108
        } else {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 199})
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_NpcSkullDad_IsAfterFirstTalk_Adult'}) {
            Event132:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 10}) {
              case 1:
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 214})
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 20}) {
                  case 1:
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 215})
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 30}) {
                      case 1:
                        Npc_Navi.EventNaviRequestBallonMessage({'Index': 216})
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 40}) {
                          case 1:
                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 217})
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 50}) {
                              case 1:
                                Npc_Navi.EventNaviRequestBallonMessage({'Index': 218})
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 60}) {
                                  case 1:
                                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 491})
                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 70}) {
                                      case 1:
                                        Npc_Navi.EventNaviRequestBallonMessage({'Index': 492})
                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 80}) {
                                          case 1:
                                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 493})
                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 90}) {
                                              case 1:
                                                Npc_Navi.EventNaviRequestBallonMessage({'Index': 494})
                                              case 2:
                                                if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PouchData.Item_Token_Gold.StockNum', 'Value': 100}) {
                                                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 219})
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_NpcSkullDad_IsAfterFirstTalk_Child'}) {
            goto Event132
        }
    }
}

void GetDisplayProcess() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        PouchContentGuestPerformer.EventTriggerPlayerNoHit()
        PouchContentGuestPerformer.EventTriggerModelBindForItemGetDemo({'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        PouchContentGuestPerformer.EventTriggerSetModelVisible()
        PouchContentGuestPerformer.EventPlayAS({'ASName': 'Rotate_GetDemo', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        PouchContentGuestPerformer.EventTriggerInvalidateShadow()
        EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'ActorName': 'ActorName', 'IsBottleDemo': False})

        call PouchAddItem({'ActorName': 'ActorName'})

        if !PouchSystemActor.EventQueryIsSmallKey({'ActorName': 'ActorName'}) {
            UISystemActor.EventTriggerSetDisplaySmallKey({'IsDisplaySmallKey': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        }
    } {

        call Dm_SY_TreasureboxSmall.GetAnimationAction({'ContentName': 'ActorName'})

    }

}

void Dm_SY_Get_Camera() {
    switchcall JudgeCamera({'ActorName': 'ActorName'}) {
      case 930832260:

        fork {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Player_Event', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 180.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'MoveTime': 15, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYUpwardAngle': 12.0, 'ToleranceYDownwardAngle': 11.0, 'IdealDistance': 2.0, 'LookAtVectorXZ': 0})
        } {

            call ChildDoF()

        }

      case 3429043805:

        fork {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Player_Event', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 180.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'MoveTime': 15, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYUpwardAngle': 28.0, 'ToleranceYDownwardAngle': 27.0, 'IdealDistance': 1.75, 'LookAtVectorXZ': 0})
        } {

            call ChildDoF()

        }

      case [592415646, 3910665419]:

        fork {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Player_Event', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': '', 'CameraCollisionMode': 1, 'MoveTime': 15, 'ToleranceXZAngle': 180.0, 'IdealDistance': 1.75, 'ToleranceYUpwardAngle': 28.0, 'ToleranceYDownwardAngle': 27.0, 'TargetOffset': [0.0, 1.6799999475479126, 0.0], 'LookAtVectorXZ': 0})
        } {

            call AdultDoF()

        }

    }
}

void JudgeCamera() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
          case 0:
            return 930832260
          case [1, 2, 3]:
            return 3429043805
        }
    } else
    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
      case 0:
        return 592415646
      case [1, 2, 3]:
        return 3910665419
    }
}

void IsCameraHit() {
    switchcall JudgeCamera({'ActorName': 'ActorName'}) {
      case 930832260:
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorLink': 'Player_Event', 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'IdealDistance': 2.0, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 180.0, 'ToleranceYUpwardAngle': 12.0, 'ToleranceYDownwardAngle': 11.0}) {
            Event88:
            return 1700614218
        } else {
            Event90:
            return 576506075
        }
      case 3429043805:
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorLink': 'Player_Event', 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'IdealDistance': 1.75, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 180.0, 'ToleranceYUpwardAngle': 28.0, 'ToleranceYDownwardAngle': 27.0}) {
            goto Event88
        } else {
            goto Event90
        }
      case 592415646:
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorLink': 'Player_Event', 'TargetOffset': [0.0, 1.6799999475479126, 0.0], 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 180.0, 'ToleranceYUpwardAngle': 13.0, 'ToleranceYDownwardAngle': 12.0, 'IdealDistance': 1.75}) {
            goto Event88
        } else {
            goto Event90
        }
      case 3910665419:
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorLink': 'Player_Event', 'IdealDistance': 1.75, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 180.0, 'ToleranceYUpwardAngle': 28.0, 'ToleranceYDownwardAngle': 27.0, 'TargetOffset': [0.0, 1.6799999475479126, 0.0]}) {
            goto Event88
        } else {
            goto Event90
        }
    }
}

void ChildDoF() {
    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 20, 'EndFNumber': 60.0, 'EndBluarLevel': 1.0, 'IsAutoFocalDist': False, 'EndDistance': 2.4000000953674316})
}

void AdultDoF() {
    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 20, 'EndFNumber': 30.0, 'EndBluarLevel': 1.0, 'IsAutoFocalDist': False, 'EndDistance': 2.4000000953674316})
}

void CheckHeart() {
    if !PouchSystemActor.EventQueryIsMaxLifeUpPouchContent({'ActorName': 'ActorName'}) {
        Event156:
        UISystemActor.EventTriggerReserveRecoverOrAddHeartGauge()
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Event103:
        PouchSystemActor.EventTriggerRecoverByCureItem({'ActorName': 'ActorName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})

        fork {
            UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
        } {
            if !PouchSystemActor.EventQueryIsMaxLifeUpPouchContent({'ActorName': 'ActorName'}) {
                Event127:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            } else
            if !PouchSystemActor.EventQueryIsHeartPiece({'ActorName': 'ActorName'}) {
                goto Event127
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            }
        }

    } else
    if !PouchSystemActor.EventQueryIsHeartPiece({'ActorName': 'ActorName'}) {
        goto Event156
    } else
    if PouchSystemActor.EventQueryIsFairy({'ActorName': 'ActorName'})
    && !PouchSystemActor.EventQueryIsRecoverHeartOrMpActor({'ActorName': 'ActorName'}) {
        UISystemActor.EventTriggerReserveRecoverOrAddHeartGauge()
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        goto Event103
    }
}

void Navi_GetBig() {
    Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': True, 'ArrivedEmotionType': 1})
}

void MaskNaviReaction() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Amiibo1', 'Num': 1}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 408})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Child_Mask_Amiibo0'}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 409})
    }
}

void CheckHeart_Shop() {
    UISystemActor.EventTriggerReserveRecoverOrAddHeartGauge()
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    PouchSystemActor.EventTriggerRecoverByCureItemForShop({'GameDataForActorName': 'GameDataName'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})

    fork {
        UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    }

}

void IsSpace() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableCameraBodyCheck': False, 'VectorSetType2': 3, 'Vector1': [0.0, 0.0, 0.0], 'ActorName1': 'PlayerCamera', 'ActorName2': 'Player_Event', 'SpaceCheckRadius': 0.1899999976158142, 'Vector2': [0.0, 1.5, 0.0], 'IsConsiderWater': False}) {
            Event92:
            return 1700614218
        } else {
            Event113:
            return 2849390305
        }
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableCameraBodyCheck': False, 'VectorSetType2': 3, 'Vector1': [0.0, 0.0, 0.0], 'ActorName1': 'PlayerCamera', 'ActorName2': 'Player_Event', 'SpaceCheckRadius': 0.30000001192092896, 'Vector2': [0.0, 1.899999976158142, 0.0], 'IsConsiderWater': False}) {
        goto Event92
    } else {
        goto Event113
    }
}

void MPOpen() {
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayerStatus.MPMax', 'Value': 0, 'Index': -1}) in [0, 1] {
        UISystemActor.EventTriggerReserveBornMPGauge()
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 100})
        UISystemActor.EventBornMPGauge({'IsWaitEnd': True})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}
