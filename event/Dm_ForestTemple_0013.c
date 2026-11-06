-------- EventFlow: Dm_ForestTemple_0013 --------

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Poe_Amy
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventPoeSistersAppear', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Enemy_Poe_Amy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_Amy.root.as', 'EventMemberCreateMethod': 2}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviWarpToPlayerHomePosition', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerPutAway']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'IsWorld': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_GhostPicture_A_03
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerDeathSignal', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_GhostPicture_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_GhostPicture.root.as', 'Position': [0.0, 100.0, 0.0], 'IsWorld': True, 'EventMemberCreateMethod': 2}

Actor: Obj_ForestTemple_MovableBox_A_05
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_MovableBox_A_05/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_MovableBox_A.root.as', 'EventMemberCreateMethod': 0, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0]}

Actor: Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerReplaceTextureDoReplace', 'EventTriggerEmitXLink', 'EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_MovableBox_A_02/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerReplaceTextureDoReplace', 'EventTriggerEmitXLink', 'EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_MovableBox_A_03/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerReplaceTextureDoReplace', 'EventTriggerEmitXLink', 'EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_MovableBox_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_MovableBox_A.root.as'}

Actor: Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerReplaceTextureDoReplace', 'EventTriggerEmitXLink', 'EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Obj_ForestTemple_MovableBox_A_04/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_MovableBox_A.root.as'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_GhostPicturePerformer_Poe_Amy
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerPoeSistersEmitXLinkEquipTorch', 'EventTriggerPoeSistersXLinkFadeByKeyEquipTorch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0013/Dm_ForestTemple_0013_Enemy_Poe_Amy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0013_Amy.root.as'}

Actor: Weapon_GhostPicturePerformer_Poe_Amy_Torch
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': ''}

Actor: EventSystemActor[Wait_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[EFF_wait_00]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_PoeSisters_Amy_Torch
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Controller_Rumble]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Amy_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Camera_Gabure_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[DummyBlock_ActorWait]
entrypoint: None()
actions: ['EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Common.AirStartUp()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Fourth_daughter_Generate', 'Index': -1, 'Value': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 31})
}

