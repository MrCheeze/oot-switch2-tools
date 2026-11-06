-------- EventFlow: Dm_ForestTemple_0031 --------

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Poe_Joelle
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventTriggerParticipateEvent', 'EventPlayASWithClothWarp', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0031/Dm_ForestTemple_0031_Enemy_Poe_Joelle/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0031_Joelle.root.as', 'EventMemberCreateMethod': 2}

Actor: Obj_ForestTemple_GhostPicture_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerDeathSignal', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0031/Dm_ForestTemple_0031_Obj_ForestTemple_GhostPicture_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0031_GhostPicture.root.as'}

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

Actor: Enemy_GhostPicturePerformer_Poe_Joelle
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0031/Dm_ForestTemple_0031_Enemy_Poe_Joelle/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0031_Joelle.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Weapon_GhostPicturePerformer_Poe_Joelle_Torch
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventTriggerAddPreComputedCullingBasePos']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Player_pos_if]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: EventSystemActor[Joelle_EvantWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_PoeSisters_Joelle_Torch
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
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Second_Daughter_Generate'})
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
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Enemy_Poe_Joelle'})
        Enemy_Poe_Joelle.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Obj_ForestTemple_GhostPicture_A_01', 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.15000000596046448, -0.75, -1.2000000476837158], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Enemy_Poe_Joelle.EventTriggerRequestPause()
        EventSystemActor[Joelle_EvantWait].EventWait({'IsWaitEnd': True, 'Frames': 187})
        Enemy_Poe_Joelle.EventTriggerRequestCancelPause()
        Enemy_Poe_Joelle.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C01', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ClothWarpMode': 3})
    } {
        Enemy_GhostPicturePerformer_Poe_Joelle.EventPlayAS({'ASName': 'C01_Pct_Joelle', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Obj_ForestTemple_GhostPicture_A_01.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Obj_ForestTemple_GhostPicture_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 20, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_01', 'PosVector': [0.1899999976158142, 0.1899999976158142, 3.8299999237060547], 'AtVector': [0.1899999976158142, 0.12999999523162842, 2.6600000858306885], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_01', 'PosVector': [0.1899999976158142, 0.1899999976158142, 3.8299999237060547], 'AtVector': [0.1899999976158142, 0.12999999523162842, 2.6600000858306885], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 298, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_ForestTemple_GhostPicture_A_01', 'PosVector': [4.070000171661377, -0.4399999976158142, 2.309999942779541], 'AtVector': [3.2899999618530273, -0.8100000023841858, 3.0999999046325684], 'TargetFovy': 38.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 100, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                EventSystemActor[C01_length].EventWait({'IsWaitEnd': True, 'Frames': 89})
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
        Dm_Locator[Player_pos_if].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-29.020000457763672, 114.52999877929688, -59.41999816894531]})
    } {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Obj_ForestTemple_GhostPicture_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0012_MiasmaFire', 'SLinkKey': ''})
    }


    fork {
        Enemy_Poe_Joelle.EventWarpToTargetPosAndRot({'YAngle': -90.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-19.0, 114.52999877929688, -62.790000915527344]})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Torch', 'ActorName': 'Weapon_PoeSisters_Joelle_Torch'})
    } {
        Obj_ForestTemple_GhostPicture_A_01.EventTriggerDeathSignal()
    }

}

void C02() {

    fork {
        Enemy_Poe_Joelle.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'ASName': 'C02', 'IsAnimeDriven': True, 'ClothWarpMode': 2})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveTotargetPosType': 1, 'PosVector': [-21.6200008392334, 116.05000305175781, -66.19000244140625], 'AtVector': [-27.610000610351562, 116.37000274658203, -60.68000030517578], 'TargetFovy': 45.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 160, 'PosVector': [-21.489999771118164, 116.04000091552734, -66.30999755859375], 'AtVector': [-16.829999923706055, 114.81999969482422, -56.15999984741211], 'TargetFovy': 45.0, 'MoveTotargetPosType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
        } {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Enemy_Poe_Joelle', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 10.5}) {
                    Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-29.020000457763672, 114.52999877929688, -59.41999816894531], 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'EnableInAir': False})
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                    Event53:

                    fork {
                        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                    } {
                        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                    }

                } else {
                    goto Event53
                }
            }
        }

    } {
        Weapon_PoeSisters_Joelle_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0031_Torch', 'SLinkKey': ''})
    }

    Weapon_PoeSisters_Joelle_Torch.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ForestTemple_0031_Torch', 'SLinkKey': '', 'IsKill': False})
}

void Ready() {

    fork {
        Enemy_Poe_Joelle.EventTriggerParticipateEvent()
    } {
        Enemy_GhostPicturePerformer_Poe_Joelle.EventTriggerParticipateEvent()
    } {
        Weapon_GhostPicturePerformer_Poe_Joelle_Torch.EventTriggerParticipateEvent()
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-21.6200008392334, 116.05000305175781, -66.19000244140625], 'EndPos': [-21.6200008392334, 116.05000305175781, -66.19000244140625]})
    }

}
