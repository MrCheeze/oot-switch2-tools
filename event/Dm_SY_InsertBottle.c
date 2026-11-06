-------- EventFlow: Dm_SY_InsertBottle --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerDisplayBottle', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerPlayASForFlowchart', 'EventPlayerInsertBottleImmediately', 'EventPlayerDrawnShieldAfterUseBottle', 'EventTriggerPlayerStopUpdateSelectedItem', 'EventTriggerPlayerStartUpdateSelectedItem']
queries: ['EventQueryPlayerIsChild', 'EventQueryGetBottleContent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerPushToEmptyBottle', 'EventTriggerSetHavePlayedGetEvent', 'EventTriggerSetBottleForGetWindow']
queries: ['EventQueryGetHavePlayedGetEvent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Fish
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Bug
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[bottle]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_BlueFire
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_BigPoe
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Poe
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Fairy
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[sound_effect]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[UI]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsObtainedSpiritBigPoeCount']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem', 'EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[camera_block]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[block]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventTriggerAttentionOffClientAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    PouchSystemActor.EventTriggerSetBottleForGetWindow({'Item': 'BottleItem'})
    PouchContentGuestPerformer.EventTriggerAttentionOffClientAll()
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !PouchSystemActor.EventQueryGetHavePlayedGetEvent() {
        PouchSystemActor.EventTriggerPushToEmptyBottle({'IsSetMessageTargetActorName': True, 'IsPushToSelectedBottle': True, 'Item': 'BottleItem', 'BigPoeFenceId': 'BigPoeFenceId'})

        fork {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call GetPouchContent.PushToSelectedBottle({'Item': 'BottleItem'})

        } {
            Player_Event.EventPlayerInsertBottleImmediately({'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoInsertBottle-Short', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 25.0})
            Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
        }

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call Market_Item_Bottle_TutorialEvent_ClearFlow()

        if Player_Event.EventQueryGetBottleContent() == 8
        && GameDataActor.EventQueryIsObtainedSpiritBigPoeCount({'Value': 10}) in [1, 2] {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 269})
        }
    } else {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 4, 'EquipmentState': 2})
        PouchSystemActor.EventTriggerPushToEmptyBottle({'IsSetMessageTargetActorName': True, 'IsPushToSelectedBottle': True, 'Item': 'BottleItem', 'BigPoeFenceId': 'BigPoeFenceId'})

        fork {
            Player_Event.EventPlayerDisplayBottle({'IsWaitEnd': False})
        } {
            EventSystemActor[UI].EventWait({'IsWaitEnd': True, 'Frames': 75})

            call GetPouchContent.PushToSelectedBottle({'Item': 'BottleItem'})

        } {
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 1})
            switch Player_Event.EventQueryGetBottleContent() {
              case 4:
                Weapon_Bottle_BlueFire.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                Event37:
                EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 20})
                switch Player_Event.EventQueryGetBottleContent() {
                  case 4:
                    Weapon_Bottle_BlueFire.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 487})
                    Event24:
                    EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
                  case 5:
                    Weapon_Bottle_Fish.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 454})
                    goto Event24
                  case 8:
                    Weapon_Bottle_BigPoe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 456})
                    EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
                  case 9:
                    Weapon_Bottle_Poe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 456})
                    goto Event24
                  case 10:
                    Weapon_Bottle_Bug.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    goto Event24
                  case 11:
                    Weapon_Bottle_Fairy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOnGet'})
                    goto Event24
                }
              case 5:
                Weapon_Bottle_Fish.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                goto Event37
              case 8:
                Weapon_Bottle_BigPoe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                goto Event37
              case 9:
                Weapon_Bottle_Poe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                goto Event37
              case 10:
                Weapon_Bottle_Bug.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                goto Event37
              case 11:
                Weapon_Bottle_Fairy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOffGet'})
                goto Event37
            }
        } {
            EventCamera.EventTriggerCameraSavePoint()
            if !Player_Event.EventQueryPlayerIsChild() {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.6299999952316284, 1.659999966621399, 0.3400000035762787], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
                    GameSystemActor[block].EventWait({'IsWaitEnd': True, 'Frames': 1})

                    fork {
                        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
                    } {
                        GameSystemActor[camera_block].EventWait({'IsWaitEnd': True, 'Frames': 79})
                        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_ItemGet_Large'})
                    }

                } else {

                    fork {
                        EventSystemActor[sound_effect].EventWait({'IsWaitEnd': True, 'Frames': 80})

                        fork {
                            SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_ItemGet_Large'})
                        } {
                            EventEffectEmitter.EventEffectStartGetItem({'IsBottleDemo': True, 'ActorName': 'ActorName', 'GameDataName': ''})
                        }

                    } {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveTime': 60, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.6299999952316284, 1.659999966621399, 0.3400000035762787], 'AtVector': [0.11999999731779099, 0.8799999952316284, -0.07000000029802322], 'TargetFovy': 41.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    }

                }
            } else
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [0.7900000214576721, 2.390000104904175, 0.3100000023841858], 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
                GameSystemActor[block].EventWait({'IsWaitEnd': True, 'Frames': 1})

                fork {
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
                } {
                    GameSystemActor[camera_block].EventWait({'IsWaitEnd': True, 'Frames': 79})
                    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_ItemGet_Large'})
                }

            } else {

                fork {
                    EventSystemActor[sound_effect].EventWait({'IsWaitEnd': True, 'Frames': 80})

                    fork {
                        SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': False, 'BGMName': 'BGM_ItemGet_Large'})
                    } {
                        EventEffectEmitter.EventEffectStartGetItem({'IsBottleDemo': True, 'ActorName': 'ActorName', 'GameDataName': ''})
                    }

                } {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.7900000214576721, 2.390000104904175, 0.3100000023841858], 'AtVector': [0.25999999046325684, 1.4600000381469727, -0.12999999523162842], 'TargetFovy': 38.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                }

            }
        }


        fork {
            switch Player_Event.EventQueryGetBottleContent() {
              case 4:
                Weapon_Bottle_BlueFire.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
              case 5:
                Weapon_Bottle_Fish.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
              case 8:
                Weapon_Bottle_BigPoe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
              case 9:
                Weapon_Bottle_Poe.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
              case 10:
                Weapon_Bottle_Bug.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
              case 11:
                Weapon_Bottle_Fairy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
            }
        } {
            Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
        }


        fork {
            Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': True})
        } {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        } {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            PouchSystemActor.EventTriggerSetHavePlayedGetEvent()
        }


        call Market_Item_Bottle_TutorialEvent_ClearFlow()

    }
}

void Market_Item_Bottle_TutorialEvent_ClearFlow() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Item_Bottle_TutorialEvent_Started', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Item_Bottle_TutorialEvent_Cleared', 'Index': -1})
    && Player_Event.EventQueryGetBottleContent() == 10 {
        EventSystemActor.EventTransition({'EventName': 'Item_Bottle_TutorialEvent_Animal_Insect_GetEvent', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    }
}
