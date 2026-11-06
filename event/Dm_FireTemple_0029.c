-------- EventFlow: Dm_FireTemple_0029 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0, 'ExceptionalBindType': 3}

Actor: Obj_FireTemple_HammerStair_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePosAtCamera']
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

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosAtCamera()

    call Ready()


    call C01()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 33})
}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Obj_FireTemple_HammerStair_A_01', 'SceneName': 'C01-0'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Pattern': 7, 'Power': 1.0, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Pattern': 7, 'Power': 1.0, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Pattern': 7, 'Power': 0.8999999761581421, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Pattern': 7, 'Power': 0.8999999761581421, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'IsRumbleController': False, 'Pattern': 2, 'ApplyType': 1, 'Power': 2.0})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        }

    } {
        Obj_FireTemple_HammerStair_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False, 'ASName': 'Obj_FireTemple_HammerStair_A_01_Demo_Anim'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FireTemple_Room14_HammmerStair_Complete', 'Index': -1, 'Value': True})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 2})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'OffsetType': -1, 'offset': [-0.5, 0.0, 0.0], 'ArrivedASCommand': 'Wait', 'OverwriteRotNearDist': -1.0, 'IsTurnLooking': True, 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Obj_FireTemple_HammerStair_A_01', 'IsHomePosition': True, 'IsUseAfterPlayerTurn': True})
        } {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'SlowTurn': True, 'KeepTalkWait': False, 'IsDoNavi': False, 'Target': 0, 'WorldPos': [-29.809999465942383, 167.0, -4.980000019073486], 'ActorName': ''})
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        }

    } {
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ActorName': 'Obj_FireTemple_HammerStair_A_01', 'ELinkKeyName': 'Dm_FireTemple_0029_Smoke', 'InstanceName': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsEnableNear': False, 'IsWaitEnd': False, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsEnableDofFarCancel': False, 'RequiredFrame': 0, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void Ready() {

    fork {
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        Obj_FireTemple_HammerStair_A_01.EventTriggerParticipateEvent()
    }

}
