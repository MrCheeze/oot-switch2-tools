-------- EventFlow: Dm_InsideGanonCastle_0190 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventPlayerOffMotionTypeStatic', 'EventPlayerOnMotionTypeStatic']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0190/Dm_InsideGanonCastle_0190_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0190_Player.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0190/Dm_InsideGanonCastle_0190_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0190_Zelda.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerNaviWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0190/Dm_InsideGanonCastle_0190_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0190_Navi.root.as', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestEnduringCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0190/Dm_InsideGanonCastle_0190/workspace.pp__ModelProject.gyml', 'IsGrounding': True}

Actor: Dm_Locator[HomePosition]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Land_CrumblingGanonCastle_A_03
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0190/Dm_InsideGanonCastle_0190_Dm_Land_CrumblingGanonCastle_A_03/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0190_Land_A_03.root.as'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[voiceNPC]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Event]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartRoomSend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void C01() {

    fork {
        Dm_Locator[HomePosition].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'InstanceName': 'Dm_InsideGanonCastle_0190_Anchor'})
    } {
        EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'Pattern': 2, 'IsRumbleController': True, 'ApplyType': 0, 'Power': 1.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution'})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'Act_LookDown_Upper'})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_03.EventWarpToHomeMatrix({'IsWaitEnd': False})
        Dm_Land_CrumblingGanonCastle_A_03.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01'})
    } {
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0.camera', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerOnMotionTypeStatic()
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePosition', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'ASCommand': 'EvtWait', 'YAngle': 0.0, 'IsWaitEnd': False, 'UseDemoWait': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'C02_Player', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePosition', 'OffsetBase': 1, 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [-0.7571499943733215, -0.44655999541282654, 1.3834999799728394]})
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'IsAllSlot': True, 'ASName': 'C02_Zalda', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 2, 'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False})
    } {
        EventSystemActor[voiceNPC].EventWait({'IsWaitEnd': True, 'Frames': 10})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0190:Dm_InsideGanonCastle_0190_Z_01', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePosition', 'OffsetBase': 0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'YAngle': 120.0, 'PositionOffset': [-0.5, 1.5499999523162842, -0.20000000298023224]})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02_Navi', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True})
    } {
        Dm_Land_CrumblingGanonCastle_A_03.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02', 'ForceFadeInFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[Event].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor[Vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_03.EventTriggerEmitXLink({'ELinkKey': 'Dm_InsideGanonCastle_0190_C02', 'SLinkKey': ''})
    }

}

void C03() {

    fork {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'HomePosition', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C03-0.camera', 'IsWaitEnd': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsEnableNear': False, 'RequiredFrame': 94, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'AtVector': [15.865039825439453, 191.6230010986328, 30.43535041809082], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [11.528340339660645, 193.5229034423828, 34.436161041259766], 'IsEnableRevertFast': False})
            EventCamera.EventTriggerRequestEnduringCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 4, 'Power': 0.20000000298023224})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'AtVector': [15.865039825439453, 191.6230010986328, 30.43535041809082], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [12.90999984741211, 193.0, 33.099998474121094], 'MoveTime': 73, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } {
        Player_Event.EventPlayerOffMotionTypeStatic()
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C03_Player', 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'ASName': 'C03_Zalda', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'ClothWarpMode': 2})
    } {
        Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'Position': [16.010000228881836, 191.77999877929688, 30.850000381469727], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'C03_Navi', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_03.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03', 'ForceFadeInFrame': 0.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_03.EventTriggerEmitXLink({'ELinkKey': 'Dm_InsideGanonCastle_0190_C03', 'SLinkKey': ''})
    }

}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()

}
