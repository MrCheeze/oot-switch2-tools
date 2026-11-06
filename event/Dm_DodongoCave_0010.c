-------- EventFlow: Dm_DodongoCave_0010 --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_DodongoCave_0010_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '使用しない'}

Actor: Obj_DodongoCave_BrokenStair_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePosAtCamera']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventTriggerParticipateEvent', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Look_point]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_DodongoCave_0010/Dm_DodongoCave_0010_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DodongoCave_0010_Locator.root.as'}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[avoid]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[avoid_Front_L]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[avoid_Front_R]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventCamera[01]
entrypoint: None()
actions: ['EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenterAtCurrent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosAtCamera()

    call Common.AirStartUp()

    TerrainSystemActor.EventTerrainCalcCenterAtCurrent({'SceneName': 'DodongoCavern_01', 'IsWaitEnd': True})

    fork {
        Player_Event.EventTriggerParticipateEvent()
    } {
        Obj_DodongoCave_BrokenStair_A_01.EventTriggerParticipateEvent()
    } {
        Dm_Locator[camera].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-44.36000061035156, 103.0, -37.040000915527344], 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.4000000059604645})
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'RisingStaircase', 'IsIgnoreDucking': True})
    } {
        Dm_Locator[avoid].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-48.0, 103.69999694824219, -48.5], 'ClothWarpMode': -1})
    } {
        Dm_Locator[avoid_Front_L].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-50.66999816894531, 103.69999694824219, -43.959999084472656], 'ClothWarpMode': -1})
    } {
        Dm_Locator[avoid_Front_R].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-47.36000061035156, 103.69999694824219, -43.91999816894531], 'ClothWarpMode': -1})
    } {
        Dm_Locator[Look_point].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-49.0099983215332, 103.0, -47.709999084472656]})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DodongoCavern_Room10_PlayerOutOfRoom', 'Index': -1}) {

        call Gimmick()

        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Event7:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            Event5:
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 366})
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.6799999475479126, -4.949999809265137], 'AtVector': [0.0, 0.4399999976158142, -0.10000000149011612], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 0.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            goto Event5
        }
    } else {

        fork {

            call Gimmick()

        } {

            call Player_position()

        }

        goto Event7
    }
}

void Player_position() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'IsAnchorActorB': False, 'CheckDistance': 0.8500000238418579, 'InstanceNameB': 'avoid'}) {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-46.5, 103.62999725341797, -48.5], 'ClothWarpMode': 0, 'EnableInAir': False})
        Event12:
        Player_Event.EventPlayerTurnAndLook({'KeepTalkWait': False, 'IgnoreTargetPosMove': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'IsWaitEnd': True, 'UseNormalTurn': False, 'SlowTurn': True, 'Target': 3, 'ActorName': 'Dm_Locator', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Look_point', 'PosOffset': [0.0, 5.0, 0.0], 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'IsAnchorActorB': False, 'CheckDistance': 0.8500000238418579, 'InstanceNameB': 'avoid_Front_L'}) {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-51.41999816894531, 103.70999908447266, -43.02000045776367], 'ClothWarpMode': 0, 'EnableInAir': False})
        goto Event12
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'IsAnchorActorB': False, 'CheckDistance': 0.8500000238418579, 'InstanceNameB': 'avoid_Front_R'}) {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-46.63999938964844, 103.70999908447266, -43.16999816894531], 'ClothWarpMode': 0, 'EnableInAir': False})
    }
    goto Event12
}

void Gimmick() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0', 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'camera'})
    } {
        Obj_DodongoCave_BrokenStair_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Obj_DodongoCave_BrokenStair_A_01_Demo_Anim'})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 165})

        fork {
            EventCamera[01].EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 11, 'IsRumbleController': False, 'LoopEndCount': 4, 'Power': 0.05000000074505806})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 1.7799999713897705, 'RumbleCall': 'Demo_Large_BuBuBu'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 107})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Power': 2.0, 'Pattern': 2, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 1.0})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtWorldPos': [-49.029998779296875, 105.70999908447266, -45.18000030517578], 'IsWaitEnd': True, 'IsLookAtObject': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'PassThrough': -0.5, 'IsHomePosition': True, 'IsTurnLooking': False, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 180})
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ActorName': 'Obj_DodongoCave_BrokenStair_A_01', 'ELinkKeyName': 'Dm_DodongoCave_0010_Smoke', 'InstanceName': ''})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

}
