-------- EventFlow: Dm_Zora_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[CP]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'CP', 'OverwriteStartFrame': 50.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 93})
    } {
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 120})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/ZoraDomain.game__location__Location.gyml'})
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'Position': [2.990000009536743, 103.91999816894531, -43.0099983215332], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'DecSpeedDistance': 2.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': [3.549999952316284, 103.86000061035156, -36.83000183105469], 'MoveSpeed': 0.25, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'Position': [3.549999952316284, 103.86000061035156, -39.45000076293945], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [3.430000066757202, 104.94999694824219, -43.290000915527344], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'Position': [2.880000114440918, 103.93000030517578, -37.97100067138672], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': True, 'IsEnableNear': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 385})
    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 0.75, 'IsEnableNear': False, 'EndDistance': 6.760000228881836, 'EndBluarLevel': 0.75, 'StartDistance': 6.760000228881836, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'RequiredFrame': 0, 'IsWaitEnd': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
