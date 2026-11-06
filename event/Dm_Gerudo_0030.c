-------- EventFlow: Dm_Gerudo_0030 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Gerudo_SwitchShutter_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Gerudo_007
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerParticipateEvent', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerTurnAndLookNow']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Gerudo_006
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventTriggerParticipateEvent', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[stairs]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()

    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'ActorFileName': 'Animal_Epona_Adult', 'Type': 0}) {

        call C01_Horse()

    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'camera', 'CheckDistance': 3.0, 'ActorNameB': 'LastRiddenAnimal_ForEvent', 'InstanceNameB': ''}) {
        Event9:

        fork {

            call C01()

        } {
            GameSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
            LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-24.899999618530273, 104.80999755859375, -98.51000213623047], 'YAngle': 200.0})
        }

    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': False, 'ActorNameA': 'Npc_Gerudo_006', 'InstanceNameA': '', 'ActorNameB': 'LastRiddenAnimal_ForEvent', 'InstanceNameB': '', 'CheckDistance': 8.0}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': False, 'ActorNameA': 'Dm_Locator', 'ActorNameB': 'LastRiddenAnimal_ForEvent', 'InstanceNameB': '', 'InstanceNameA': 'stairs', 'CheckDistance': 6.0}) {

            fork {

                call C01()

            } {
                LastRiddenAnimal_ForEvent.EventDoNothing({'IsWaitEnd': True})
            }

        } else {
            goto Event9
        }
    } else {

        call C01()

    }
}

void Ready() {

    fork {
        Npc_Gerudo_007.EventTriggerParticipateEvent()
        Npc_Gerudo_007.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': False, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'PosOffset': [0.0, 15.0, 0.0]})
    } {
        Npc_Gerudo_006.EventTriggerParticipateEvent()
        Npc_Gerudo_006.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player_Event.EventTriggerParticipateEvent()
    } {
        Obj_Gerudo_SwitchShutter_A_01.EventTriggerParticipateEvent()
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-23.639999389648438, 118.41000366210938, -109.55000305175781], 'ClothWarpMode': -1})
    } {
        Dm_Locator[camera].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-20.170000076293945, 105.63999938964844, -96.56999969482422]})
    } {
        Dm_Locator[stairs].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-18.139999389648438, 108.06999969482422, -102.55999755859375]})
    }

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '01'})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 190})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-23.40999984741211, 104.88999938964844, -99.83000183105469], 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerTurnAndLookNow({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'OffsetBase': 0, 'Direction': 0.0, 'PosOffset': [3.0, 0.0, 0.0], 'IsDoNavi': False})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Gerudo_006', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'offset': [-0.5, 0.20000000298023224, 0.0], 'IsUseAfterPlayerTurn': True})
            Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'PosOffset': [2.0, 0.0, 0.0]})
        } {
            Npc_Gerudo_006.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 5.0, 0.0]})
        }


        call C01_To_open()

    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 10.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'SlowTurn': True, 'IsWaitEnd': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_Gerudo_006', 'KeepTalkWait': True, 'UpperASCommand': '', 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Gerudo_006'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        Npc_Gerudo_006.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 1})
}

void C01_Horse() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '01'})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 190})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-24.440000534057617, 104.77999877929688, -99.30000305175781], 'YAngle': 180.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Gerudo_006', 'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'offset': [-0.5, 0.20000000298023224, 0.0], 'IsUseAfterPlayerTurn': True})
            Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'PosOffset': [2.0, 0.0, 0.0]})
        } {
            Npc_Gerudo_006.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Obj_Gerudo_SwitchShutter_A_01', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 5.0, 0.0]})
        }


        call C01_To_open()

    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 10.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

    fork {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    } {
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Gerudo_006'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        Npc_Gerudo_006.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 2, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 1})
}

void C01_To_open() {

    fork {
        Obj_Gerudo_SwitchShutter_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ToOpen'})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.10000000149011612, 'IsRumbleController': True})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 4, 'Power': 0.10000000149011612, 'LoopEndCount': 45, 'IsRumbleController': True})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 400})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'IsRumbleController': True, 'Pattern': 1, 'ApplyType': 1, 'Power': 1.2000000476837158})
        } {
            Obj_Gerudo_SwitchShutter_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Gerudo_0030_00_Smoke_01'})
        }

    } {
        Obj_Gerudo_SwitchShutter_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_Gerudo_0030_00_Smoke_00', 'SLinkKey': ''})
        Obj_Gerudo_SwitchShutter_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_Gerudo_0030_00_Sand_00', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}
