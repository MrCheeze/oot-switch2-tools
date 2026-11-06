-------- EventFlow: Dm_GanonCastle_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerOpenLocationUI', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GanonCastle_0000/Dm_GanonCastle_0000_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GanonCastle_0000_Player.root.as'}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C02'})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03'})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C04'})
    }


    fork {

        call C05()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05'})
    }

}

void C02() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02', 'IsWaitEnd': False, 'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [-0.5, 0.0, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsWaitEnd': False, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-2.1500000953674316, 1.7599999904632568, 4.179999828338623], 'AtVector': [-2.140000104904175, 0.6899999976158142, -0.10000000149011612], 'TargetFovy': 33.31999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-2.140000104904175, 1.7599999904632568, 3.759999990463257], 'AtVector': [-2.140000104904175, 0.7599999904632568, -0.5400000214576721], 'TargetFovy': 33.31999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsLinearMove': True, 'EnableCameraAlpha': False, 'MoveTime': 240, 'IsEnableRevertFast': False})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': False, 'Length': 0})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Demo_Thunder_00', 'IsIgnoreDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': False, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 6.5, 'EndDistance': 6.5, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-14.470000267028809, 6.110000133514404, -21.079999923706055], 'AtVector': [-11.670000076293945, 5.809999942779541, -17.920000076293945], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-14.470000267028809, 6.110000133514404, -21.079999923706055], 'AtVector': [-11.510000228881836, 5.789999961853027, -18.06999969482422], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 180, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'offset': [-0.5, 0.0, 0.0], 'IsHomePosition': False, 'IsNearOffset': False, 'IsWaitEnd': False, 'OffsetType': -1, 'Speed': 0.800000011920929})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Demo_Thunder_01', 'IsIgnoreDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': False, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 6.5, 'EndDistance': 6.5, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-14.399999618530273, 5.860000133514404, -14.779999732971191], 'AtVector': [-11.6899995803833, 5.610000133514404, -18.25], 'TargetFovy': 31.6200008392334, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 180, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '01', 'PosVector': [-14.109999656677246, 5.860000133514404, -15.0], 'AtVector': [-11.25, 5.929999828338623, -18.360000610351562], 'TargetFovy': 31.6200008392334, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Demo_Thunder_02', 'IsIgnoreDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': False, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartDistance': 9.0, 'EndDistance': 9.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void Ready() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': True, 'Color': 0, 'Length': 1})

    fork {
        Dm_Locator[01].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -176.31979370117188, 'Position': [59.56999969482422, 83.79000091552734, 372.1300048828125], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': -176.3000030517578, 'IsWaitEnd': False, 'ASCommand': 'C02', 'Position': [59.16999816894531, 81.98056030273438, 371.5400085449219], 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': True})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': False, 'SceneName': 'C04-0', 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': ''})
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 210})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'ASCommand': 'C04', 'IsWaitEnd': False, 'YAngle': -176.32000732421875, 'Position': [58.89738845825195, 84.23426818847656, 338.03948974609375], 'ClothWarpMode': 0, 'EnableInAir': False})
        EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C04', 'ForceFadeFrame': 0.0, 'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 520})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/GanonCastle.game__location__Location.gyml'})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -176.31979370117188, 'ClothWarpMode': -1, 'Position': [59.34000015258789, 85.87999725341797, 339.0899963378906]})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IncSpeedDistance': 0.0, 'LookAtWorldPos': [32.0, 160.0, 155.0], 'WorldPos': [59.349998474121094, 86.01000213623047, 336.8900146484375], 'ASCommand': '', 'DecSpeedDistance': 0.0, 'OverwriteRotNearDist': 0.0, 'IsLookAtObject': False, 'IsTurnLooking': False, 'MoveSpeed': 0.6000000238418579, 'MinimumSpeed': 0.6000000238418579})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Demo_Thunder_03', 'IsIgnoreDucking': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_Demo_Thunder_04', 'IsIgnoreDucking': False})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_GanonCastle_0000', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'StartDistance': 7.199999809265137, 'EndDistance': 7.199999809265137, 'StartFNumber': 7.0, 'EndFNumber': 7.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsWaitEnd': True, 'RequiredFrame': 360, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'StartDistance': 7.199999809265137, 'StartFNumber': 7.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'EndDistance': 5.0, 'IsWaitEnd': True, 'RequiredFrame': 220, 'EndFNumber': 17.200000762939453, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [59.15999984741211, 86.08999633789062, 340.7699890136719], 'AtVector': [58.900001525878906, 85.87000274658203, 336.7799987792969], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'ASCommand': 'Wait', 'ClothWarpMode': 2, 'IsWaitEnd': True, 'Position': [58.900001525878906, 84.36000061035156, 336.7799987792969], 'UseDemoWait': True, 'EnableInAir': False, 'YAngle': -176.3000030517578})
    }

    PostProcessingActor.EventNorifyCutChangeForGraphics()
    PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 0.0, 'IsOverwriteShadowRatio': False, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'ShadowRatio': 0.0})
}
