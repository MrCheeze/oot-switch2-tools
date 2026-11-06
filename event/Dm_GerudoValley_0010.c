-------- EventFlow: Dm_GerudoValley_0010 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': '使用しない'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRotWithoutResetAS', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: ['EventQueryQuadrupedGetCurrentGear']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0010/Dm_GerudoValley_0010_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GerudoValley_0010_Epona_Adult.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviMoveAroundToPlayer', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerUnequip']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_GerudoValley_0010/Dm_GerudoValley_0010_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GerudoValley_0010_Player.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[culling]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-3.9070000648498535, 92.42900085449219, 6.743000030517578], 'EndPos': [-1.9670000076293945, 90.22000122070312, 7.420000076293945]})

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
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-1', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'camera', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text3': '', 'Text2': '', 'Text1': 'C02'})
        }

    } {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerSetModelLodManual({'LodLevel': 5})
        switch Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventQueryQuadrupedGetCurrentGear() {
          case 3:
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -90.0, 'Position': [20.739709854125977, 98.28758239746094, -3.1710000038146973]})

            fork {
                Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'ASName': 'Epona_jump'})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True})
            }

          case 4:
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetPosAndRotWithoutResetAS({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -90.0, 'Position': [20.93971061706543, 98.28758239746094, -3.1710000038146973]})

            fork {
                Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'ASName': 'Epona_jump'})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01', 'IsWaitEnd': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': -1, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True})
            }

        }
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -90.0, 'Position': [24.0, 100.0, -3.0]})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': 0.0, 'IsNearOffset': False, 'IsHomePosition': False, 'OffsetType': -1, 'offset': [-0.30000001192092896, 0.0, -0.800000011920929]})
    } {
        Dm_Locator[camera].EventWarpToTargetPosAndRot({'Position': [13.930000305175781, 97.94999694824219, -7.809999942779541], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    } {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GerudoValley_0010_Jump_Smoke'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 107})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
    } {
        EventSystemActor[culling].EventWait({'Frames': 50, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-1.1100000143051147, 102.1500015258789, 2.819999933242798], 'EndPos': [-19.924999237060547, 102.3499984741211, -3.069999933242798]})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteShadowRatio': True, 'ShadowRatio': 0.0, 'BakeLightLuminanceRatio': 0.5799999833106995})
    }

    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
