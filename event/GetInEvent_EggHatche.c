-------- EventFlow: GetInEvent_EggHatche --------

Actor: Player_Event
entrypoint: None()
actions: ['EventCreateShowItemFromActorFileName', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventDeleteShowItem', 'EventPlayerTurnAndLook', 'EventIgnitionShowItem', 'EventTriggerSetModelLodManual']
queries: ['EventQueryPlayerIsChild', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStopGetItem', 'EventEffectStartGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void GetInEvent_EggHatche() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call Cccco_SetLocator()

    if !Player_Event.EventQueryPlayerIsChild() {
        switchcall IsSpace_Child() {
          case 1843959928:
            Event35:
            Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoGet_Smile', 'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                if !Player_Event.EventQueryPlayerIsChild() {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
                }
            }


            fork {
                Player_Event.EventTriggerSetModelLodManual({'LodLevel': 0})
                Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.0, 0.0, 0.0], 'IsScale': False, 'CreateTime': 0.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
            } {
                SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
            } {
                EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'ActorName': 'ActorName', 'IsBottleDemo': False})
            }

            Event11:

            call GetPouchContent.GetPouchContentByActorName({'ActorName': 'ActorName'})


            fork {
                Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
            } {
                EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventEffectEmitter.EventEffectStopGetItem()
            }

            Event19:

            call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.Sub_InitTalkNavi_NPC_GetDemo({'IsLookAtObject': False, 'LookAtTarget': 2, 'LookAtActorName': 'Player_Event', 'LookAtInstanceName': ''})

          case [1538531746, 513712005, 2457286800]:
            Event0:
            Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    if !Player_Event.EventQueryPlayerIsChild() {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
                    }
                } {
                    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsDoNavi': False, 'UpperASCommand': 'DemoGet_Smile', 'IsWaitEnd': False})
                    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})

                    fork {
                        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.0, 0.0, 0.0], 'IsScale': False, 'CreateTime': 0.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
                    } {
                        SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
                    } {
                        EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'ActorName': 'ActorName', 'IsBottleDemo': False})
                    }

                }

            } else {

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    if !Player_Event.EventQueryPlayerIsChild() {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
                    }
                } {
                    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsDoNavi': False, 'IsWaitEnd': True, 'UpperASCommand': ''})
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoGet_Smile', 'IsAllSlot': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})

                    fork {
                        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.0, 0.0, 0.0], 'IsScale': False, 'CreateTime': 0.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
                    } {
                        SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
                    } {
                        EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'ActorName': 'ActorName', 'IsBottleDemo': False})
                    }

                }

            }
            goto Event11
          case 810547195:
            Event18:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})

            call GetPouchContent.GetPouchContentByActorName({'ActorName': 'ActorName'})

            goto Event19
        }
    } else {
        switchcall IsSpace_Adult() {
          case 1843959928:
            goto Event35
          case [1538531746, 513712005, 2457286800]:
            goto Event0
          case 810547195:
            goto Event18
        }
    }
}

void IsSpace_Adult() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [0.0, 2.5, 1.5499999523162842], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.0, 1.7999999523162842, 0.30000001192092896], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [0.0, 2.5, -1.5499999523162842], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.0, 1.7999999523162842, -0.30000001192092896], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [-1.5499999523162842, 2.5, 0.0], 'IsEnableCameraBodyCheck': True, 'Vector2': [-0.30000001192092896, 1.7999999523162842, 0.0], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [1.5499999523162842, 2.5, 0.0], 'Vector2': [0.30000001192092896, 1.7999999523162842, 0.0], 'IsEnableCameraBodyCheck': True, 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
                    return 810547195
                } else {
                    return 2457286800
                }
            } else {
                return 513712005
            }
        } else {
            return 1538531746
        }
    } else {
        return 1843959928
    }
}

void Cccco_SetLocator() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switchcall IsSpace_Child() {
          case [1843959928, 810547195]:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 1.9600000381469727, 1.5]})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '正面', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 1538531746:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 180.0, 'PositionOffset': [0.0, 1.9600000381469727, -1.5]})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '後', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 513712005:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': -90.0, 'PositionOffset': [-1.5, 1.9600000381469727, 0.0]})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '右', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 2457286800:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 90.0, 'PositionOffset': [1.5, 1.9600000381469727, 0.0]})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '左', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
        }
    } else {
        switchcall IsSpace_Adult() {
          case [1843959928, 810547195]:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.6500000953674316, 1.75]})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '正面', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 1538531746:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.6500000953674316, -1.75], 'YAngle': 180.0})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '後', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 513712005:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'PositionOffset': [-1.75, 2.6500000953674316, 0.0], 'YAngle': -90.0})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '右', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
          case 2457286800:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'PositionOffset': [1.75, 2.6500000953674316, 0.0], 'YAngle': 90.0})
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '左', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
        }
    }
}

void IsSpace_Child() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [0.0, 1.9600000381469727, 1.5], 'Vector2': [0.0, 1.2000000476837158, 0.30000001192092896], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [0.0, 1.9600000381469727, -1.5], 'Vector2': [0.0, 1.2000000476837158, -0.30000001192092896], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [-1.5, 1.9600000381469727, 0.0], 'Vector2': [-0.30000001192092896, 1.2000000476837158, 0.0], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [1.5, 1.9600000381469727, 0.0], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.30000001192092896, 1.2000000476837158, 0.0], 'SpaceCheckRadius': 0.1899999976158142, 'IsConsiderWater': False}) {
                    return 810547195
                } else {
                    return 2457286800
                }
            } else {
                return 513712005
            }
        } else {
            return 1538531746
        }
    } else {
        return 1843959928
    }
}
