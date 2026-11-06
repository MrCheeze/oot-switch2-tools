-------- EventFlow: Dm_MelodyGet_Time --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventPlayerTurnAndLook', 'EventPlayerPlayOcarinaFree', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEmitXLink', 'EventTriggerEmitNpcOrPlayerVoice', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Time/Dm_MelodyGet_Time_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Time_Player_Child.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Child
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventPlayAS', 'EventPlayASWithClothWarp', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_MelodyGet_Time/Dm_MelodyGet_Time_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_MelodyGet_Time_Zelda_Child.root.as', 'IsGrounding': True, 'Position': [0.0, 0.0, 0.0]}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics', 'EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetActor', 'EventNaviMoveAroundToPlayer', 'EventNaviMoveAtPos', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart', 'Event_ResetEnvPaletteForFlowchart', 'Event_SetWindForFlowchart', 'EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStartScenery', 'EventTriggerSoundStopScenery', 'EventTriggerResetReverbParamSnapshot', 'EventTriggerSetReverbParamSnapshot', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[2]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[C02]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Item_Ocarina_Time
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 4}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[window]
entrypoint: None()
actions: ['Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[fog]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[C13]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    fork {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Ocarina_Time', 'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False})
    } {
        Npc_Hylia_Zelda_Child.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call C01()


    call C02()


    call C03()


    call C04()

    CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_2dVolume_00', 'SLinkKey': ''})

    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()

    CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_MelodyGet_Time_2dVolume_00', 'IsKill': True, 'SLinkKey': ''})

    call C13()


    call C14()


    call DoorOfTime.Dm_MelodyGet_Time_After()

}

void C02() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'Text3': '', 'Text2': ''})
    } {
        Dm_Locator[C02].EventWarpToTargetPosAndRot({'Position': [6.26001501083374, 150.0959014892578, 55.74882125854492], 'YAngle': -65.37484741210938, 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'C02', 'OffsetBase': 1, 'YAngle': 0.0, 'UseDemoWait': True, 'PositionOffset': [0.0, 0.0, 1.0199999809265137]})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': 60.0, 'ASCommand': 'C02-Player_Child-A-0', 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [5.909999847412109, 153.60000610351562, 51.650001525878906], 'AtVector': [4.139999866485596, 153.99000549316406, 55.0099983215332], 'TargetFovy': 37.400001525878906, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [5.909999847412109, 153.60000610351562, 51.650001525878906], 'TargetFovy': 37.400001525878906, 'AtVector': [4.139999866485596, 152.38800048828125, 55.0099983215332], 'MoveTime': 240, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': -75.0, 'IsWaitEnd': True, 'Position': [6.573562145233154, 151.22210693359375, 56.10332107543945], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ASCommand': 'EvtWait', 'MoveSpeed': 0.8999999761581421, 'IsLookAtObject': True, 'LookAtWorldPos': [2.7809998989105225, 151.11599731445312, 57.404998779296875], 'OverwriteRotNearDist': -1.0, 'WorldPos': [3.299999952316284, 151.35000610351562, 57.650001525878906]})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C02', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C02', 'Frames': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'StartDistance': 11.399999618530273, 'EndDistance': 11.399999618530273, 'StartFNumber': 10.300000190734863, 'EndFNumber': 10.300000190734863, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C01() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [13.260000228881836, 147.75999450683594, 42.63999938964844], 'AtVector': [13.380000114440918, 147.77000427246094, 42.66999816894531], 'TargetFovy': 30.299999237060547, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -60.0, 'ASCommand': 'EvtWait', 'Position': [15.55031967163086, 145.654296875, 43.16011047363281], 'ClothWarpMode': 0, 'EnableInAir': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C01-Player_Child-A-0', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ClothWarpMode': 0})
        } {
            GameSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameSystemActor[vibration].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Biyoon'})
        }

    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'Position': [15.514679908752441, 146.0, 43.52003860473633], 'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 90.0})
        Npc_Navi.EventNaviMoveAtPos({'WorldPos': [15.514679908752441, 148.24769592285156, 43.52043914794922], 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsWaitEnd': False, 'IsLookAtObject': True, 'ASCommand': 'EvtWait', 'LookAtWorldPos': [15.504870414733887, 148.018798828125, 43.113670349121094], 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 3.0, 'DecSpeedDistance': 0.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C01', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C01', 'Frames': 0})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 110})
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_Splash', 'SLinkKey': ''})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Time_000'})
    }

}

