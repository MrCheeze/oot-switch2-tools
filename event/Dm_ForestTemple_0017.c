-------- EventFlow: Dm_ForestTemple_0017 --------

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_ForestTemple_GhostPicture_A_04
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerDeathSignal', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0017/Dm_ForestTemple_0017_Obj_ForestTemple_GhostPicture_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0017_GhostPicture.root.as', 'Rotation': [0.0, 90.0, 0.0], 'Position': [32.84000015258789, 6.5, 3.5799999237060547], 'EventMemberCreateMethod': 2}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_Poe_Meg
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventWarpToHomeMatrix', 'EventPlayASWithClothWarp', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0017/Dm_ForestTemple_0017_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0017_Poe_Meg.root.as', 'EventMemberCreateMethod': 2}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPutAway']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Enemy_GhostPicturePerformer_Poe_Meg
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0017/Dm_ForestTemple_0017_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0017_Poe_Meg.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Weapon_GhostPicturePerformer_Poe_Meg_Torch
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Controller_Rumble]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Meg_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call Common.AirStartUp()

        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Eldest_Daughter_Generate'})
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    }


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C02', 'BgAlignH': 0, 'BgAlignW': 0, 'Text5': '', 'Text4': '', 'Text3': '', 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C03', 'Text3': '', 'Text4': '', 'Text2': ''})
    }


    fork {

        call C04()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'BgAlignH': 0, 'BgAlignW': 0, 'Text2': '', 'Text1': 'C04'})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step06_1_0', 'IsIgnoreChallengeProgressUI': True})
}

void C01() {

    fork {

        fork {
            EventSystemActor[Meg_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 7})
            Enemy_MiddleBoss_Poe_Meg.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Obj_ForestTemple_GhostPicture_A_04', 'YAngle': 0.0, 'PositionOffset': [0.15000000596046448, -0.75, -1.2000000476837158], 'InstanceName': '', 'OffsetBase': 1, 'ClothWarpMode': -1, 'IsWaitEnd': False})
            Enemy_MiddleBoss_Poe_Meg.EventTriggerRequestPause()
            EventSystemActor[Meg_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 114})
            Enemy_MiddleBoss_Poe_Meg.EventTriggerRequestCancelPause()
            Enemy_MiddleBoss_Poe_Meg.EventPlayASWithClothWarp({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsAllSlot': False, 'ClothWarpMode': 3, 'IsWaitEnd': True, 'IsAnimeDriven': True})
        } {
            Enemy_GhostPicturePerformer_Poe_Meg.EventTriggerParticipateEvent()
            Enemy_GhostPicturePerformer_Poe_Meg.EventPlayAS({'ASName': 'C01_Enemy_GhostPicturePerformer_Meg', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            Weapon_GhostPicturePerformer_Poe_Meg_Torch.EventTriggerParticipateEvent()
            Obj_ForestTemple_GhostPicture_A_04.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 132})
            GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        } {

            fork {
                Obj_ForestTemple_GhostPicture_A_04.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0017_MiasmaFire', 'SLinkKey': ''})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 395})
                Enemy_MiddleBoss_Poe_Meg.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0017_Contact', 'SLinkKey': ''})
            }

        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 25, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_04', 'PosVector': [0.10000000149011612, 0.23999999463558197, 5.699999809265137], 'AtVector': [0.07000000029802322, 0.09000000357627869, 2.6500000953674316], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_04', 'PosVector': [0.10000000149011612, 0.23999999463558197, 5.699999809265137], 'AtVector': [0.07000000029802322, 0.09000000357627869, 2.6500000953674316], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 392, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 6.760000228881836, 'EndFNumber': 8.0, 'EndBluarLevel': 0.75, 'RequiredFrame': 25, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False})
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.0, 94.54000091552734, -3.5], 'EndPos': [0.0, 94.54000091552734, -3.5]})
    }

    Obj_ForestTemple_GhostPicture_A_04.EventTriggerDeathSignal()
}

void C02() {

    fork {
        Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'Position': [36.70000076293945, 104.9000015258789, -0.05000000074505806], 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsWaitEnd': True, 'LookAtTarget': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_MiddleBoss_Poe_Meg.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [30.038480758666992, 106.3864974975586, 0.15812000632286072], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Enemy_MiddleBoss_Poe_Meg.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsAllSlot': False, 'IsWaitEnd': True, 'IsAnimeDriven': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0', 'TargetActorName': '', 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'RequiredFrame': 0, 'EndDistance': 9.949999809265137, 'EndFNumber': 12.5, 'EndBluarLevel': 3.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False})
        EventSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 100, 'EndDistance': 14.0, 'EndBluarLevel': 0.800000011920929, 'EndFNumber': 6.199999809265137})
    }

}

void C03() {

    fork {
        Enemy_MiddleBoss_Poe_Meg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-Cry', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 260})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3.619999885559082, 101.18000030517578, -4.139999866485596], 'AtVector': [-1.159999966621399, 100.88999938964844, -2.7799999713897705], 'TargetFovy': 29.389999389648438, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventSetDoFForFlowchart({'RequiredFrame': 0, 'EndDistance': 9.350000381469727, 'EndFNumber': 4.0, 'EndBluarLevel': 0.8500000238418579, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False})
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [40.620269775390625, 106.74500274658203, -0.04999899864196777], 'EndPos': [40.620269775390625, 106.74500274658203, -0.04999899864196777]})
    }

}

void C04() {

    fork {
        Enemy_MiddleBoss_Poe_Meg.EventWarpToHomeMatrix({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 3.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
