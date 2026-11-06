-------- EventFlow: Dm_HrlField_0000 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMoveToAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000/workspace.pp__ModelProject.gyml'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[2]
entrypoint: None()
actions: ['Event_SetTimeForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[10]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[3]
entrypoint: None()
actions: ['EventTrigger_SetTime', 'EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Animal_Pigeon[P1]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P2]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P3]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P4]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P5]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P6]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P7]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P8]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Animal_Pigeon[P9]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL1]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as'}

Actor: Dm_Locator[DL2]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as'}

Actor: Dm_Locator[DL3]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as'}

Actor: Dm_Locator[DL4]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL5]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL6]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL7]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL8]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[DL9]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[15]
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[P]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[Foliage]
entrypoint: None()
actions: ['Event_SetFoliageTurfParamForFlowchart', 'Event_ResetFoliageTurfParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[DmL_test]
entrypoint: None()
actions: ['EventPlayASWithInheritVelocityFromTarget']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_HrlField_0000/Dm_HrlField_0000_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_HrlField_0000_Dm_Locator.root.as', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    fork {
        Dm_Locator[DmL_test].EventPlayASWithInheritVelocityFromTarget({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'DmL_Mov', 'IsAnimeDriven': True, 'IsAllSlot': True, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'ApproachRate': 0.05000000074505806})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'OverwriteStartFrame': -1.0, 'CalcUpInInterpolate': True, 'TargetActorInstanceName': 'DmL_test', 'SceneName': 'C01_DmCam01-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'InterpolateFrame': 130.0})
    } {
        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'Index': 1, 'IsWaitEnd': False})
    } {
        EventWorldManagerController[3].EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_HrlField_0000_C01', 'CurrDemoPaletteName': 'Dm_HrlField_0000_C02', 'Frames': 120})
    } {
        EventSystemActor[10].EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventWorldManagerController[15].Event_SetWindForFlowchart({'IsWaitEnd': False, 'Azimuth': 0.0, 'Elevation': 0.0, 'IsImmTrans': False, 'Speed': 3.0})
        EventWorldManagerController[2].Event_SetTimeForFlowchart({'ToHour': 7, 'IsWaitEnd': False, 'TransitionSec': 22.0, 'ToMin': 30})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 600})
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/HyruleField.game__location__Location.gyml'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
    } {

        fork {
            Player_Event.EventPlayerMoveToAnchor({'IsSheathed': True, 'IsInertiaMove': True, 'IsKeepSpeed': True, 'IsWaitEnd': True, 'RidableDesiredGear': 0, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'AnchorInstanceName': 'Dm_HrlField_0000_pos', 'AnchorActorName': 'DestinationAnchor', 'RidableHasToDecelerateNearGoal': False, 'ApplySlowMove': False, 'MoveSpeed': 1.0, 'DecSpeedDistance': 3.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsWaitEnd': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Env', 'IsIgnoreDucking': False})
        } {
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 1})
            CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_HrlField_0000_CameraFx', 'SLinkKey': ''})
            GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 260})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_HrlField_0000', 'CommandLife': 2, 'IsReleaseDucking': False})
        } {

            fork {
                Dm_Animal_Pigeon[P1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL1].EventPlayAS({'ASName': 'Pigeon1', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P1].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL1', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P2].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL2].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL2].EventPlayAS({'ASName': 'Pigeon2', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P2].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL2', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P3].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL3].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL3].EventPlayAS({'ASName': 'Pigeon3', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P3].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL3', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P4].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL4].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL4].EventPlayAS({'ASName': 'Pigeon4', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P4].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL4', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P5].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL5].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL5].EventPlayAS({'ASName': 'Pigeon5', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P5].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL5', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P6].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL6].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL6].EventPlayAS({'ASName': 'Pigeon6', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P6].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL6', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P7].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL7].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL7].EventPlayAS({'ASName': 'Pigeon7', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P7].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL7', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P8].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL8].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL8].EventPlayAS({'ASName': 'Pigeon8', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P8].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL8', 'BoneName': 'Dm_Locator'})
            } {
                Dm_Animal_Pigeon[P9].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                Dm_Locator[DL9].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [155.32699584960938, 168.5850067138672, 285.8760070800781], 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Locator[DL9].EventPlayAS({'ASName': 'Pigeon9', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Dm_Animal_Pigeon[P9].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'DL9', 'BoneName': 'Dm_Locator'})
            }

            Dm_Animal_Pigeon[P9].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 2})
            Dm_Animal_Pigeon[P5].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Dm_Animal_Pigeon[P1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Fly'})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Dm_Animal_Pigeon[P6].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Dm_Animal_Pigeon[P2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Fly'})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Dm_Animal_Pigeon[P7].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 2})
            Dm_Animal_Pigeon[P3].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 4})
            Dm_Animal_Pigeon[P4].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor[P].EventWait({'IsWaitEnd': True, 'Frames': 2})
            Dm_Animal_Pigeon[P8].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Fly', 'IsWaitEnd': False})
        }

    }

    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventWorldManagerController[3].EventTrigger_SetTime({'TimeHour': 7, 'TimeMin': 0})
    EventWorldManagerController[15].Event_ResetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': False})
    EventWorldManagerController[Foliage].Event_ResetFoliageTurfParamForFlowchart({'IsWaitEnd': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
