-------- EventFlow: Dm_InsideGanonCastle_0180 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerMove', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerEmitNpcOrPlayerVoice', 'EventPlayerUnequip', 'EventTriggerPlayerSetBattleMode']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Player_Adult.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventWarpToTargetPosAndRot', 'EventPlayASWithClothWarp', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerAIScheduleSelectSchedule', 'EventNpcHyliaZeldaAdultMoveForward', 'EventTriggerLookAtObject']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Npc_Hylia_WU_Zelda_Adult.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 0}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VoiceWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Stalfos_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Stalfos.root.as'}

Actor: Enemy_Stalfos_Haribote[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Stalfos.root.as'}

Actor: Enemy_Stalfos_Haribote[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Stalfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Stalfos.root.as'}

Actor: Dm_Land_CrumblingGanonCastle_A_02[gareki_A]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A.root.as', 'Position': [0.0, 10.0, 0.0]}

Actor: Dm_Land_CrumblingGanonCastle_A_02[gareki_B]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A.root.as', 'EventMemberCreateMethod': 1, 'Rotation': [0.0, 0.0, 0.0], 'Position': [0.0, 10.0, 0.0]}

Actor: Enemy_Dinolfos_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Dinolfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Dinolfos.root.as', 'EventMemberCreateMethod': 2}

Actor: Enemy_Dinolfos_Haribote[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Dinolfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Dinolfos.root.as', 'EventMemberCreateMethod': 2}

Actor: Enemy_Dinolfos_Haribote[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Dinolfos/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Dinolfos.root.as'}

Actor: Enemy_Bubble_Green_Haribote[A]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Bubble/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Bubble.root.as'}

Actor: Enemy_Bubble_Green_Haribote[D]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Enemy_Bubble/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Enemy_Bubble.root.as'}

Actor: Enemy_Bubble_Green_Haribote[B]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Bubble_Green_Haribote[C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Land_CrumblingGanonCastle_A_02[gareki_C]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A.root.as', 'IsWorld': False, 'Position': [0.0, 10.0, 0.0]}

Actor: Enemy_Bubble_Green_Haribote[E]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[HomePos]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventSetAdvancedDoFForFlowchart', 'EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[VFX_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[DemoWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartRoomSend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Land_CrumblingGanonCastle_A_02[gareki_D]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'Position': [0.0, 10.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideGanonCastle_0180/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideGanonCastle_0180_Dm_Land_CrumblingGanonCastle_A.root.as'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call InGame()


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C01'})
    } {

        call C01()

    } {
        SoundSystemActor.EventTriggerSoundStartRoomSend({'VoiceMode': 1, 'CommandLife': 0})
    }


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False})
    } {

        call C02()

    }


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03'})
    } {

        call C03()

    }


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C04'})
    } {

        call C04()

    }


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05'})
    } {

        call C05()

    }


    fork {
        GameSystemActor.EventDemoProductSupportComment({'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C06'})
    } {

        call C06()

    }

}

void InGame() {
    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 130.0})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 9, 'LoopEndCount': 4, 'Power': 0.4000000059604645, 'IsRumbleController': False})
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.05999999865889549, 175.24000549316406, 6.230000019073486], 'AtVector': [0.10999999940395355, 175.24000549316406, 10.470000267028809], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 40, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 59})
        } {
            EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 0, 'IsWaitEnd': False, 'YAngle': 128.89599609375, 'PositionOffset': [6.284999847412109, 0.0, -7.869999885559082]})
            Npc_Hylia_Zelda_Adult.EventPlayAS({'ForceFadeInFrame': -1.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C00_Zelda'})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Npc_Hylia_Zelda_Adult', 'KeyName': 'DmActMagic'})
            Npc_Hylia_Zelda_Adult.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ActMagic', 'IsKill': False})
            EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Hylia_Zelda_Adult.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_ActMagic'})
        }

    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'WorldPos': [0.0, 175.0, 30.0], 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': ''})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'IsRidingTargetGoOffstage': False, 'ExecuteSetSpeedZeroEveryFrame': True})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'IsRidingTargetGoOffstage': False, 'ExecuteSetSpeedZeroEveryFrame': True})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'IsRidingTargetGoOffstage': False, 'ExecuteSetSpeedZeroEveryFrame': True})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'IsRidingTargetGoOffstage': False, 'ExecuteSetSpeedZeroEveryFrame': True})
    }

}

