-------- EventFlow: Dm_ForestTemple_0016 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_Elevator_A_01[Storage]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_SwitchCandleStick_A_02
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller_Rumble_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.23000000417232513, 101.73999786376953, -2.7100000381469727], 'EndPos': [0.23000000417232513, 101.73999786376953, -2.7100000381469727]})

    call C01()


    call C02()


    call C03()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 362})
}

void C01() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': 175.0, 'IsWaitEnd': True, 'Position': [-2.5, 100.0, 6.199999809265137], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [0.23000000417232513, 101.73999786376953, -2.7100000381469727], 'AtVector': [-2.0, 102.27999877929688, -5.230000019073486], 'TargetFovy': 30.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.23000000417232513, 101.73999786376953, -2.7100000381469727], 'AtVector': [-2.0, 102.27999877929688, -5.230000019073486], 'TargetFovy': 30.0, 'MoveTime': 140, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 175.0, 'IsWaitEnd': True, 'Position': [-2.5999999046325684, 101.68000030517578, 6.199999809265137], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Obj_ForestTemple_SwitchCandleStick_A_02.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0016_Ignition', 'SLinkKey': 'Dm_ForestTemple_0016_Fire'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 43})
        Obj_ForestTemple_SwitchCandleStick_A_02.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0016_MiasmaFire'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text5': '', 'IsWaitEnd': True, 'DispTime': 3, 'Text3': '', 'Text2': ''})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-1', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Obj_ForestTemple_Elevator_A_01[Storage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'C02_MovingUp_Dm_ForestTemple_0016'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 4.5, 'EndFNumber': 21.899999618530273, 'EndBluarLevel': 2.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': True, 'Text2': ''})
    } {
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 3.200000047683716, 'RumbleCall': 'Demo_Large_GoGoGo'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 190})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        Obj_ForestTemple_Elevator_A_01[Storage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0016_Smoke', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})

        fork {
            Obj_ForestTemple_Elevator_A_01[Storage].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ForestTemple_0016_Smoke', 'SLinkKey': '', 'IsKill': False})
        } {
            Obj_ForestTemple_Elevator_A_01[Storage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0016_SmokeEnd', 'SLinkKey': ''})
        }

    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.5099999904632568, 1.2400000095367432, -1.4199999570846558], 'AtVector': [-0.5400000214576721, 1.4199999570846558, -0.05999999865889549], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03', 'Text2': '', 'IsWaitEnd': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0, 'CameraResetPolicy': 0})
}
