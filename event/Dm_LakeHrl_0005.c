-------- EventFlow: Dm_LakeHrl_0005 --------

Actor: Dm_Locator[cam_p]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerChemicalRequestRevertDryTemporarily', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0005/Dm_LakeHrl_0005_Player_Child/workspace.pp__ModelProject.gyml', 'Position': [0.0, 0.0, 0.0], 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0005_Player.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage', 'EventNaviMoveAtPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_009
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopBgmInWaterFilter', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kaepora_LakeHrl_Appeared_FromValley', 'Index': -1, 'Value': True})
    TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'HyruleField_02', 'IsWaitEnd': True, 'Position': [-138.6300048828125, 130.77999877929688, 446.3500061035156]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 8, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': ''})
    }


    fork {

        call C03()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03'})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void C01() {
    SoundSystemActor.EventTriggerStopBgmInWaterFilter({'CommandLife': 0})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'IsWaitEnd': True, 'YAngle': -38.327999114990234, 'Position': [-138.92799377441406, 124.96710205078125, 446.81439208984375], 'ASCommand': 'C01-0', 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -38.327999114990234, 'Position': [-138.61000061035156, 125.1500015258789, 446.8500061035156], 'ClothWarpMode': -1})
    } {
        Npc_Zora_009.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'SceneName': 'C01-1'})
    } {
        Dm_Locator[cam_p].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-139.0800018310547, 124.23999786376953, 446.8900146484375], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsWaitEnd': False, 'OffsetType': -1})
    } {
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_LakeHrl_0005_00', 'SLinkKey': ''})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam_p', 'PosVector': [-4.429999828338623, 7.260000228881836, 5.199999809265137], 'AtVector': [-3.799999952316284, 6.96999979019165, 4.840000152587891], 'TargetFovy': 25.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 220})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -38.327999114990234, 'ASCommand': 'C02', 'Position': [-142.08099365234375, 129.20809936523438, 451.2276916503906], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C02', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_LakeHrl_0005_000'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 26})
        Player_Event.EventTriggerChemicalRequestDryTemporarily()
    } {
        Npc_Zora_009.EventDoNothing({'IsWaitEnd': True})
    } {
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0005_01'})
    } {
        Player_Event.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_LakeHrl_0005_00'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
    }

}

void C03() {
    Player_Event.EventTriggerChemicalRequestRevertDryTemporarily()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})

        fork {
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LakeHylia.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'SwimWait', 'IsAllSlot': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'WorldPos': [-141.69000244140625, 131.2899932861328, 451.3599853515625], 'ASCommand': 'Wait', 'IsLookAtObject': True, 'LookAtWorldPos': [-195.0800018310547, 131.30999755859375, 520.4099731445312], 'IsTurnLooking': True})
        }

    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 387})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
}
