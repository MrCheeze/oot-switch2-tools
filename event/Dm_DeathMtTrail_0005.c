-------- EventFlow: Dm_DeathMtTrail_0005 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerPreComputedCullingDisableUntilEventEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'IsWorld': False}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [-4.539999961853027, 243.85000610351562, -222.97000122070312], 'IsWorld': True}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Obj_FallingRock_A_05
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: Dm_Obj_FallingRock_A_04
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Obj_FallingRock_A_04[1]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Obj_FallingRock_A_04[2]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Obj_FallingRock_A_05[1]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as'}

Actor: Dm_Obj_FallingRock_A_05[2]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as'}

Actor: Dm_Obj_FallingRock_A_05[3]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Obj_FallingRock_A_05[4]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: EventSystemActor[FallingRock]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Obj_FallingRock_A_05[5]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as'}

Actor: Dm_Obj_FallingRock_A_05[6]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0005/Dm_DeathMtTrail_0005_Obj_FallingRock_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0005_FallingRock.root.as'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': True})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'Position': [-9.5, 168.3699951171875, -75.83999633789062], 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1})
    }


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attention_Enemy'})
    } {
        EventCamera.EventTriggerRequestCameraShake({'Power': 1.0, 'Pattern': 2, 'LoopEndCount': 1, 'ApplyType': 1, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-14.949999809265137, 155.60000610351562, -41.15999984741211], 'AtVector': [-14.449999809265137, 157.6999969482422, -45.06999969482422], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {

        call hidden()

    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Earthquake'})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 20, 'StartDistance': 0.0, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {

        call FallingRock()

    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-15.039999961853027, 155.3000030517578, -43.88999938964844], 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 170.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-15.779999732971191, 155.83999633789062, -40.09000015258789], 'AtVector': [-15.029999732971191, 157.32000732421875, -43.959999084472656], 'TargetFovy': 70.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 469})
    } {

        call hidden()

    }

}

void FallingRock() {
    GameSystemActor.EventTriggerPreComputedCullingDisableUntilEventEnd()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[FallingRock].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Dm_Obj_FallingRock_A_05.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'FallingRock_S_00', 'IsAnimeDriven': True})
        } {
            Dm_Obj_FallingRock_A_05[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[1].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_01'})
        } {
            Dm_Obj_FallingRock_A_05[2].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[2].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_02'})
        } {
            Dm_Obj_FallingRock_A_05[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[3].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_03'})
        } {
            Dm_Obj_FallingRock_A_05[4].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[4].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_04'})
        } {
            Dm_Obj_FallingRock_A_05[5].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[5].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_05'})
        } {
            Dm_Obj_FallingRock_A_05[6].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DeathMtTrail_0005_Trail'})
            Dm_Obj_FallingRock_A_05[6].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_S_06'})
        } {
            Dm_Obj_FallingRock_A_04.EventTriggerEmitXLink({'ELinkKey': 'Dm_DeathMtTrail_0005_Trail', 'SLinkKey': ''})
            Dm_Obj_FallingRock_A_04.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_M_00'})
        } {
            Dm_Obj_FallingRock_A_04[1].EventTriggerEmitXLink({'ELinkKey': 'Dm_DeathMtTrail_0005_Trail', 'SLinkKey': ''})
            Dm_Obj_FallingRock_A_04[1].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_M_01'})
        } {
            Dm_Obj_FallingRock_A_04[2].EventTriggerEmitXLink({'ELinkKey': 'Dm_DeathMtTrail_0005_Trail', 'SLinkKey': ''})
            Dm_Obj_FallingRock_A_04[2].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'FallingRock_M_02'})
        }

    } {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Volcano'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_VolcanoEruption_00', 'SLinkKey': ''})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    } {
        EventSystemActor.EventGoOffstageForUser({'IsSleepXLink': False, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 160})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoGoGo', 'Length': 2.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 100})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 120})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 26})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
    }

}

void hidden() {

    fork {
        Dm_Obj_FallingRock_A_05.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[1].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[2].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[3].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[4].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[5].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_05[6].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_04.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_04[1].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    } {
        Dm_Obj_FallingRock_A_04[2].EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': False})
    }

}
