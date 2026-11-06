-------- EventFlow: Dm_Gerudo_0020 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventNaviTrailRestart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_016_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventWarpToTargetPosAndRot', 'EventTriggerRequestLookAtTheFront', 'EventLookAtObjectImmediate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_013_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventAIScheduleMoveToAnchor', 'EventWarpToTargetPosAndRot', 'EventLookAtObjectImmediate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_014_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventLookAtObjectImmediate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_015_Adult[GerudoFortress]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventLookAtObjectImmediate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[cut_number]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[CP]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[SP]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[message_branch(Npc_EventStarter)]
entrypoint: message_branch(Npc_EventStarter)
actions: ['EventTalk']
queries: []
params: None

void EntryPoint0() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [-2.059999942779541, 1.4700000286102295, -0.14000000059604645], 'AtVector': [-1.1399999856948853, 1.3700000047683716, -0.07000000029802322], 'TargetFovy': 34.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_013_Adult[GerudoFortress].EventLookAtObjectImmediate({'IsWaitEnd': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_013_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -91.1701431274414, 'Position': [30.799999237060547, 102.5, -70.33000183105469], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 90.08705139160156, 'Position': [28.0, 102.5, -70.44999694824219], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'GerudoFortress', 'ActorName': 'Npc_Hylia_013_Adult'})
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.08698272705078, 'Position': [27.90999984741211, 104.16000366210938, -70.83999633789062], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {

        call Npc_Gerudo_001_CreateCheck({'GameDataName': 'GerudoFortress_WarpPoint01_ClearEvent'})

    } {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [30.799999237060547, 102.5, -70.33000183105469], 'ClothWarpMode': -1})
    } {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    }


    fork {
        Npc_Hylia_013_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0000', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    call 0020C02()

}

void EntryPoint1() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.3100000023841858, 1.4500000476837158, 1.0399999618530273], 'AtVector': [0.7099999785423279, 1.3600000143051147, 2.049999952316284], 'TargetFovy': 27.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_014_Adult[GerudoFortress].EventLookAtObjectImmediate({'IsWaitEnd': False, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_014_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -89.76510620117188, 'Position': [71.4000015258789, 120.5, -110.06999969482422], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 70.69508361816406, 'Position': [68.04000091552734, 120.5, -110.02999877929688], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_014_Adult', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'GerudoFortress'})
    } {

        call Npc_Gerudo_001_CreateCheck({'GameDataName': 'GerudoFortress_WarpPoint02_ClearEvent'})

    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [68.0999984741211, 122.16999816894531, -110.45999908447266], 'YAngle': 70.69497680664062, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsWaitEnd': False, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'LookAtInstanceName': '', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': ''})
    } {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    }


    fork {
        Npc_Hylia_014_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0004', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    call 0021C02()

}

void EntryPoint2() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [0.0, 1.440000057220459, -1.9800000190734863], 'AtVector': [-0.009999999776482582, 1.3200000524520874, -1.059999942779541], 'TargetFovy': 32.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_015_Adult[GerudoFortress].EventLookAtObjectImmediate({'Target': 2, 'IsWaitEnd': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_015_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -180.0, 'Position': [41.7400016784668, 119.0, -24.0], 'ClothWarpMode': -1})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 0.0, 'Position': [41.810001373291016, 119.0, -26.209999084472656], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        call Npc_Gerudo_001_CreateCheck({'GameDataName': 'GerudoFortress_WarpPoint03_ClearEvent'})

    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [42.27000045776367, 120.66000366210938, -26.299999237060547], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [41.7400016784668, 119.0, -24.0], 'ClothWarpMode': -1})
    } {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    }

    Npc_Hylia_015_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0008', 'MaintainPerformanceState': 0})

    call 0022C02()

}

void EntryPoint3() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.029999999329447746, 1.399999976158142, 0.7200000286102295], 'AtVector': [0.09000000357627869, 1.350000023841858, 1.6399999856948853], 'TargetFovy': 26.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 2.799999952316284, 'EndDistance': 2.799999952316284, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_016_Adult[GerudoFortress].EventLookAtObjectImmediate({'Target': 2, 'IsWaitEnd': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_016_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 95.0, 'Position': [14.180000305175781, 110.0, -76.62999725341797], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -90.52217102050781, 'ASCommand': 'DemoWaitHalf', 'Position': [17.350000381469727, 110.0, -76.80999755859375], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_016_Adult', 'InstanceName': 'GerudoFortress', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -90.52237701416016, 'Position': [17.43000030517578, 111.66999816894531, -76.38999938964844], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    } {

        call Npc_Gerudo_001_CreateCheck({'GameDataName': 'GerudoFortress_WarpPoint04_ClearEvent'})

    } {
        Dm_Locator[CP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [17.309999465942383, 110.0, -75.63999938964844], 'ClothWarpMode': -1})
    }


    fork {
        Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }


    call 0023C02()

}