void C06() {

    fork {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 0.30000001192092896})
        EventSystemActor[VoiceWait].EventWait({'IsWaitEnd': True, 'Frames': 5})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_07', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        EventSystemActor[VoiceWait].EventWait({'IsWaitEnd': True, 'Frames': 80})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': 0, 'UseDemoWait': True, 'ASCommand': 'Wait', 'Position': [0.25, 173.14199829101562, 19.799999237060547], 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerMove({'ApplySlowMove': False, 'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'WorldPos': [0.25, 173.14199829101562, 24.974000930786133], 'MoveSpeed': 0.8500000238418579, 'IsContinueMoveAnimeAfterFinish': False, 'DecSpeedDistance': 1.2000000476837158})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    } {
        EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'Type': 0, 'IsNearOffset': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'OffsetType': 0})
    } {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'EscapeFromCrumblingGanonCastle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step10'})
        Npc_Hylia_Zelda_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 0.0, 'Position': [-0.6899999976158142, 173.13999938964844, 20.0], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventTriggerAIScheduleSelectSchedule()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Hylia_Zelda_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_Zelda_Adult.EventNpcHyliaZeldaAdultMoveForward({'IsWaitEnd': False, 'PlayTime': 83.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'AtVector': [0.25, 174.97000122070312, 25.20339012145996], 'PosVector': [0.25, 174.97000122070312, 19.5], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.25, 174.99639892578125, 20.95680046081543], 'AtVector': [0.25, 174.64849853515625, 24.98259925842285], 'EndRecelerateRate': 0.0, 'MoveTime': 85, 'IsEnableRevertFast': False})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 9, 'Power': 0.4000000059604645, 'LoopEndCount': 20, 'IsRumbleController': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C01() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_Dooon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_01', 'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0180_L_02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.6000000238418579, 'RumbleCall': 'Demo_Large_Dohoon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_02', 'MessageDemoPosType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.2999999523162842, 'RumbleCall': 'Demo_Large_Dohoon'})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.2999999523162842, 'RumbleCall': 'Demo_Middle_GoroGoro'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C01', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C01', 'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsWaitEnd': True, 'StartDistance': 2.5, 'EndDistance': 2.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[HomePos].EventDmLocatorWarpToStarterLinkAnchor({'InstanceName': 'Dm_InsideGanonCastle_0180', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': False, 'IsIgnoreRootRot': False, 'IsLoop': False, 'RootType': 1, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C01-0', 'IsWaitEnd': True})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerWarpToTargetActor({'YAngle': -18.80299949645996, 'UseDemoWait': False, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 0, 'TargetActorKind': 1, 'ASCommand': '', 'PositionOffset': [0.2726899981498718, 0.0, 6.27938985824585], 'IsWaitEnd': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C01_Link', 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 1.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [1.059999942779541, 174.7899932861328, 7.539999961853027], 'IsWaitEnd': False})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Adult', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'IsWaitEnd': True})
        EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Navi.EventPlayAS({'ASName': 'EvtLookAroundAttention', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'Partial': '', 'ASName': 'C01_Zelda', 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [11.583840370178223, 0.0, -11.933609962463379], 'YAngle': -41.0})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'PositionOffset': [9.317000389099121, 0.0, -11.647000312805176], 'YAngle': -41.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Enemy_Stalfos_Haribote[C].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [11.761090278625488, 2.0799999237060547, -17.190120697021484], 'YAngle': -11.0})
    } {
        Enemy_Dinolfos_Haribote[A].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [13.069600105285645, 2.043020009994507, -15.692790031433105], 'YAngle': -20.0})
    } {
        Enemy_Dinolfos_Haribote[B].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -72.927001953125, 'PositionOffset': [15.164609909057617, 1.2720199823379517, -13.534529685974121]})
    } {
        Enemy_Dinolfos_Haribote[C].EventWarpToTargetActor({'ClothWarpMode': -1, 'InstanceName': 'HomePos', 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -82.73500061035156, 'PositionOffset': [13.986080169677734, 0.7014600038528442, -10.798020362854004]})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -37.30699920654297, 'PositionOffset': [9.293880462646484, 2.507110118865967, -11.3512601852417]})
    } {
        Enemy_Bubble_Green_Haribote[D].EventWarpToTargetActor({'ClothWarpMode': -1, 'InstanceName': 'HomePos', 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -50.11800003051758, 'PositionOffset': [13.750490188598633, 4.141459941864014, -14.7841796875]})
    } {
        Enemy_Bubble_Green_Haribote[E].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -40.0, 'PositionOffset': [15.0, 5.0, -21.0]})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -45.0, 'Position': [6.300000190734863, 174.3000030517578, -6.0]})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_C1'})
    }

}

