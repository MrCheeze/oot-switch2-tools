-------- EventFlow: Dm_SY_ShopGet --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataString64']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerDisplayBottleInShop']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerUnvisibleItemAtShop', 'EventTriggerShopItemGetDemoStart', 'EventTriggerSetHavePlayedGetEventAtShopFlag']
queries: ['EventQueryCheckShopSelectItemName']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[back]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryPouchContentGetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventNaviTreasureboxSmall', 'EventTriggerSetModelAlpha', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void ShopGet() {

    call ShopGet_Common()


    call ShopGet_Common_EndProcess()

}

void ShopGet_HappyMaskShopOnly() {

    call ShopGet_Common()


    call ShopGet_Common_EndProcess()

}

void ShopGet_Common() {

    fork {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'PositionOffset': [0.0, 1.5, 2.0], 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        Dm_Locator[back].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 1.5, -2.0], 'ClothWarpMode': -1})
    }

    Npc_EventStarter.EventTriggerUnvisibleItemAtShop()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
      case [0, 1, 2, 3, 4, 6, 7, 8]:
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Event18:

        fork {
            if !Player_Event.EventQueryPlayerIsChild() {
                switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
                  case [0, 1, 2, 3, 4, 6, 7, 8]:
                    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': 'Shop_SelectItemName', 'ActorName': ''}) {
                      case 0:

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.019999999552965164, 1.6200000047683716, 1.9600000381469727], 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        } {
                            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
                            Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
                        }

                      case [1, 2, 3]:

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.9800000190734863, 1.5800000429153442], 'AtVector': [0.0, 1.0700000524520874, -0.1599999964237213], 'TargetFovy': 44.40999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        } {
                            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})

                            call Navi_GetBig_ShopGet()

                        }

                    }
                  case 5:

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.6299999952316284, 1.659999966621399, 0.3400000035762787], 'AtVector': [0.11999999731779099, 0.8799999952316284, -0.07000000029802322], 'TargetFovy': 41.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    } {
                        Npc_Navi.EventNaviWarpToPlayerHomePosition({'Target': 1, 'IsNearOffset': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Npc_EventStarter', 'IsDisguisedPlayerPos': False, 'Type': 2, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0]})
                        Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
                    }

                }
            } else
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case [0, 1, 2, 3, 4, 6, 7, 8]:
                switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': 'Shop_SelectItemName', 'ActorName': ''}) {
                  case 0:

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.019999999552965164, 2.6600000858306885, 1.7100000381469727], 'TargetFovy': 41.709999084472656, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.4600000381469727, -0.38999998569488525], 'IsEnableRevertFast': False})
                    } {
                        Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
                        Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
                    }

                  case [1, 2, 3]:

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.019999999552965164, 2.6600000858306885, 1.7100000381469727], 'TargetFovy': 41.709999084472656, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.4600000381469727, -0.38999998569488525], 'IsEnableRevertFast': False})
                    } {
                        Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})

                        call Navi_GetBig_ShopGet()

                    }

                }
              case 5:

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.7900000214576721, 2.390000104904175, 0.3100000023841858], 'AtVector': [0.25999999046325684, 1.4600000381469727, -0.12999999523162842], 'TargetFovy': 38.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'Target': 1, 'IsNearOffset': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Npc_EventStarter', 'IsDisguisedPlayerPos': False, 'Type': 2, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0]})
                    Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
                }

            }
        } {
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case [0, 1, 2, 3, 4, 6, 7, 8]:
                switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': 'Shop_SelectItemName', 'ActorName': ''}) {
                  case 0:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoGet', 'IsAllSlot': True, 'ClothWarpMode': 0})
                  case [1, 2, 3]:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ClothWarpMode': 0})
                }
              case 5:
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
                Player_Event.EventPlayerDisplayBottleInShop({'IsWaitEnd': True, 'ActorName': ''})
            }
        } {
            switch Npc_EventStarter.EventQueryCheckShopSelectItemName() {
              case [0, 1, 2, 3, 4, 6, 7, 8]:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 39})

                fork {
                    Npc_EventStarter.EventTriggerShopItemGetDemoStart()
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

                    fork {
                        SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': 'Shop_SelectItemName', 'ActorName': '', 'IsEnableIntro': False})
                    } {
                        EventEffectEmitter.EventEffectStartGetItem({'GameDataName': 'Shop_SelectItemName', 'ActorName': '', 'IsBottleDemo': False})
                    }

                }

              case 5:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 32})

                fork {
                    EventEffectEmitter.EventEffectStartGetItem({'GameDataName': 'Shop_SelectItemName', 'ActorName': '', 'IsBottleDemo': True})
                } {
                    SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': 'Shop_SelectItemName', 'ActorName': '', 'IsEnableIntro': False})
                }

            }
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'StartFNumber': 25.0, 'EndFNumber': 25.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'StartBluarLevel': 0.0, 'EndDistance': 2.0, 'StartDistance': 2.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'Shop_SelectItemName', 'DstGameDataName': 'UI_MessageTargetActorName', 'Index': -1, 'SrcIndex': -1})

        call GetPouchContent.OpenGetWindow()

        Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
      case 5:
        goto Event18
    }
}

void ShopGet_SoldOut() {

    call ShopGet_Common()


    call ShopGet_Common_EndProcess_SoldOut()

}

void ShopGet_Common_EndProcess() {
    Npc_EventStarter.EventTriggerSetHavePlayedGetEventAtShopFlag()
}

void ShopGet_Common_EndProcess_SoldOut() {
    Npc_EventStarter.EventTriggerSetHavePlayedGetEventAtShopFlag()
}

void Navi_GetBig_ShopGet() {
    Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': True, 'ArrivedEmotionType': 1})
}