void C03() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_ItemGet_FromZelda', 'CommandLife': 2, 'IsReleaseDucking': False})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C03', 'BgAlignH': 0, 'BgAlignW': 0, 'Text3': '', 'Text2': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.8600000143051147, 0.6000000238418579, 1.4600000381469727], 'AtVector': [-0.41999998688697815, 0.7400000095367432, 0.75], 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.7900000214576721, 0.6299999952316284, 1.340000033378601], 'AtVector': [-0.41999998688697815, 0.7400000095367432, 0.75], 'TargetFovy': 22.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 250, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [2.7809998989105225, 151.11599731445312, 57.404998779296875], 'Target': 0, 'ActorName': ''})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'C03-Player_Child-A-0', 'ClothWarpMode': 3, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'KeepOneTimeAnm': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C03', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C03', 'Frames': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 7.989999771118164, 'EndDistance': 7.989999771118164, 'StartFNumber': 6.760000228881836, 'EndFNumber': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TypeID': 'get_item', 'TargetID': 'Item_Ocarina_Time', 'Frame': 58})
    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call GetPouchContent.DisplayGetByActorName({'ActorName': 'Item_Ocarina_Time'})


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C03-Player_Child-A-0-Ed', 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    }

}

void C04() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'Text1': 'C04', 'BgAlignW': 0, 'Text4': '', 'Text3': '', 'Text2': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.47999998927116394, 1.1200000047683716, -0.25], 'AtVector': [-0.03999999910593033, 0.7900000214576721, 0.1599999964237213], 'TargetFovy': 29.829999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 200, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'IsWaitEnd': False, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.41999998688697815, 1.0800000429153442, -0.1899999976158142], 'AtVector': [-0.03999999910593033, 0.7900000214576721, 0.1599999964237213], 'TargetFovy': 29.829999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'Frames': 170, 'IsWaitEnd': True})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C04', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C04', 'Frames': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsEnableNear': False, 'StartDistance': 1.090000033378601, 'EndDistance': 1.090000033378601, 'StartFNumber': 7.599999904632568, 'EndFNumber': 7.599999904632568, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_CutChangeShine', 'SLinkKey': ''})
    }

}

void C05() {

    fork {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -180.0, 'ClothWarpMode': -1, 'Position': [800.0, 301.8699951171875, -356.8999938964844]})
    } {
        Dm_Locator[2].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [800.0, 301.8699951171875, -356.8999938964844]})
    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 300, 'BgAlignH': 0, 'BgAlignW': 0, 'Text1': 'C05', 'IsWaitEnd': False, 'Text5': '', 'Text4': '', 'Text3': '', 'Text2': ''})
    } {
        Npc_Hylia_Zelda_Child.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '1', 'OffsetBase': 1, 'YAngle': 180.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 20.0, 0.0]})
        Dm_Item_Ocarina_Time.EventTriggerModelBind({'ActorName': 'Npc_Hylia_Zelda_Child', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Weapon_L'})
        Npc_Hylia_Zelda_Child.EventPlayAS({'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_001_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsPlayASAllSlot': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_MelodyGet_Time', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'InstanceName': '1', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.5, 10.0], 'ASCommand': 'EvtWait'})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'IsWaitEnd': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': -75.0, 'IsWaitEnd': False, 'Position': [8.747489929199219, 154.43389892578125, 59.96818923950195], 'ClothWarpMode': -1})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': True, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Elevation': 0.0, 'Speed': 0.0})
        SoundSystemActor.EventTriggerSoundStartScenery({'Name': 'ハイラル城下町：時の神殿内部エリア', 'FadeTime': 0.10000000149011612, 'CommandLife': 2, 'BlendRate': 1.0})
        SoundSystemActor.EventTriggerSetReverbParamSnapshot({'SnapshotFilename': 'Work/Sound/Effect/ReverbParamSnapshot/TempleOfTime.game__sound__ReverbParamSnapshot.gyml'})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_Dust', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    fork {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Length': 1})
    } {
        EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'IsWaitEnd': False, 'EnvTimeTableName': '', 'ChangeSpeed': 5, 'EnvPaletteName': 'Dm_MelodyGet_TimeOfTemple_Bluesky_Noon'})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C05', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C05', 'IsWaitEnd': False, 'Frames': 0})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'LightType': 1, 'LightHash': 'Door_Light', 'TargetActorKind': 1, 'ActorName': 'Npc_Hylia_Zelda_Child', 'PositionOffset': [0.0, 7.0, 3.0], 'InstanceName': '', 'OffsetBase': 0, 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'Direction': [0.0, -0.3499999940395355, 0.9300000071525574]})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Time_FogClear'})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_002_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsPlayASAllSlot': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C05-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    }

}

