-------- EventFlow: Dm_Goron_0010 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNaviLookAtObject', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Goron_0010/Dm_Goron_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Goron_0010_Navi.root.as'}

Actor: Dm_Locator[pot]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerBanEmitSpecificSLinkUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_GoronCity_LargePot_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[00]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Common.AirStartUp()


    call ready()


    fork {

        call c01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C01', 'IsWaitEnd': False})
    }


    fork {

        call c02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': '', 'Text1': 'C02', 'IsWaitEnd': False})
    }


    call c03()

}

void ready() {

    fork {
        EventCamera.EventTriggerCameraSavePoint()
    } {
        Dm_Locator[pot].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.0, 100.29000091552734, 0.0], 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
    } {
        Obj_GoronCity_LargePot_A_01.EventTriggerParticipateEvent()
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void c01() {
    Player_Event.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'InstanceName': '', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_Navi', 'PosOffset': [0.0, 30.0, 0.0]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 2, 'LoopEndCount': 1, 'IsRumbleController': True, 'ApplyType': 1, 'Power': 0.699999988079071})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Dm_Locator', 'Direction': 60.0, 'TurnFaceControlType': 1, 'InstanceName': 'pot', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'PosOffset': [0.0, 3.0, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'Direction': 60.0, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'InstanceName': 'pot', 'WorldPos': [0.0, 0.0, 0.0], 'Target': 3, 'KeepTalkWait': False, 'PosOffset': [0.0, 3.0, 0.0], 'IgnoreTargetPosMove': False, 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'pot', 'PosOffset': [0.0, 3.0, 0.0], 'IsTurnX': False, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 60.0, 'OffsetBase': 0})
    }

}

void c02() {
    SoundSystemActor.EventTriggerBanEmitSpecificSLinkUser({'SLinkUserName': 'Npc_Goron_006_Child', 'CommandLife': 0, 'BanType': 0})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pot', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
}

void c03() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03', 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pot', 'PosVector': [4.239999771118164, 0.8700000047683716, 4.070000171661377], 'AtVector': [3.9600000381469727, 0.8199999928474426, 3.799999952316284], 'TargetFovy': 21.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        Npc_Navi.EventNaviFollowPlayer({'OffsetType': -1, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsWaitEnd': False, 'Speed': -1.0})
    }


    fork {
        Obj_GoronCity_LargePot_A_01.EventPlayAS({'ASName': 'Start', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_GoronCity_LargePot_A_01.EventPlayAS({'ASName': 'Loop', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {

        fork {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 4, 'Power': 0.05000000074505806, 'LoopEndCount': 40})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dooon', 'Length': 0.0})
        } {
            EventSystemActor[00].EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_GoronCity_LargePot_A_01', 'IsWaitEnd': False, 'ELinkKeyName': 'Dm_Goron_0010_Smoke_C03', 'InstanceName': ''})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 185})

        fork {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 200})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'pot', 'PosVector': [3.759999990463257, 9.850000381469727, 6.570000171661377], 'AtVector': [3.4100000858306885, 9.210000038146973, 6.199999809265137], 'TargetFovy': 63.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04'})
        } {
            EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_GoronCity_LargePot_A_01', 'ELinkKeyName': 'Move', 'InstanceName': '', 'IsWaitEnd': False})
        }

    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}
