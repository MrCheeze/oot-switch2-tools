-------- EventFlow: Dm_TimeTemple_0088 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventTriggerPlayerSetTimerInvalidDoAction']
queries: ['EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0088/Dm_TimeTemple_0088_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0088_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataString64']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventOverwriteSceneShadingParams', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[DoF_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call other()


    fork {

        call Gauntlet_Silver_First()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

    Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 90.0})
}

void Gauntlet_Silver_First() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [137.20840454101562, 106.12000274658203, -34.0], 'ASCommand': 'EvtWait', 'ClothWarpMode': 2, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ASCommand': 'C01', 'IsWaitEnd': False, 'ClothWarpMode': 3})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
            Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 395})
        } {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_0088_GloveShine_L_01'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_0088_GloveShine_R_01'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 255})
            Player_Event.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_0088_GloveShine_L_01', 'IsKill': False})
            Player_Event.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_TimeTemple_0088_GloveShine_R_01', 'IsKill': False})
        }

    } {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_TimeTemple_0088_C01', 'CurrDemoPaletteName': 'Dm_TimeTemple_0088_C01'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 6.400000095367432, 'EndDistance': 6.5, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }

        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'InnerRatio': 1.0, 'ShadowRatio': 1.0, 'IsOverwriteInnerRatio': True, 'IsOverwriteShadowRatio': True, 'IsOverwriteBakeLightLuminanceRatio': True, 'BakeLightLuminanceRatio': 1.0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.109999895095825, 1.7699999809265137, 4.070000171661377], 'AtVector': [-0.7699999809265137, 1.5399999618530273, 1.4800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 75, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.1700000762939453, 1.7799999713897705, 4.190000057220459], 'AtVector': [-0.7699999809265137, 1.5399999618530273, 1.4800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {
            EventSystemActor[DoF_EventWait].EventWait({'Frames': 1, 'IsWaitEnd': True})

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 75})

        }

    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'ClothWarpMode': -1, 'Position': [137.13999938964844, 107.9000015258789, -33.20000076293945]})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False})
    } {
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 333})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent_Gauntlet_Silver_First', 'Index': -1, 'Value': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 220})
}

void other() {
    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'Length': 0, 'IsNoPlayAnime': True})
    GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'PlayerStatus.EquipWeapon', 'Index': -1, 'SrcIndex': -1, 'DstGameDataName': 'PlayerWeaponBeforeForceEquipMasterSword'})
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0}) {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
    } else {

        fork {
            Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 1, 'IsActive': True})
        } {
            Event31:
            if Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                goto Event31
            }
        }

    }
    Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
}
