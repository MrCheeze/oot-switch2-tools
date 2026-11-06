-------- EventFlow: Dm_SpiritTemple_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoNothing', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviWarpToPlayerHomePosition', 'EventTriggerNaviChangeWaitStateToDefault']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

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

Actor: Dm_Obj_SpiritTemple_GoddessStatueFace_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_SpiritTemple_0000/Dm_SpiritTemple_0000_Obj_SpiritTemple_GoddessStatueFace_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SpiritTemple_0000_Obj_SpiritTemple_GoddessStatueFace_A.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: GameSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'BgAlignH': 0, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text3': ''})
    } {
        Player_Event.EventTriggerParticipateEvent()
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.05000000074505806, 139.50999450683594, -65.13999938964844], 'ClothWarpMode': -1})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [0.0, 133.89999389648438, -54.720001220703125], 'YAngle': 180.0})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SpiritTemple_Room08_Unlocked_06', 'Index': -1, 'Value': True})

    fork {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '0'})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 180.0, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [0.0, 133.89999389648438, -54.720001220703125]})
            Player_Event.EventDoNothing({'IsWaitEnd': False})
        } {
            Npc_Navi.EventTriggerNaviChangeWaitStateToDefault()
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'Type': 2, 'IsDisguisedPlayerPos': True, 'WorldPos': [0.0, 133.89999389648438, -54.720001220703125], 'YAngle': 180.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsNearOffset': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0]})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 0.75, 'EndDistance': 7.0, 'EndFNumber': 50.0})
        }

    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Dm_Obj_SpiritTemple_GoddessStatueFace_A_01', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})

        fork {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 380})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventPlayAS({'ForceFadeInFrame': 0.0, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SpiritTemple_Debris_00'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 53})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SpiritTemple_Debris_01'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SpiritTemple_Debris_02'})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SpiritTemple_Smoke'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SpiritTemple_End'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SpiritTemple_Smoke', 'SLinkKey': '', 'IsKill': False})
        } {
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Short'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 53})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon_Short'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 40})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
            GameSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 40})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 3.0})
        }

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C01-1', 'TargetActorInstanceName': '1'})
    } {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 100})

    } {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 136})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0})
}