void C06() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C06', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C06', 'Frames': 0})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C06', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartFNumber': 60.0, 'EndFNumber': 60.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [1.0299999713897705, 0.8700000047683716, -0.6100000143051147], 'AtVector': [0.5400000214576721, 0.800000011920929, -0.36000001430511475], 'TargetFovy': 17.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [0.8999999761581421, 0.8500000238418579, -0.5400000214576721], 'AtVector': [0.5400000214576721, 0.800000011920929, -0.36000001430511475], 'TargetFovy': 17.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 660, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_003_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsPlayASAllSlot': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 430})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_004_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsPlayASAllSlot': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    }

}

void C07() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C07', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C07', 'Frames': 0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_005_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'ASName': 'C05-Npc_Hylia_WU_Zelda_Child-A-0-Loop', 'IsPlayASAllSlot': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'TargetFovy': 20.600000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 0.5400000214576721, 4.380000114440918], 'AtVector': [0.0, 0.699999988079071, 0.20000000298023224], 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C07', 'BgAlignW': 0, 'BgAlignH': 0, 'Text3': '', 'Text2': ''})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': False, 'IsEnableNear': False, 'EndBluarLevel': 0.0, 'StartBluarLevel': 0.0, 'EndFNumber': 0.0, 'StartFNumber': 0.0, 'StartDistance': 0.0, 'EndDistance': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Hylia_Zelda_Child.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_FogClear', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Hylia_Zelda_Child.EventPlayAS({'ASName': 'C07-Npc_Hylia_WU_Zelda_Child-A-St', 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})

    fork {
        GameSystemActor[fog].EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C07', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C07_02', 'IsWaitEnd': True, 'Frames': 70})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 160, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [0.0, 0.9800000190734863, 5.829999923706055], 'TargetFovy': 19.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 1.3600000143051147, 1.9600000381469727], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Zelda_Child.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_006_b', 'IsAnimeDriven': True, 'IsPlayASAllSlot': True, 'ASName': 'C07-Npc_Hylia_WU_Zelda_Child-A-Loop', 'IsWaitEnd': False, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'Door_Light', 'FrameTransitionCount': 70, 'IsFrameTransition': True, 'EditSourceRadius': False, 'LocationalLightCreateType': 0, 'EditColor': True, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'SourceRadius': 0.10000000149011612, 'Intensity': 10000.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}

void C08() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C08', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C08', 'Frames': 0})
    PostProcessingActor.EventEditLocationalLight({'LightHash': 'Door_Light', 'FrameTransitionCount': 70, 'EditSourceRadius': False, 'Intensity': 0.0, 'IsFrameTransition': False, 'EditColor': False, 'LocationalLightCreateType': 0, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'SourceRadius': 0.10000000149011612})
    Npc_Hylia_Zelda_Child.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

        call Dm_SY_Ocarina.LearningOcarinaPlayExample({'MelodyType': 4, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_006_c'})

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C08-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '2'})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C08-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '2'})
    } {
        Npc_Hylia_Zelda_Child.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C08-Npc_Hylia_WU_Zelda_Child-A-0', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    }

    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'WhiteOut', 'IsIgnoreDucking': False})
    UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C08', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'InstanceName': '1', 'YAngle': 180.0, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, 2.200000047683716]})
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        Dm_Item_Ocarina_Time.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Hylia_Zelda_Child.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'C08_05-Npc_Hylia_WU_Zelda_Child-A-Loop'})
    }

}

