-------- EventFlow: Dm_LakeHrl_0011 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0011/Dm_LakeHrl_0011_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0011_Player.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Kaepora_LakeHylia
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0011/Dm_LakeHrl_0011_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0011_Kaepora.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Pos_Player]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0011/Dm_LakeHrl_0011_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0011_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [1.152655005455017, 154.8863983154297, 105.62519836425781]}

Actor: Dm_Locator[Pos_Kaepora]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0011/Dm_LakeHrl_0011_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0011_Dm_Locator.root.as', 'IsBindNearestActor': False, 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Rotation': [0.0, 0.0, 0.0], 'Position': [1.3021190166473389, 155.8072967529297, 105.23870086669922], 'IsWorld': True}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'Rotation': [0.0, 0.0, 0.0]}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventTriggerAddPreComputedCullingBasePos', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventSoundWaitForEventSoundFinished', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor[TerrainSystem1]
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: TerrainSystemActor[TerrainSystem2]
entrypoint: None()
actions: ['EventTerrainWaitForLoading']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call Ready()

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False, 'IsImmediately': True, 'DuckingName': 'Dm:WorldSE+Demo系SEミュート(即フェード)'})

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    }

}

void Ready() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'ASCommand': 'EvtWait', 'UseDemoWait': False, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [1.152655005455017, 154.8863983154297, 105.62519836425781], 'EnableInAir': False})
    } {
        Npc_Kaepora_LakeHylia.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [1.3021190166473389, 155.8072967529297, 105.23870086669922]})
    } {
        SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.38845399022102356, 152.83419799804688, 89.03925323486328], 'EndPos': [0.38845399022102356, 152.83419799804688, 89.03925323486328]})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    } {
        TerrainSystemActor[TerrainSystem1].EventTerrainCalcCenter({'SceneName': 'HyruleField_02', 'IsWaitEnd': True, 'Position': [1.152655005455017, 154.8863983154297, 105.62519836425781]})
        TerrainSystemActor[TerrainSystem2].EventTerrainWaitForLoading({'IsWaitEnd': True})
    }

}

void C01() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 2, 'UseAnmDriven': False, 'IsWaitEnd': False})
        Player_Event.EventTriggerModelBindWithDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'Pos_Player', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Npc_Kaepora_LakeHylia.EventPlayASWithClothWarp({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': 2, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_Kaepora_LakeHylia.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Pos_Kaepora', 'BoneName': 'Dm_Locator', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[Pos_Player].EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01_Pos_Player', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
    } {
        Dm_Locator[Pos_Kaepora].EventPlayAS({'ASName': 'C01_Pos_Kaepora', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [2.0, 155.89999389648438, 105.5999984741211], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsNearOffset': False, 'IsHomePosition': False, 'Speed': 8.0, 'offset': [-0.6000000238418579, 0.5, -0.05000000074505806], 'OffsetType': -1})
    } {
        Npc_Kaepora_LakeHylia.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0011_Feather_00'})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    } {
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 36})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
        EventSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 43})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
    }

    Player_Event.EventTriggerClearModelBindAndDependency({'ActorName': 'Dm_Locator', 'InstanceName': 'Pos_Player'})
}

void C02() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 181.1699981689453, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [1.2599999904632568, 152.0, 89.8499984741211], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C02', 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'ForceFadeFrame': 0.0, 'IsAllSlot': False, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': False, 'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'ForceFadeFrame': 50.0, 'ClothWarpMode': 0})
    } {
        Npc_Kaepora_LakeHylia.EventPlayAS({'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAnimeDriven': False})
    } {
        Dm_Locator[Pos_Kaepora].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02_Pos_Kaepora', 'IsWaitEnd': True, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0'})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.10999999940395355, 1.2200000286102295, -3.859999895095825], 'AtVector': [0.0, 1.4299999475479126, 0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 150, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.10999999940395355, 1.2200000286102295, -3.859999895095825], 'AtVector': [0.0, 1.4299999475479126, 0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'MoveTime': 15, 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'LookAtInstanceName': '', 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'DecSpeedDistance': 0.5, 'LookAtActorName': 'Player_Event', 'LookAtTarget': 2, 'MoveSpeed': 1.7999999523162842, 'offset': [0.0, 0.0, 0.0], 'PassThrough': -1.0, 'IsTurnLooking': True, 'LookAtWorldPos': [0.3100000023841858, 152.0, 56.0], 'IsLookAtObject': False, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [28.8700008392334, 175.27999877929688, 12.550000190734863]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'WorldPos': [0.3100000023841858, 151.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})

        fork {
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_DeathMtTrail_0035_Smoke_00', 'SLinkKey': ''})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        }

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}
