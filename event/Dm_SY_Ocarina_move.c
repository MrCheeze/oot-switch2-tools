-------- EventFlow: Dm_SY_Ocarina_move --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerParticipateEvent', 'EventPlayerWarpVanish']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[EffectPosStart]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Ocarina_move/Dm_SY_Ocarina_move_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Ocarina_move_DM_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[GSA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void ocarina_move_start() {
    if !Player_Event.EventQueryPlayerIsChild() {

        call ChildStart()

    } else {

        call AdultStart()

    }
}

void AdultStart() {

    fork {
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 120})

        call AdultBranchFlow()

    } {
        Player_Event.EventTriggerParticipateEvent()
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 135})
        Player_Event.EventPlayerWarpVanish({'IsWaitEnd': True, 'IsFarore': False, 'IsReverse': False, 'Frame': 50.0})
    }

}

void ChildStart() {

    fork {
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 120})

        call ChildBranchFlow()

    } {
        Player_Event.EventTriggerParticipateEvent()
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 135})
        Player_Event.EventPlayerWarpVanish({'IsWaitEnd': True, 'IsFarore': False, 'IsReverse': False, 'Frame': 50.0})
    }

}

void ChildBranchFlow() {

    fork {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsConsiderWater': False, 'VectorSetType1': 3, 'Vector1': [1.4299999475479126, 1.2300000190734863, 1.7200000286102295], 'Vector2': [0.0, 0.5699999928474426, -0.04500000178813934]}) {
            Event161:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.8199999928474426, 0.0], 'TargetFovy': 60.0, 'PosVector': [0.0, 1.2000000476837158, -2.0], 'IsEnableRevertFast': False})
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            } {
                Dm_Locator[EffectPosStart].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'TargetActorKind': 1})
                Dm_Locator[EffectPosStart].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'VerticalPlan'})
            } {

                call NaviAction()

            }

            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'MoveTotargetPosType': 1, 'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVector': [0.0, 3.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'TargetFovy': 60.0, 'IsEnableRevertFast': False})
            EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsConsiderWater': False, 'VectorSetType1': 3, 'Vector1': [1.4299999475479126, 2.240000009536743, 1.850000023841858], 'Vector2': [0.41999998688697815, 1.0299999713897705, 0.5299999713897705]}) {
            goto Event161
        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.4299999475479126, 1.2300000190734863, 1.7200000286102295], 'AtVector': [0.2800000011920929, 0.699999988079071, 0.30000001192092896], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 1, 'IsEnableRevertFast': False})
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            } {
                Dm_Locator[EffectPosStart].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'TargetActorKind': 1})
                Dm_Locator[EffectPosStart].EventPlayAS({'ASName': 'ChildSt', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {

                call NaviAction()

            }


            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 50, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.4299999475479126, 2.240000009536743, 1.850000023841858], 'AtVector': [0.41999998688697815, 1.0299999713897705, 0.5299999713897705], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
            } {
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 75})
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
            }

        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 21.6299991607666, 'EndFNumber': 21.6299991607666, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 6:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_00'})
          case 7:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Fire_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_Fire_00'})
          case 8:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Water_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_Water_00'})
          case 9:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Spirit_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_Spirit_00'})
          case 10:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Shadow_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_Shadow_00'})
          case 11:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Light_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Child_Particle_Start_Light_00'})
        }
    }

}

void AdultBranchFlow() {

    fork {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [1.7999999523162842, 1.6799999475479126, 2.1700000762939453], 'IsEnableCameraBodyCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsConsiderWater': False, 'VectorSetType1': 3, 'Vector2': [0.0, 0.8510000109672546, -0.04399999976158142]}) {
            Event8:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.8199999928474426, 0.0], 'TargetFovy': 60.0, 'PosVector': [0.0, 1.2000000476837158, -2.0], 'IsEnableRevertFast': False})
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            } {
                Dm_Locator[EffectPosStart].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'TargetActorKind': 1})
                Dm_Locator[EffectPosStart].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'VerticalPlan'})
            } {

                call NaviAction()

            }

            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'LongShiftRange': 180.0, 'FovySetType': 0, 'LatShiftRange': 60.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'MoveTotargetPosType': 1, 'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVector': [0.0, 3.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'TargetFovy': 60.0, 'IsEnableRevertFast': False})
            EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector2': [0.44999998807907104, 1.3899999856948853, 0.5099999904632568], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsConsiderWater': False, 'VectorSetType1': 3, 'Vector1': [1.7300000190734863, 2.890000104904175, 2.059999942779541]}) {
            goto Event8
        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.7999999523162842, 1.6799999475479126, 2.1700000762939453], 'AtVector': [0.2800000011920929, 0.9800000190734863, 0.30000001192092896], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'IsEnableRevertFast': False})
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            } {
                Dm_Locator[EffectPosStart].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1, 'TargetActorKind': 1})
                Dm_Locator[EffectPosStart].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultSt', 'IsWaitEnd': False})
            } {

                call NaviAction()

            }


            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 50, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.7300000190734863, 2.890000104904175, 2.059999942779541], 'AtVector': [0.44999998807907104, 1.3899999856948853, 0.5099999904632568], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
            } {
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 75})
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
            }

        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 21.6299991607666, 'EndFNumber': 21.6299991607666, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 6:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_00', 'SLinkKey': ''})
          case 7:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Fire_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_Fire_00'})
          case 8:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Water_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_Water_00'})
          case 9:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Spirit_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_Spirit_00'})
          case 10:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Shadow_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_Shadow_00'})
          case 11:
            Player_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SY_Ocarina_move_Particle', 'ELinkKey': ''})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Light_00', 'SLinkKey': 'Dm_SY_Ocarina_move'})
            GameSystemActor[GSA1].EventWait({'Frames': 40, 'IsWaitEnd': True})
            Dm_Locator[EffectPosStart].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Particle_Start_Light_00'})
        }
    }

}

void NaviAction() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 5})
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Shield_Deku', 'WeaponSlot': 4}) {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'offset': [0.0, -0.4000000059604645, -0.4000000059604645], 'Speed': 1.5})
            Event72:
            EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 30})
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'}) {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'Speed': 1.5, 'offset': [0.0, -0.4000000059604645, -0.5]})
        } else {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'Speed': 1.5, 'offset': [0.0, -0.4000000059604645, -0.3499999940395355]})
        }
        goto Event72
    } else {
        EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 5})
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'}) {
            Event95:
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'offset': [0.0, -0.4000000059604645, -0.5], 'Speed': 1.600000023841858})
            goto Event72
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Mirror'}) {
            goto Event95
        } else {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'Speed': 1.600000023841858, 'offset': [0.0, -0.4000000059604645, -0.5]})
        }
        goto Event72
    }
}