void message_branch() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 1}) {
      case [0, 1]:
        Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0016', 'MaintainPerformanceState': 0})
        Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0017', 'MaintainPerformanceState': 0})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 2}) {
          case [0, 1]:
            Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0018', 'MaintainPerformanceState': 0})
            Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0019', 'MaintainPerformanceState': 0})
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 3}) {
              case [0, 1]:
                Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0020', 'MaintainPerformanceState': 0})
                Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0021', 'MaintainPerformanceState': 0})
              case 2:
                Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0022', 'MaintainPerformanceState': 0})
                Npc_EventStarter[message_branch(Npc_EventStarter)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0023', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Npc_Gerudo_001_CreateCheck() {
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'GerudoFortress_Meet_FourCarpenter_NumOfCarpenterHelped', 'Index': -1, 'Value': 4}) in [1, 2] {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoFortress_Npc_Gerudo_001_IsInFirstPlace', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
    }
}

void Sound_StartFanfare() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
}

void 0020C02() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [-7.78000020980835, 1.399999976158142, 1.809999942779541], 'AtVector': [-0.17000000178813934, 1.0700000524520874, -0.550000011920929], 'TargetFovy': 12.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_013_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0001', 'MaintainPerformanceState': 0})
        Npc_Hylia_013_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0002', 'MaintainPerformanceState': 0})

        fork {
            Npc_Hylia_013_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0003', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'GerudoFortress', 'ActorName': 'Npc_Hylia_013_Adult'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 8.0, 'EndDistance': 8.0, 'StartFNumber': 7.0, 'EndFNumber': 7.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'Player_IsWaitEnd': True})


    call 0020C03()

}

void 0020C03() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [-4.090000152587891, 1.940000057220459, -0.019999999552965164], 'AtVector': [-1.2699999809265137, 1.5099999904632568, -0.019999999552965164], 'TargetFovy': 16.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_013_Adult[GerudoFortress].EventTriggerRequestLookAtTheFront()
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [28.690000534057617, 102.5, -71.48999786376953], 'YAngle': 8.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'ClothWarpMode': -1, 'Position': [28.31999969482422, 104.16999816894531, -71.5999984741211], 'YAngle': 7.972677230834961, 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 5.0, 'EndDistance': 5.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call message_branch({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress")})


    call 0020C04()

}

void 0020C04() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsIgnoreRootRot': True, 'SceneName': 'C04-0-0020'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.5, 0.0, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_013_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'Position': [29.829999923706055, 102.5, -69.91000366210938], 'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -52.93040084838867})
        Npc_Hylia_013_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'AnchorType': 23, 'InstanceName': 'Dm_Gerudo_0020_Npc_MoveTargetPos'})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

        call Sound_StartFanfare()

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 5.0, 'EndDistance': 5.0, 'EndFNumber': 13.0, 'RequiredFrame': 200, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Common_Dungeon_OpenDoorChainLockMove.Ichiro_OpenDoor_Next0()

}

void 0021C02() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-3.299999952316284, 1.2999999523162842, -3.880000114440918], 'AtVector': [-1.5, 1.2300000190734863, -1.4299999475479126], 'TargetFovy': 12.699999809265137, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_014_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0005', 'MaintainPerformanceState': 0})
        Npc_Hylia_014_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0006', 'MaintainPerformanceState': 0})

        fork {
            Npc_Hylia_014_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0007', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Hylia_014_Adult', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': 'GerudoFortress'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartFNumber': 7.0, 'EndFNumber': 7.0, 'StartDistance': 9.199999809265137, 'EndDistance': 9.199999809265137, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'Player_IsWaitEnd': True})


    call 0021C03()

}

void 0021C03() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [-6.570000171661377, 1.4600000381469727, 1.5399999618530273], 'AtVector': [-3.5299999713897705, 1.409999966621399, 1.600000023841858], 'TargetFovy': 8.300000190734863, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [70.22000122070312, 120.5, -111.73999786376953], 'YAngle': 1.9972410202026367, 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Hylia_014_Adult[GerudoFortress].EventTriggerRequestLookAtTheFront()
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 1.997230052947998, 'ClothWarpMode': -1, 'Position': [69.80000305175781, 122.16999816894531, -111.88999938964844]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartFNumber': 7.0, 'EndFNumber': 7.0, 'StartDistance': 9.199999809265137, 'EndDistance': 9.199999809265137, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call message_branch({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress")})


    call 0021C04()

}

void 0021C04() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsIgnoreRootRot': False, 'SceneName': 'C04-0-0021', 'OverwriteEndFrame': 240.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.5, 0.0, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsHomePosition': True, 'IsNearOffset': True})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

        call Sound_StartFanfare()

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'EndDistance': 5.0, 'EndFNumber': 13.0, 'RequiredFrame': 200, 'StartDistance': 4.800000190734863, 'StartFNumber': 7.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_014_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'ClothWarpMode': -1, 'Position': [70.22000122070312, 120.5, -109.51000213623047], 'YAngle': -40.0})
        Npc_Hylia_014_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'AnchorType': 23, 'InstanceName': 'Dm_Gerudo_0021_Npc_MoveTargetPos'})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Common_Dungeon_OpenDoorChainLockMove.Jiro_OpenDoor_Next()

}