void C02() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.30000001192092896, 'RumbleCall': 'Demo_Large_DoDon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 19})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.30000001192092896, 'RumbleCall': 'Demo_Large_Doon'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsWaitEnd': True, 'StartDistance': 9.0, 'EndDistance': 9.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartFNumber': 12.0, 'EndFNumber': 12.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C02', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C02'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C02-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 0, 'TargetActorKind': 1, 'YAngle': 152.90199279785156, 'IsWaitEnd': False, 'ClothWarpMode': 1, 'PositionOffset': [6.402510166168213, 0.0, -8.207420349121094]})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C02_Zelda', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'OffsetType': -1})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'PositionOffset': [9.317000389099121, 0.0, -11.647000312805176], 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': -41.0, 'IsWaitEnd': False})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C02_B', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_A].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02_A_Dm_Land', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02_B_Dm_Land', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [4.679999828338623, 174.3000030517578, -4.599999904632568], 'YAngle': -45.0})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_C2'})
    }

}

void C03() {

    fork {
        EventSystemActor[VoiceWait].EventWait({'Frames': 14, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.800000011920929})
        EventSystemActor[VoiceWait].EventWait({'Frames': 86, 'IsWaitEnd': True})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_03'})
        EventSystemActor[VoiceWait].EventWait({'Frames': 120, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.30000001192092896, 'RumbleCall': 'Camera_Converge00'})
        EventSystemActor[VoiceWait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03', 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 203})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03_2', 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03', 'Frames': 10})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03', 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C03_2', 'Frames': 40})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C03-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'OffsetBase': 0, 'TargetActorKind': 1, 'IsWaitEnd': False, 'YAngle': -40.0, 'PositionOffset': [6.5, 0.0, -7.599999904632568], 'ClothWarpMode': 1})
        Npc_Hylia_Zelda_Adult.EventPlayASWithClothWarp({'ASName': 'C03_Zelda', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsWaitEnd': False, 'ClothWarpMode': 1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 2.5, 'EndDistance': 2.5, 'StartFNumber': 45.0, 'EndFNumber': 45.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [11.583840370178223, 0.0, -11.933609962463379], 'YAngle': -48.38600158691406, 'IsWaitEnd': False})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C03_A', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'PositionOffset': [9.317000389099121, 0.0, -11.647000312805176], 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': -41.0, 'IsWaitEnd': False})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C03_B', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Stalfos_Haribote[C].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C03_C', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[A].EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C03_A', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[B].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ASName': 'C03_B', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[C].EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C03_C', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'IsWaitEnd': False, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Bubble_Green_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'C03_A_Bubble', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[D].EventWarpToTargetActor({'ClothWarpMode': -1, 'InstanceName': 'HomePos', 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'IsWaitEnd': False, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Bubble_Green_Haribote[D].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'C03_D_Bubble', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'Interest_Lp', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Bubble_Green_Haribote[C].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'Interest_Lp', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Bubble_Green_Haribote[E].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Interest_Move'})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'C03_B_Dm_Land', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -45.0, 'Position': [7.769999980926514, 174.0, -5.849999904632568]})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_C3'})
        EventSystemActor[VFX_01].EventWait({'IsWaitEnd': True, 'Frames': 140})
        Npc_Hylia_Zelda_Adult.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_InsideGanonCastle_0180_ActMagic'})
        EventSystemActor[VFX_01].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Hylia_Zelda_Adult_EnableHoldEnemy', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Zelda_Adult_EnableBarrier', 'Value': False})
        EventSystemActor[VFX_01].EventWait({'IsWaitEnd': True, 'Frames': 25})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_EndBarrier'})
    }

}

void C04() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 53})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoroGoro', 'Length': 1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventTriggerControllerRumble({'Length': 2.0, 'RumbleCall': 'Camera_Converge02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 0.5})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_FastLoop00', 'Length': 1.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C04', 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C04', 'IsWaitEnd': False})
        EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 110})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C04', 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C04_2', 'Frames': 20})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableNear': False, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 45.0, 'EndFNumber': 45.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[VoiceWait].EventWait({'IsWaitEnd': True, 'Frames': 68})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_04'})
        EventSystemActor[VoiceWait].EventWait({'IsWaitEnd': True, 'Frames': 12})
        Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Dm_InsideGanonCastle_0180_L_01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C04-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': -31.542999267578125, 'ClothWarpMode': 1, 'IsWaitEnd': False, 'PositionOffset': [5.148159980773926, 0.0, -6.5464301109313965]})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ASName': 'C04_Zelda', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': False, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'ASCommand': '', 'OffsetBase': 1, 'YAngle': -70.4800033569336, 'PositionOffset': [6.70497989654541, 0.0, 0.6426900029182434], 'IsWaitEnd': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'ASCommand': 'C04_Link', 'UseAnmDriven': False, 'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_A].EventPlayAS({'Partial': '', 'ASName': 'C04_A_Dm_Land', 'IsAnimeDriven': False, 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_C].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C04_C_Dm_Land', 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04_B_Dm_Land', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_D].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C04_D_Dm_Land'})
    } {
        Enemy_Stalfos_Haribote[A].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'IsWaitEnd': False, 'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Stalfos_Haribote[A].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ASName': 'C04_A', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
    } {
        Enemy_Stalfos_Haribote[B].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Stalfos_Haribote[B].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': True, 'ASName': 'C04_B', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Stalfos_Haribote[C].EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'YAngle': -11.0, 'PositionOffset': [11.761090278625488, 2.0799999237060547, -18.0]})
        Enemy_Stalfos_Haribote[C].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C04_C', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[A].EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C04_A', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[B].EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C04_B', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Dinolfos_Haribote[C].EventPlayAS({'IsAllSlot': True, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'C04_C', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[A].EventWarpToTargetActor({'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Bubble_Green_Haribote[A].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'C04_A_Bubble', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[D].EventWarpToTargetActor({'ClothWarpMode': -1, 'InstanceName': 'HomePos', 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Enemy_Bubble_Green_Haribote[D].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'C04_D_Bubble', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green_Haribote[B].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'Interest_Lp', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Bubble_Green_Haribote[C].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'ASName': 'Interest_Lp', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Enemy_Bubble_Green_Haribote[E].EventPlayAS({'IsAnimeDriven': True, 'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Interest_Move'})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -45.0, 'Position': [2.259999990463257, 174.39999389648438, 0.0]})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_C4'})
    }

}

