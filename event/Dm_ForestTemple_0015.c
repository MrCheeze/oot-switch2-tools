-------- EventFlow: Dm_ForestTemple_0015 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0015/Dm_ForestTemple_0015_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0015_Player_Adult.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerAddPreComputedCullingBasePos']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_MiddleBoss_Poe_Meg
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayASWithClothWarp', 'EventMiddleBossMegDisappear']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0015/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg.root.as', 'EventMemberCreateMethod': 2, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0]}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundStartBossBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventMiddleBossMegSetAlpha', 'EventMiddleBossMegDummyRequestDeath', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0015/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg.root.as', 'EventMemberCreateMethod': 1}

Actor: Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventMiddleBossMegSetAlpha', 'EventMiddleBossMegDummyRequestDeath', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0015/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg.root.as', 'EventMemberCreateMethod': 1}

Actor: Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventMiddleBossMegSetAlpha', 'EventMiddleBossMegDummyRequestDeath', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0015/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0015_Enemy_MiddleBoss_Poe_Meg.root.as', 'EventMemberCreateMethod': 1}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[EFF_Wait_00]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Meg_EventWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviWarpToPlayerHomePosition', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor[Controller_Rumble]
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Player_Event.EventTriggerPlayerEventStartWithRolling()
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-0.07000000029802322, 91.0, -3.559999942779541]})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerRequestPause()
    } {
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-0.07000000029802322, 88.0, -3.559999942779541]})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventTriggerRequestPause()
    } {
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-0.07000000029802322, 85.0, -3.559999942779541]})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventTriggerRequestPause()
    } {
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    } {
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [3.0, 100.0, -3.559999942779541], 'EndPos': [3.0, 100.0, -3.559999942779541]})
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Enemy_MiddleBoss_Poe_Meg', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 8.0}) {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 12.0, 'ToleranceYDownwardAngle': -5.0, 'TargetActorName': 'Enemy_MiddleBoss_Poe_Meg', 'TargetActorInstanceName': '', 'ToleranceDistance': 2.0, 'TargetOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 5.099999904632568, 'IsLinearMove': False, 'MoveTime': 30, 'EndRecelerateRate': 0.30000001192092896})
        }
    }


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 6, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step06_1_1'})
}

void C01() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': -90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [6.4369001388549805, 100.0, -3.559999942779541], 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 655})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'ForceFadeFrame': 50.0, 'ClothWarpMode': 0})
        } {
            SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        }

    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'Position': [6.610000133514404, 101.66999816894531, -3.1500000953674316], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_MiddleBoss_Poe_Meg.EventPlayASWithClothWarp({'ASName': 'C01_Meg', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ClothWarpMode': 2, 'IsAnimeDriven': False, 'ForceFadeInFrame': 30.0})
        EventSystemActor[Meg_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 494})

        fork {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerRequestCancelPause()
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventPlayAS({'ForceFadeInFrame': 0.0, 'ASName': 'C01_Meg_DummyA', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False})
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventMiddleBossMegSetAlpha({'IsWaitEnd': True})
        } {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventTriggerRequestCancelPause()
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventPlayAS({'ForceFadeInFrame': 0.0, 'ASName': 'C01_Meg_DummyB', 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False})
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventMiddleBossMegSetAlpha({'IsWaitEnd': True})
        } {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventTriggerRequestCancelPause()
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventPlayAS({'ASName': 'C01_Meg_DummyC', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': False})
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventMiddleBossMegSetAlpha({'IsWaitEnd': True})
        }

        EventSystemActor[Meg_EventWait].EventWait({'IsWaitEnd': True, 'Frames': 312})

        fork {
            Enemy_MiddleBoss_Poe_Meg.EventMiddleBossMegDisappear({'IsWaitEnd': True})
        } {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventMiddleBossMegDummyRequestDeath({'IsWaitEnd': True})
        } {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventMiddleBossMegDummyRequestDeath({'IsWaitEnd': True})
        } {
            Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventMiddleBossMegDummyRequestDeath({'IsWaitEnd': True})
        }

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'TargetActorInstanceName': '', 'TargetActorName': '', 'IsIgnoreRootRot': False})
    } {
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 510})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Biyoon'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 113})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Biyoon'})
        GameSystemActor[Controller_Rumble].EventWait({'IsWaitEnd': True, 'Frames': 182})
        GameSystemActor[Controller_Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    } {

        fork {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Wait', 'ActorName': 'Enemy_MiddleBoss_Poe_Meg_Dummy'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_PoeSisters_Meg_Torch', 'KeyName': 'Torch_Imitation'})
        } {
            EventSystemActor[EFF_Wait_00].EventWait({'IsWaitEnd': True, 'Frames': 500})

            fork {
                Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0015_Division', 'SLinkKey': ''})
            } {
                Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_DideCollision'})
            } {
                Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_DideCollision'})
            } {
                Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_DideCollision'})
            } {
                GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
                Enemy_MiddleBoss_Poe_Meg.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_DideCollision'})
            } {
                EventSystemActor[EFF_Wait_00].EventWait({'Frames': 2, 'IsWaitEnd': True})

                fork {
                    Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyA].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_MiasmaFire'})
                } {
                    Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyB].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_MiasmaFire'})
                } {
                    Enemy_MiddleBoss_Poe_Meg_Dummy[Meg_DummyC].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0015_MiasmaFire'})
                }

            }

        }

    }

}