void 0022C02() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [-2.259999990463257, 1.350000023841858, -6.900000095367432], 'AtVector': [-1.7799999713897705, 1.2999999523162842, -5.760000228881836], 'TargetFovy': 12.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_015_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0009', 'MaintainPerformanceState': 0})
        Npc_Hylia_015_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0010', 'MaintainPerformanceState': 0})

        fork {
            Npc_Hylia_015_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0011', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartFNumber': 5.0, 'EndFNumber': 5.0, 'StartDistance': 7.400000095367432, 'EndDistance': 7.400000095367432, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress")})


    call 0022C03()

}

void 0022C03() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [0.05999999865889549, 1.6299999952316284, -2.9700000286102295], 'AtVector': [0.019999999552965164, 1.3700000047683716, -0.7599999904632568], 'TargetFovy': 21.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'Position': [42.86000061035156, 119.0, -25.549999237060547], 'YAngle': -85.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Hylia_015_Adult[GerudoFortress].EventTriggerRequestLookAtTheFront()
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [42.9900016784668, 120.66999816894531, -25.969999313354492], 'YAngle': -84.99994659423828})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartFNumber': 5.0, 'EndFNumber': 5.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call message_branch({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress")})


    call 0022C04()

}

void 0022C04() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'IsIgnoreRootRot': True, 'SceneName': 'C04-0-0022'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.5, 0.0, 0.0], 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWaitQuarter', 'ClothWarpMode': 0})
    } {
        Npc_Hylia_015_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'ClothWarpMode': -1, 'YAngle': -150.0, 'Position': [41.63999938964844, 119.0, -24.81999969482422]})
        Npc_Hylia_015_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'AnchorType': 23, 'InstanceName': 'Dm_Gerudo_0022_Npc_MoveTargetPos'})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

        call Sound_StartFanfare()

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'RequiredFrame': 200, 'StartFNumber': 5.0, 'StartDistance': 4.5, 'EndFNumber': 6.0, 'EndDistance': 8.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Common_Dungeon_OpenDoorChainLockMove.Saburo_OpenDoor_Next0()

}

void 0023C02() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [3.5799999237060547, 1.4199999570846558, -2.859999895095825], 'AtVector': [2.4200000762939453, 1.3600000143051147, -2.430000066757202], 'TargetFovy': 15.800000190734863, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0013', 'MaintainPerformanceState': 0})
        Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0014', 'ASName': 'Act_Sad_Wait', 'MaintainPerformanceState': 0})

        fork {
            Npc_Hylia_016_Adult[GerudoFortress].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Gerudo_0020:Dm_Gerudo_0020_0015', 'ASName': 'Act_Angry_Wait', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 3, 'ActorName': 'Npc_Hylia_016_Adult', 'InstanceName': 'GerudoFortress', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        Dm_Locator[SP].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [21.899999618530273, 111.37000274658203, -77.33000183105469], 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartFNumber': 7.0, 'EndFNumber': 7.0, 'StartDistance': 7.800000190734863, 'EndDistance': 7.800000190734863, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Npc_ActorName': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'Player_IsWaitEnd': True})


    call 0023C03()

}

void 0023C03() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'CP', 'PosVector': [0.8199999928474426, 1.7200000286102295, -1.2699999809265137], 'AtVector': [-2.450000047683716, 1.350000023841858, -1.0199999809265137], 'TargetFovy': 15.739999771118164, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'Position': [16.450000762939453, 110.0, -75.63999938964844], 'YAngle': 162.96409606933594, 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [14.5, 111.0, -76.80000305175781], 'ActorName': ''})
    } {
        Npc_Hylia_016_Adult[GerudoFortress].EventTriggerRequestLookAtTheFront()
    } {
        Npc_Navi.EventNaviTrailRestart({'IsWaitEnd': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [16.790000915527344, 111.66999816894531, -75.36000061035156], 'YAngle': 162.96409606933594})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.0, 0.0, 0.0], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartFNumber': 10.0, 'EndFNumber': 10.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 5.0, 'EndDistance': 5.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    call message_branch({'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress")})


    call 0023C04()

}

void 0023C04() {
    DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C04', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'SceneName': 'C04-0-0023', 'RootType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        Npc_Hylia_016_Adult[GerudoFortress].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [14.899999618530273, 110.0, -76.88999938964844], 'YAngle': 119.02120208740234, 'ClothWarpMode': -1})
        Npc_Hylia_016_Adult[GerudoFortress].EventAIScheduleMoveToAnchor({'ASName': 'Run', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'AnchorType': 23, 'InstanceName': 'Dm_Gerudo_0023_Npc_MoveTargetPos', 'IsWaitEnd': False})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

        call Sound_StartFanfare()

    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'EndFNumber': 13.0, 'RequiredFrame': 200, 'StartDistance': 3.799999952316284, 'StartFNumber': 12.0, 'EndDistance': 4.099999904632568, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call Common_Dungeon_OpenDoorChainLockMove.Shiro_OpenDoor_Next()

}
