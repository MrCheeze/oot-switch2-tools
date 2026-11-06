-------- EventFlow: Dm_GerudoValley_0020 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_GerudoValley_0020_Player.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0020/Dm_GerudoValley_0020_Player_Adult/workspace.pp__ModelProject.gyml'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0020/Dm_GerudoValley_0020/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GerudoValley_0020_Player.root.as'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRotWithoutResetAS', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: ['EventQueryQuadrupedGetCurrentGear']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0020/Dm_GerudoValley_0020_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GerudoValley_0020_Epona_Adult.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[camera02]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [8.916899681091309, 92.37030029296875, 6.751100063323975], 'EndPos': [6.931099891662598, 90.12169647216797, 7.418900012969971]})

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})

    fork {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text3': '', 'Text2': '', 'Text1': 'C01'})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-1', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'camera02'})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text3': '', 'Text2': '', 'Text1': 'C02'})
        }

    } {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerSetModelLodManual({'LodLevel': 5})
        switch Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryQuadrupedGetCurrentGear() {
          case 3:
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 90.0, 'Position': [-15.58296012878418, 99.00785827636719, -2.871000051498413]})

            fork {
                Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'Epona_jump_return', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True})
            }

          case 4:
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 90.0, 'Position': [-15.782959938049316, 99.00785827636719, -2.871000051498413]})

            fork {
                Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ASName': 'Epona_jump_return', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True})
            }

        }
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'ClothWarpMode': -1, 'Position': [-18.0, 101.0, -2.5]})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': 0.0, 'IsNearOffset': False, 'IsHomePosition': False, 'offset': [-0.5, 0.0, 0.0], 'OffsetType': -1})
    } {
        Dm_Locator[camera02].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-9.920000076293945, 101.11000061035156, 1.940000057220459], 'ClothWarpMode': -1})
    } {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerEmitXLink({'ELinkKey': 'Dm_GerudoValley_0020_Jump_Smoke', 'SLinkKey': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 107})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 0.5799999833106995})
    }

    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