void C01() {

    fork {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Poe_Amy', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': False})
        Enemy_Poe_Amy.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.15000000596046448, -0.75, -1.2000000476837158], 'ActorName': 'Obj_ForestTemple_GhostPicture_A_03', 'ClothWarpMode': -1, 'YAngle': 0.0})
        Enemy_Poe_Amy.EventPoeSistersAppear({'IsWaitEnd': True})
        Enemy_Poe_Amy.EventTriggerRequestPause()
        EventSystemActor[Amy_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 159})
        Enemy_Poe_Amy.EventTriggerRequestCancelPause()
        Enemy_Poe_Amy.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ClothWarpMode': 3})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Enemy_Poe_Amy.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {

        fork {
            Enemy_GhostPicturePerformer_Poe_Amy.EventTriggerParticipateEvent()
        } {
            Weapon_GhostPicturePerformer_Poe_Amy_Torch.EventTriggerParticipateEvent()
        }

        Enemy_GhostPicturePerformer_Poe_Amy.EventPlayAS({'ASName': 'C01_GhostPicuturePerformer_Amy', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Obj_ForestTemple_GhostPicture_A_03.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01'})
        Obj_ForestTemple_GhostPicture_A_03.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Enemy_GhostPicturePerformer_Poe_Amy.EventTriggerPoeSistersXLinkFadeByKeyEquipTorch({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'PaintingTorch_Die'})
        Enemy_GhostPicturePerformer_Poe_Amy.EventTriggerPoeSistersEmitXLinkEquipTorch({'ELinkKey': 'PaintingTorch_Wait', 'SLinkKey': ''})
    } {

        fork {
            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerParticipateEvent()
        } {
            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventTriggerParticipateEvent()
        } {
            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventTriggerParticipateEvent()
        } {
            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventTriggerParticipateEvent()
        } {
            Obj_ForestTemple_MovableBox_A_05.EventTriggerParticipateEvent()
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        GameSystemActor[DummyBlock_ActorWait].EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': False, 'ActorName': 'Obj_ForestTemple_MovableBox_A_05'})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [54.5, 103.9000015258789, 0.0], 'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})

            fork {
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
            } {
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } {
            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot({'Position': [57.5, 103.9000015258789, -0.75], 'YAngle': 90.0})
            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_01_lp', 'IsWaitEnd': False})
        } {
            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot({'Position': [59.0, 103.9000015258789, 2.25], 'YAngle': 90.0})
            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_02_lp', 'IsWaitEnd': False})
        } {
            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot({'Position': [62.0, 103.9000015258789, -0.75], 'YAngle': 90.0})
            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_03_lp', 'IsWaitEnd': False})
        } {
            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventTriggerForestTempleMovableBoxWarpToTargetPosAndRot({'Position': [60.5, 103.9000015258789, -2.25], 'YAngle': 90.0})
            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_A_04_lp', 'IsWaitEnd': False})
        } {
            Obj_ForestTemple_MovableBox_A_05.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C01_A_05_lp', 'IsAnimeDriven': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 372})
        }


        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtSurprise', 'ForceFadeFrame': 20.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 30.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'ForceFadeFrame': 60.0, 'ClothWarpMode': 0})
            EventSystemActor[Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 145})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 60.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        } {
            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerReplaceTextureDoReplace()
            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'ASName': 'C01_A_01', 'IsAnimeDriven': False})
        } {
            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventTriggerReplaceTextureDoReplace()
            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01_A_02', 'IsAnimeDriven': False})
        } {
            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventTriggerReplaceTextureDoReplace()
            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01_A_03', 'IsAnimeDriven': False})
        } {
            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventTriggerReplaceTextureDoReplace()
            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01_A_04', 'IsAnimeDriven': False})
        } {
            Obj_ForestTemple_MovableBox_A_05.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01_A_05', 'IsAnimeDriven': False})
        } {

            call C01_Gabure_node()

        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_03', 'PosVector': [0.17000000178813934, 0.18000000715255737, 5.829999923706055], 'AtVector': [0.1599999964237213, 0.09000000357627869, 2.690000057220459], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_03', 'PosVector': [0.17000000178813934, 0.18000000715255737, 5.829999923706055], 'AtVector': [0.1599999964237213, 0.09000000357627869, 2.690000057220459], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'MoveTime': 341, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [50.369998931884766, 110.4800033569336, 5.699999809265137], 'AtVector': [55.43000030517578, 107.22000122070312, 2.359999895095825], 'TargetFovy': 38.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'IsLinearMove': False, 'MoveTime': 35, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [50.369998931884766, 110.4800033569336, 5.699999809265137], 'AtVector': [55.43000030517578, 107.22000122070312, 2.359999895095825], 'TargetFovy': 38.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call C01_Block_IN_Controller_Rumble()

        }

    } {

        fork {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_PoeSisters_Amy_Torch', 'KeyName': 'Torch'})
        } {
            Obj_ForestTemple_GhostPicture_A_03.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_MiasmaFire', 'SLinkKey': ''})
        } {
            EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 169})

            fork {
                Weapon_PoeSisters_Amy_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_Torch', 'SLinkKey': ''})
            } {
                EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 220})

                fork {
                    Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_Miasma', 'SLinkKey': ''})
                } {
                    EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 16})

                    fork {
                        Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0013_ActWeakSmoke'})
                    } {
                        EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 108})

                        fork {
                            Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0013_Jump'})
                        } {
                            Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0013_Jump'})
                        } {
                            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0013_Jump'})
                        } {
                            Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0013_Jump'})
                        } {
                            EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 79})

                            fork {
                                Obj_ForestTemple_MovableBox_A_02[BeforeShotPicture_02].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_ActLandSmoke', 'SLinkKey': ''})
                            } {
                                EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 5})

                                fork {
                                    Obj_ForestTemple_MovableBox_A_01[BeforeShotPicture_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_ActLandSmoke', 'SLinkKey': ''})
                                } {
                                    EventSystemActor[EFF_wait_00].EventWait({'Frames': 4, 'IsWaitEnd': True})

                                    fork {
                                        Obj_ForestTemple_MovableBox_A_04[BeforeShotPicture_04].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_ActLandSmoke', 'SLinkKey': ''})
                                    } {
                                        EventSystemActor[EFF_wait_00].EventWait({'Frames': 10, 'IsWaitEnd': True})

                                        fork {
                                            Obj_ForestTemple_MovableBox_A_03[BeforeShotPicture_03].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_ActLandSmoke', 'SLinkKey': ''})
                                        } {
                                            EventSystemActor[EFF_wait_00].EventWait({'IsWaitEnd': True, 'Frames': 6})
                                            Obj_ForestTemple_MovableBox_A_05.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0013_ActLandSmoke', 'SLinkKey': ''})
                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }

    Obj_ForestTemple_GhostPicture_A_03.EventTriggerDeathSignal()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C01_Gabure_node() {
    GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 1, 'IsRumbleController': True, 'Power': 0.8999999761581421})
    GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 75})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'IsRumbleController': True, 'ApplyType': 1, 'Power': 0.4000000059604645, 'Pattern': 1})
    } {
        GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Power': 0.4000000059604645, 'Pattern': 7, 'IsRumbleController': True})
        } {
            GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 4})

            fork {
                EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Power': 0.4000000059604645, 'Pattern': 7, 'IsRumbleController': True})
            } {
                GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 9})

                fork {
                    EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Power': 0.4000000059604645, 'Pattern': 7, 'IsRumbleController': True})
                } {
                    GameSystemActor[Camera_Gabure_Wait].EventWait({'IsWaitEnd': True, 'Frames': 5})
                    EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 1, 'Power': 0.699999988079071, 'Pattern': 2, 'IsRumbleController': True})
                }

            }

        }

    }

}

void C01_Block_IN_Controller_Rumble() {
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 162})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 214})
    GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 16})
    GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 28})
    GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 16})
    GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
    GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 21})
    GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_DoDon'})
}
