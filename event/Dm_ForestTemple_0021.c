-------- EventFlow: Dm_ForestTemple_0021 --------

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Poe_Beth
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventPlayASWithClothWarp', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0021/Dm_ForestTemple_0021_Enemy_Poe_Beth/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0021_Beth.root.as', 'EventMemberCreateMethod': 2}

Actor: Obj_ForestTemple_GhostPicture_A_02
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerDeathSignal', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0021/Dm_ForestTemple_0021_Obj_ForestTemple_GhostPicture_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0021_GhostPicture.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventTriggerAddPreComputedCullingBasePos']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventGoOffstageForUser', 'EventPlayerUnequip', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPutAway', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Weapon_GhostPicturePerformer_Poe_Beth_Torch
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_GhostPicturePerformer_Poe_Beth
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0021/Dm_ForestTemple_0021_Enemy_Poe_Beth/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0021_Beth.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[C01_length]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Player_pos_if]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor[Controller_Rumble]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Beth_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_PoeSisters_Beth_Torch
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {

        call Common.AirStartUp()

        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerPlayerEventStartWithClimb()
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Third_Daughter_Generate', 'Index': -1, 'Value': True})
    }


    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': ''})
    }


    fork {

        call C02()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 10, 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C02', 'BgAlignH': 0, 'BgAlignW': 0, 'Text5': '', 'Text4': '', 'Text3': '', 'Text2': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void C01() {

    fork {
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Poe_Beth'})
        Enemy_Poe_Beth.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Obj_ForestTemple_GhostPicture_A_02', 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [0.15000000596046448, -0.75, -1.2000000476837158], 'ClothWarpMode': -1})
        Enemy_Poe_Beth.EventTriggerRequestPause()
        EventSystemActor[Beth_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 186})
        Enemy_Poe_Beth.EventTriggerRequestCancelPause()
        Enemy_Poe_Beth.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ClothWarpMode': 3})
    } {
        Enemy_GhostPicturePerformer_Poe_Beth.EventPlayAS({'ASName': 'C01_GhostPicturePerfomer_Beth', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Obj_ForestTemple_GhostPicture_A_02.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_ForestTemple_GhostPicture_A_02.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'PosVector': [0.1899999976158142, 0.1899999976158142, 3.8299999237060547], 'AtVector': [0.1899999976158142, 0.12999999523162842, 2.6600000858306885], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_02', 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.1899999976158142, 0.1899999976158142, 3.8299999237060547], 'AtVector': [0.1899999976158142, 0.12999999523162842, 2.6600000858306885], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_02', 'MoveTime': 298, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 100, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_02', 'PosVector': [-0.09000000357627869, 0.18000000715255737, 4.119999885559082], 'AtVector': [0.8299999833106995, -0.44999998807907104, 4.5], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                EventSystemActor[C01_length].EventWait({'IsWaitEnd': True, 'Frames': 80})
            }

        } {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

                fork {
                    Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
                    Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                } {
                    Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                }

            }
        } {
            GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 49})
            GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Don', 'Length': 0.0})
            GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 27})
            GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Don', 'Length': 0.0})
            GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 39})
            GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Don', 'Length': 0.0})
            GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 66})
            GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        }

    } {
        Dm_Locator[Player_pos_if].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [29.020000457763672, 114.52999877929688, -59.41999816894531]})
    } {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Obj_ForestTemple_GhostPicture_A_02.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0011_MiasmaFire', 'SLinkKey': ''})
    }


    fork {
        Enemy_Poe_Beth.EventWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'Position': [18.760000228881836, 114.52999877929688, -63.70000076293945], 'ClothWarpMode': -1})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_PoeSisters_Beth_Torch', 'KeyName': 'Torch'})
    } {
        Obj_ForestTemple_GhostPicture_A_02.EventTriggerDeathSignal()
    }

}

void C02() {

    fork {
        Enemy_Poe_Beth.EventPlayASWithClothWarp({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02', 'IsAnimeDriven': True, 'ClothWarpMode': 2, 'ForceFadeInFrame': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [21.239999771118164, 115.88999938964844, -67.44999694824219], 'AtVector': [24.110000610351562, 116.23999786376953, -63.560001373291016], 'TargetFovy': 38.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [21.239999771118164, 115.88999938964844, -67.44999694824219], 'AtVector': [24.110000610351562, 116.23999786376953, -63.560001373291016], 'TargetFovy': 38.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 40, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 160, 'MoveTotargetPosType': 1, 'PosVector': [21.200000762939453, 115.87999725341797, -67.38999938964844], 'AtVector': [19.040000915527344, 115.54000091552734, -63.13999938964844], 'TargetFovy': 38.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Enemy_Poe_Beth', 'CheckDistance': 10.5}) {
                    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtCaution', 'Position': [29.020000457763672, 114.52999877929688, -59.41999816894531], 'YAngle': -90.0, 'ClothWarpMode': 0, 'EnableInAir': False})
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                    Event55:

                    fork {
                        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                    } {
                        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                    }

                } else {
                    goto Event55
                }
            }
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'PosVector': [21.200000762939453, 115.87999725341797, -67.38999938964844], 'AtVector': [19.040000915527344, 115.54000091552734, -63.13999938964844], 'TargetFovy': 38.0, 'CameraCollisionMode': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 140, 'IsEnableRevertFast': False})
        }

    } {
        Weapon_PoeSisters_Beth_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0021_Torch', 'SLinkKey': ''})
    }

    Weapon_PoeSisters_Beth_Torch.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ForestTemple_0021_Torch', 'SLinkKey': '', 'IsKill': False})
}

void Ready() {

    fork {
        Enemy_GhostPicturePerformer_Poe_Beth.EventTriggerParticipateEvent()
    } {
        Weapon_GhostPicturePerformer_Poe_Beth_Torch.EventTriggerParticipateEvent()
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [18.760000228881836, 114.52999877929688, -63.70000076293945], 'EndPos': [18.760000228881836, 114.52999877929688, -63.70000076293945]})
    }

}