void C09() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C09', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C09', 'Frames': 0})

    fork {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '2', 'SceneName': 'C09-0', 'IsWaitEnd': True})
    }


    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C09'})
    } {

        call Dm_SY_Ocarina.LearningOcarinaFollowExample({'MelodyType': 4})

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '2', 'IsWaitEnd': True, 'SceneName': 'C09-1'})
        EventSystemActor[1].EventWait({'Frames': 200, 'IsWaitEnd': True})
    } {

        call Dm_SY_Ocarina.LearningOcarinaPlayAuto()

        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C09-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'IsWaitEnd': False})
    } {
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 760})
        Item_Ocarina_Time.EventTriggerEmitXLink({'ELinkKey': 'Dm_MelodyGet_Time_Shine', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C10() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C10', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C10', 'Frames': 0})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C10', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [4.179999828338623, 4.230000019073486, -2.5199999809265137], 'AtVector': [0.2800000011920929, 0.6100000143051147, 0.7799999713897705], 'TargetFovy': 35.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 660, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [6.53000020980835, 6.409999847412109, -4.510000228881836], 'AtVector': [0.2800000011920929, 0.6100000143051147, 0.7799999713897705], 'TargetFovy': 35.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_FinaleJingle', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 600})

        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Melody_TimeSong'})

        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C11() {
    EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C11', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C11', 'Frames': 0})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C11', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [1.0499999523162842, 0.9900000095367432, 1.309999942779541], 'AtVector': [0.5699999928474426, 0.8799999952316284, 1.600000023841858], 'TargetFovy': 14.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 90, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '1', 'PosVector': [1.0499999523162842, 0.9900000095367432, 1.309999942779541], 'AtVector': [0.5699999928474426, 0.8799999952316284, 1.600000023841858], 'TargetFovy': 14.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C11-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 3})
    } {
        Npc_Hylia_Zelda_Child.EventPlayASWithClothWarp({'ASName': 'C11-Npc_Hylia_WU_Zelda_Child-A-0', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C12() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C12', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C12-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C12', 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C12', 'Frames': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        UISystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[C13].EventWarpToTargetPosAndRot({'YAngle': -69.58717346191406, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [3.001477003097534, 150.1999969482422, 57.29661178588867]})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Hylia_Zelda_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_009_b', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsOverrideStyle': True, 'OverrideStyle': 6, 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MelodyGet_Time_EndConversationWithZelda', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 470})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void C13() {
    SoundSystemActor.EventTriggerSoundStopScenery({'Name': 'ハイラル城下町：時の神殿内部エリア', 'FadeTime': 0.5})
    SoundSystemActor.EventTriggerResetReverbParamSnapshot()
    EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': True})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C13', 'BgAlignH': 0, 'BgAlignW': 0, 'Text2': ''})
    } {
        Player_Event.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'C13', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': -69.58717346191406, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [3.001477003097534, 150.1999969482422, 57.29661178588867]})
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [2.0, 2.0, 0.20000000298023224], 'ClothWarpMode': -1})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_MelodyGet_Time_C13', 'CurrDemoPaletteName': 'Dm_MelodyGet_Time_C13', 'Frames': 0})
    } {
        EventWorldManagerController[window].Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
    } {
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_MelodyGet_Time_Dust', 'IsKill': False})
    } {
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }


    fork {
        UISystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Length': 0})
    } {
        Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'C13'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.3100000023841858, 0.800000011920929, 0.7900000214576721], 'AtVector': [-0.14000000059604645, 0.8399999737739563, 0.44999998807907104], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 80, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.4000000059604645, 0.7799999713897705, 0.9599999785423279], 'AtVector': [-0.14000000059604645, 0.8399999737739563, 0.44999998807907104], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C13-Player_Child-A-0', 'IsAllSlot': True, 'ClothWarpMode': 3})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_MelodyGet_Time_010'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 6.760000228881836, 'EndFNumber': 6.760000228881836, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'StartDistance': 1.600000023841858, 'EndDistance': 1.600000023841858, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    Npc_Navi.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_MelodyGet_Time_00'})
    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsHomePosition': False, 'IsNearOffset': False, 'IsLookAtObject': True, 'LookAtTarget': 2, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'offset': [0.2800000011920929, 0.10000000149011612, 0.20000000298023224], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'IsOffCenterCamera': True, 'MoveSpeed': 2.0, 'MinimumSpeed': 0.800000011920929, 'DecSpeedDistance': 0.5})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_010_b', 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
}

void C14() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C14', 'Text2': ''})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [0.949999988079071, 151.94000244140625, 56.25], 'AtVector': [2.7200000286102295, 151.02000427246094, 57.279998779296875], 'TargetFovy': 45.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C14-Player_Child-A-0', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'WorldPos': [2.8947880268096924, 152.0, 61.433101654052734], 'TurnFaceControlType': 1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'EvtTalkingL', 'ForceFadeFrame': 60.0, 'IsAllSlot': True, 'ClothWarpMode': 0, 'KeepOneTimeAnm': False, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'ForceFadeFrame': 60.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 7.989999771118164, 'EndDistance': 7.989999771118164, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'StartFNumber': 5.699999809265137, 'EndFNumber': 5.699999809265137, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 178.01539611816406, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [2.799999952316284, 151.27349853515625, 57.67441940307617]})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_011_b', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.TimeTemple', 'Index': -1}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_012_b', 'MaintainPerformanceState': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Event11:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'WorldPos': [2.030600070953369, 151.31460571289062, 55.54800033569336], 'KeepTalkWait': False, 'SlowTurn': True, 'UseNormalTurn': False, 'UpperASCommand': '', 'IsDoNavi': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Dm_MelodyGet_Time:Dm_MelodyGet_Time_Text_013_b', 'MaintainPerformanceState': 0})
        goto Event11
    }
}
