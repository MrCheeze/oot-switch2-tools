-------- EventFlow: Dm_DodongoCave_0030 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_DodongoCave_0030/Dm_DodongoCave_0030_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DodongoCave_0030_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_DodongoCave_0030/Dm_DodongoCave_0030/workspace.pp__ModelProject.gyml'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline', 'Event_SetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[light02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [24.049999237060547, 73.23999786376953, -63.20000076293945], 'YAngle': 55.0, 'ClothWarpMode': -1})
        } {
            EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': False, 'Elevation': 90.0, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Speed': 5.5})
        }


        fork {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ASCommand': 'DemoWaitHalf'})
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'C01', 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'position', 'SceneName': 'C01-1'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        } {
            Dm_Locator[position].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DodongoCave_0030_Warp_01_Child'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'WARP', 'IsIgnoreDucking': False})
            EventSystemActor[sound].EventWait({'IsWaitEnd': True, 'Frames': 360})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 0.0, 'CurrDemoPaletteName': 'Dm_DodongoCave_0030_C01', 'PrevDemoPaletteName': 'Dm_DodongoCave_0030_C01'})
            EventSystemActor[light02].EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'RateFrame': 180.0, 'CurrDemoPaletteName': 'Dm_DodongoCave_0030_C01_2', 'PrevDemoPaletteName': 'Dm_DodongoCave_0030_C01'})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } else {

        fork {
            Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [24.049999237060547, 73.23999786376953, -63.20000076293945], 'YAngle': 55.0, 'ClothWarpMode': -1})
        } {
            EventWorldManagerController.Event_SetWindForFlowchart({'IsImmTrans': False, 'Elevation': 90.0, 'IsWaitEnd': False, 'Azimuth': 0.0, 'Speed': 5.5})
        }


        fork {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'DemoWaitHalf'})
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': True, 'ASCommand': 'C01', 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'position', 'SceneName': 'C01_Adult-0'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        } {
            Dm_Locator[position].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DodongoCave_0030_Warp_01_Adult'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'WARP', 'IsIgnoreDucking': False})
            EventSystemActor[sound].EventWait({'IsWaitEnd': True, 'Frames': 360})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateFrame': 0.0, 'RateStart': 0.0, 'RateEnd': 0.0, 'CurrDemoPaletteName': 'Dm_DodongoCave_0030_C01', 'PrevDemoPaletteName': 'Dm_DodongoCave_0030_C01'})
            EventSystemActor[light02].EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventWorldManagerController.Event_SetDemoPaletteTransitionForTimeline({'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'RateFrame': 180.0, 'CurrDemoPaletteName': 'Dm_DodongoCave_0030_C01_2', 'PrevDemoPaletteName': 'Dm_DodongoCave_0030_C01'})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    }
}