void C05() {

    fork {
        GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Demo_Large_GoroGoro'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Npc_Hylia_Zelda_Adult', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0180:Dm_InsideGanonCastle_0180_Z_06'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.30000001192092896, 'RumbleCall': 'Demo_Large_Dohoon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 34})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.30000001192092896, 'RumbleCall': 'Demo_Large_Dooon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Camera_Converge02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 96})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C05', 'Frames': 0, 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C05', 'IsWaitEnd': True})
        EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_InsideGanonCastle_0180_C05', 'CurrDemoPaletteName': 'Dm_InsideGanonCastle_0180_C05_2', 'Frames': 10, 'IsWaitEnd': True})
        EventSystemActor[DemoWait].EventWait({'IsWaitEnd': True, 'Frames': 128})
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'StartDistance': 3.0, 'EndDistance': 3.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'CameraName': '', 'SceneName': 'C05-0'})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetActor({'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': False, 'ClothWarpMode': 1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'IsAllSlot': True, 'IsWaitEnd': True, 'Partial': '', 'ASName': 'C05_Zelda', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'UseDemoWait': False, 'ActorName': 'Dm_Locator', 'InstanceName': 'HomePos', 'TargetActorKind': 1, 'ASCommand': '', 'OffsetBase': 1, 'YAngle': -3.3380000591278076, 'PositionOffset': [1.16211998462677, 0.0, 3.548069953918457], 'IsWaitEnd': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'KeepOneTimeAnm': False, 'ASCommand': 'C05_Link'})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_A].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': False, 'ASName': 'C05_A_Dm_Land', 'ForceFadeInFrame': 0.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_B].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C05_B_Dm_Land', 'ForceFadeInFrame': 0.0})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Land_CrumblingGanonCastle_A_02[gareki_D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Stalfos_Haribote[A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Stalfos_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Stalfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dinolfos_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[A].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[D].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[B].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[C].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Bubble_Green_Haribote[E].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [0.3100000023841858, 173.1300048828125, 7.079999923706055], 'YAngle': 0.0})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideGanonCastle_0180_C5'})
    }

}
