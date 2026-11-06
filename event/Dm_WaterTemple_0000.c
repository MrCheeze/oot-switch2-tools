-------- EventFlow: Dm_WaterTemple_0000 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsWorld': True}

Actor: Obj_LakeHrl_SwitchShutter_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Shootable_HookLong
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_WaterTemple_0000/Dm_WaterTemple_0000_Item_Hookshot/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_WaterTemple_0000_Dm_Item_Hookshot.root.as', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventGoOffstageForUser', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Shootable_Hook
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_Evant_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller_Rumble_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call C01()

}

void C01() {

    fork {
        EventSystemActor[Player_Evant_Wait].EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'ASCommand': 'EvtWait', 'UseDemoWait': True, 'YAngle': -42.0, 'ClothWarpMode': 0, 'EnableInAir': False, 'Position': [-178.91000366210938, 103.48999786376953, 491.5199890136719], 'IsWaitEnd': True})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})

        fork {
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } {
        Obj_LakeHrl_SwitchShutter_A_01.EventTriggerParticipateEvent()
        Obj_LakeHrl_SwitchShutter_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Obj_LakeHrl_SwitchShutter_A_Demo_Animation'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'SceneName': 'C01-0', 'RootType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 355})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WaterTemple_EmitGatePillar'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 580})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        }

    } {
        Dm_Shootable_HookLong.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C01_HookshotChain'})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            Shootable_Hook.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }
    } {
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 65})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 285})
        GameSystemActor.EventTriggerControllerRumble({'Length': 8.800000190734863, 'RumbleCall': 'Demo_Middle_GoGoGo'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 540})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doon'})
    } {
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ActorName': 'Obj_LakeHrl_SwitchHit_A_01', 'ELinkKeyName': 'Dm_WaterTemple_0000_Bubble_C_01', 'InstanceName': ''})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 360})
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ActorName': 'Obj_LakeHrl_SwitchShutter_A_01', 'ELinkKeyName': 'Dm_WaterTemple_0000_Bubble_C_01', 'InstanceName': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.5})
}
