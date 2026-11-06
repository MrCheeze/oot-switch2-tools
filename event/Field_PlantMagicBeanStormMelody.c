-------- EventFlow: Field_PlantMagicBeanStormMelody --------

Actor: Obj_Plant_MagicBeanBud_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerBackMoveForAnchor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerHealMPMax', 'EventTriggerHealLife', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsRecommendedMelody']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventStartRecoverOrAddHeartGauge', 'EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBoolEX1', 'EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_SmallFarm_A_02
entrypoint: None()
actions: []
queries: ['EventQuerySmallFarmIsPlanted']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_SmallFarm_A_01
entrypoint: None()
actions: []
queries: ['EventQuerySmallFarmIsPlanted']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

    if !GameSystemActor.EventQueryIsRecommendedMelody()
    && !Obj_SmallFarm_A_02.EventQuerySmallFarmIsPlanted()
    Event15:
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MagicBean_FairySpiritAppear', 'Index': -1}) {
        PostProcessingActor.EventResetToInGameParametersDoF({'TransitionFrame': 0, 'IsWaitEnd': True})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'Dirt', 'CheckDistance': 3.5}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Player_Event', 'Vector': [0.0, 1.75, 0.0]}) {
                Event4:
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [1.0, 1.0, 1.0], 'AtVector': [0.0, 0.5, 0.0], 'TargetFovy': 45.0, 'IsEnableRevertFast': False})
                Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 1.25]})
                Event41:

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

                fork {
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'Dirt', 'CheckDistance': 0.5}) {
                        if Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'Target': 5, 'AngleThreshold': 45.0, 'InstanceName': 'Dirt'}) {
                            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'InstanceName': 'Dirt', 'IsDoNavi': True})
                        }
                        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                        Player_Event.EventPlayerBackMoveForAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 0.5, 'AnchorInstanceName': 'Dirt'})
                    } else {
                        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'InstanceName': 'Dirt', 'IsDoNavi': True})
                    }
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                } {
                    Obj_Plant_MagicBeanBud_A_01.EventPlayAS({'ASName': 'Demo', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [-1.0, 1.0, -1.0]}) {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [1.0, 1.0, -1.0]}) {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Player_Event', 'MoveTime': 60, 'AtVectorSetType': 4, 'TargetFovy': 55.0, 'PosVectorSetType': 4, 'PosVector': [1.0, 1.0, 1.0], 'AtVector': [0.0, 0.75, 0.5], 'IsEnableRevertFast': False})
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor2ActorName': 'Player_Event', 'MoveTime': 60, 'PosVector': [1.0, 1.0, -1.0], 'AtVectorSetType': 4, 'TargetFovy': 55.0, 'PosVectorSetType': 4, 'AtVector': [0.0, 0.75, 0.5], 'IsEnableRevertFast': False})
                    }
                    Event40:
                    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})

                    fork {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                        UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
                        Player_Event.EventTriggerHealLife({'Value': 32})
                        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
                        Player_Event.EventTriggerPlayerHealMPMax()
                    } {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': True, 'Index': -1})
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
                    EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': False, 'Index': -1})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 499})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'Actor2ActorName': 'Player_Event', 'MoveTime': 60, 'TargetFovy': 55.0, 'PosVector': [-1.0, 1.0, -1.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.75, 0.5], 'IsEnableRevertFast': False})
                    goto Event40
                }
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_Plant_MagicBeanBud_A_01', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'Actor2ActorName': 'Player_Event', 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.75, 0.0], 'TargetFovy': 45.0, 'MoveTime': 0, 'IsEnableRevertFast': False})
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
                goto Event41
            }
        } else {
            goto Event4
        }
    }
}

void EntryPoint1() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

    if !GameSystemActor.EventQueryIsRecommendedMelody()
    && !Obj_SmallFarm_A_01.EventQuerySmallFarmIsPlanted() {
        goto Event15
    }
}
