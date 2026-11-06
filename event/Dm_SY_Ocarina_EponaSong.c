-------- EventFlow: Dm_SY_Ocarina_EponaSong --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerCallHorseAround', 'EventCreateAndCallOwnedHorse', 'EventTriggerStartToPrepareForCallOwnedHorse']
queries: ['EventQueryHasOwnedHorse', 'EventQueryIsCurrentSceneEnableRide']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenSimpleInfo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void EponaSong() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1}) {

        call EponaSong_CallHorseAround()

    } else
    if !GameSystemActor.EventQueryHasOwnedHorse() {
        if !GameSystemActor.EventQueryIsCurrentSceneEnableRide()
        && !Player_Event.EventQueryCheckPlayerState({'State': 39}) {
            GameSystemActor.EventCreateAndCallOwnedHorse({'CallerActorName': 'Player_Event', 'IsWaitEnd': True, 'CallerInstanceName': ''})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'AtVector': [0.0, 1.7300000190734863, 0.0], 'PosVector': [-1.9500000476837158, 3.0, -5.519999980926514], 'AtVectorSetType': 3, 'MoveTime': 40, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 40, 'IsWaitEnd': True, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
            } {

                call Dm_SY_Ocarina.LightOff()

            }

        } else {
            UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 10})

            fork {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
            } {

                call Common_Camera_Pln.CameraDoF_Event_Common()

            } {

                call Dm_SY_Ocarina.LightOff()

            }

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LonLonRanch_GambleRace_IsInsideFence', 'Index': -1}) {
        Event3:

        call EponaSong_CallHorseAround()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'LonLonRanch_PlayingHorseRiding'}) {
        goto Event3
    }
}

void EponaSong_CallHorseAround() {
    GameSystemActor.EventTriggerCallHorseAround({'CallerActorName': 'Player_Event', 'CallerInstanceName': ''})

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call Dm_SY_Ocarina.LightOff()

    }

}

void StartToPrepareCallOwnedHorse() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1})
    && !GameSystemActor.EventQueryHasOwnedHorse()
    && !GameSystemActor.EventQueryIsCurrentSceneEnableRide() {
        GameSystemActor.EventTriggerStartToPrepareForCallOwnedHorse({'CallerActorName': 'Player_Event', 'CallerInstanceName': ''})
    }
}
