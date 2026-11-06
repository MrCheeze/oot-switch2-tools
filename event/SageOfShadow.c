-------- EventFlow: SageOfShadow --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventRemoveProjectiles', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDreamWorld', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPutAway', 'EventWaitCreationFinishedEquipment', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventTriggerNaviWarpToTargetPosAndRot', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_DungeonBoss_BongoBongo
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventTriggerSetEnableGlassTruthTarget', 'EventTriggerStartFadeIn', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventDungeonBossSetConsiderBattlePresentation']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_BongoBongo_RightHand[right_hand]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Boss_Win() {

    call Get_StoneOfForest.InitDefeatBoss()

    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessBongoBongo()

        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ShadowTemple_BossOut', 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ShadowTemple_BossOut', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_BongoBongo.EventTriggerDeathSignal()
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'StartPos', 'InstanceName': 'StartPos_SageOfShadow', 'NotChangeRot': False, 'ASCommand': 'EvtWait'})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': True, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GoToWarpPoint', 'ChallengeName': 'SageOfShadow', 'IsIgnoreCompletedChallenge': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void Boss_Appear() {
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': True, 'Length': 3})
        Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Armor_GlassTruth', 'IsActive': False, 'DynamicEquipmentState': 1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event36:
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_BongoBongo', 'IsActorCreateRequest': False, 'IsWaitEnd': True, 'InstanceName': ''})
        Enemy_DungeonBoss_BongoBongo.EventTriggerSetEnableGlassTruthTarget({'IsEnable': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-138.57000732421875, -10.1899995803833, 16.219999313354492], 'AtVector': [-138.57000732421875, -10.109999656677246, 17.209999084472656], 'TargetFovy': 50.93000030517578, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'ASCommand': 'LockOnWait', 'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ClothWarpMode': 0, 'Position': [-138.3300018310547, -11.460000038146973, 22.020000457763672], 'EnableInAir': False})
            Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'Position': [-137.69400024414062, -10.097599983215332, 21.551149368286133]})
        } {
            Enemy_DungeonBoss_BongoBongo_RightHand[right_hand].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-130.8300018310547, -11.359999656677246, 41.599998474121094]})
            Enemy_DungeonBoss_BongoBongo_RightHand[right_hand].EventDoNothing({'IsWaitEnd': True})
        } {
            Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-145.8300018310547, -11.359999656677246, 41.599998474121094]})
            Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand].EventDoNothing({'IsWaitEnd': True})
        } {
            Enemy_DungeonBoss_BongoBongo.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'ClothWarpMode': -1, 'Position': [-138.32000732421875, -11.460000038146973, 48.04999923706055]})
            Enemy_DungeonBoss_BongoBongo.EventDoNothing({'IsWaitEnd': True})
        }

        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ShadowTemple_BossIn', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_BongoBongo.EventDungeonBossSetConsiderBattlePresentation()
        Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-137.69400024414062, -10.097599983215332, 21.551149368286133]})
        if !GameSystemActor.EventQueryIsDreamWorld() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ShadowTemple_Level_StartBossBattle', 'Index': -1, 'Value': True})
        }
        Enemy_DungeonBoss_BongoBongo.EventTriggerStartFadeIn({'FadeFrame': 1})
        Enemy_DungeonBoss_BongoBongo.EventTriggerSetEnableGlassTruthTarget({'IsEnable': True})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        }
    } else {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerParticipateEvent()
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
        if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
            if Player_Event.EventQueryCheckPlayerState({'State': 10}) {
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
            }
            Event55:
            GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'DefeatBoss', 'ChallengeName': 'SageOfShadow', 'IsIgnoreCompletedChallenge': False})
            goto Event36
        } else {
            Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
            goto Event55
        }
    }
}

void Gimmick_Departure() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 127})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ShadowTemple_0010'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ShadowTemple_Gimmick_LooK_DepartureDemo', 'Index': -1, 'Value': True})
}

void Gimmick_Ocarina() {

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
    && !GameSystemActor.EventQueryIsRecommendedMelody() {
        EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'Frames': 0, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam'})
        }

        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShadowTemple_Gimmick_LooK_DepartureDemo', 'Index': -1}) {

            fork {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 1})

            } {
                EventSystemActor.EventTransition({'EventName': 'ShadowTemple_Gimmick_Departure', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            } {

                call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

            }

        }
    }
}

void SageOfShdawo_GetHoverBoots() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 228})
}
