-------- EventFlow: Dm_TimeTemple_0065 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithRolling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0065/Dm_TimeTemple_0065_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0065_Link.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventNaviMoveAtPos', 'EventNaviTrailRestart', 'EventGoOffstageForUser', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0065_Navi.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0065/Dm_TimeTemple_0065_Npc_Navi/workspace.pp__ModelProject.gyml'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Slow]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[RightSide]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[LeftSide]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[FrontSide]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_TimeTemple_0065', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        Player_Event.EventPlayerMoveToAnchor({'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'MoveSpeed': 0.9200000166893005, 'AnchorInstanceName': 'Dm_TimeTemple_0065Destination', 'AnchorActorName': 'DestinationAnchor', 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': True, 'ApplySlowMove': True, 'IsSheathed': True, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': True, 'IsKeepSpeed': False, 'DecSpeedDistance': 6.0})
        EventSystemActor[Slow].EventWait({'IsWaitEnd': True, 'Frames': 80})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C01', 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'ForceFadeFrame': -1.0})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'IsAllSlot': False, 'ForceFadeFrame': 30.0, 'UseAnmDriven': False})
        EventSystemActor[Slow].EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call CameraAnimeBranch()

    } {
        Npc_Navi.EventNaviMoveAtPos({'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IncSpeedDistance': 0.0, 'ASCommand': '', 'IsLookAtObject': False, 'IsWaitEnd': False, 'WorldPos': [51.0, 105.0, -34.400001525878906], 'DecSpeedDistance': 1.0, 'MinimumSpeed': 3.0, 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 3.0})
        EventSystemActor[ESA2].EventWait({'Frames': 330, 'IsWaitEnd': True})
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'IsWaitEnd': False, 'Position': [41.63999938964844, 104.45999908447266, -33.7599983215332], 'YAngle': 0.0})
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C01', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'IsAnimeDriven': False})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [3.799999952316284, 220.0, -400.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': True, 'StartDistance': 6.5, 'StartFNumber': 8.0, 'StartBluarLevel': 0.75, 'IsEnableNear': False, 'RequiredFrame': 470, 'EndBluarLevel': 1.0, 'EndFNumber': 12.0, 'EndDistance': 13.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsWaitEnd': True, 'StartFNumber': 12.0, 'EndFNumber': 11.0, 'EndDistance': 11.899999618530273, 'StartDistance': 13.0, 'RequiredFrame': 500, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': True, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'StartFNumber': 11.0, 'StartDistance': 11.899999618530273, 'EndDistance': 7.5, 'EndFNumber': 8.600000381469727, 'RequiredFrame': 198, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': True, 'IsEnableNear': False, 'StartBluarLevel': 1.0, 'EndFNumber': 8.0, 'EndDistance': 6.5, 'EndBluarLevel': 0.75, 'StartFNumber': 8.600000381469727, 'StartDistance': 7.5, 'RequiredFrame': 155, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 200})

    }


    fork {
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False, 'KeepManualModeFrame': 220.0})
    } {
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/Market.game__location__Location.gyml'})
    } {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 108})
    } {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }

}

void CameraAnimeBranch() {

    fork {
        Dm_Locator[LeftSide].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [67.22000122070312, 107.0, -26.049999237060547]})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'FrontSide', 'CheckDistance': 131.60000610351562}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CameraName': '', 'IsReferenceRootOnce': False, 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False, 'InterpolateFrame': 0.0, 'SceneName': 'C01-1-FT', 'IsIgnoreRootRot': True, 'OverwriteEndFrame': 1440.0})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'InstanceNameB': 'LeftSide', 'CheckDistance': 6.199999809265137}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CameraName': '', 'IsReferenceRootOnce': False, 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False, 'SceneName': 'C01-1-LT', 'InterpolateFrame': 220.0, 'IsIgnoreRootRot': True, 'OverwriteEndFrame': 1440.0})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'EventCamera', 'ActorNameB': 'Dm_Locator', 'CheckDistance': 6.199999809265137, 'InstanceNameB': 'RightSide'}) {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CameraName': '', 'IsReferenceRootOnce': False, 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False, 'SceneName': 'C01-1-RT', 'InterpolateFrame': 220.0, 'IsIgnoreRootRot': True, 'OverwriteEndFrame': 1440.0})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CameraName': '', 'IsReferenceRootOnce': False, 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': '', 'SceneName': 'C01-1', 'IsWaitEnd': True, 'InterpolateFrame': 210.0, 'CalcUpInInterpolate': True, 'IsIgnoreRootRot': True, 'OverwriteEndFrame': 1440.0})
        }
    } {
        Dm_Locator[RightSide].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [67.22000122070312, 107.0, -41.81999969482422]})
    } {
        Dm_Locator[FrontSide].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-66.0, 103.94000244140625, -34.0]})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'LookAtDis': -1.0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': True, 'TargetFovy': 50.13999938964844, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 0, 'PosVector': [41.61000061035156, 103.41000366210938, -29.850000381469727], 'AtVector': [41.224998474121094, 104.41999816894531, -34.0], 'IsLinearMove': False, 'MoveTime': 80, 'IsEnableRevertFast': False})
}
