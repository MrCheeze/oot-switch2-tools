-------- EventFlow: Get_StoneOfForest --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles']
queries: ['EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_DungeonBoss_Gohma
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventPlayAS', 'EventTriggerDungeonBossGohmaWarpToReferencedAnchor', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerTurnAndLook', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerConversate', 'EventPlayerBackMoveForTalk', 'EventPlayerPutAway', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Enemy_Scrub_Deku
entrypoint: None()
actions: ['EventTriggerSetCctForwardSpeedZero', 'EventTriggerRequestDeath', 'EventTalk', 'EventScrubDekuTurnAround', 'EventGoOffstageForUser', 'EventTriggerSoundChangeForbidEmitFootStep', 'EventTriggerSoundDisableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventNaviRequestBallonMessage', 'EventTriggerNaviWarpToTargetPosAndRot', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_Scrub_Deku_Brothers[One]
entrypoint: None()
actions: ['EventTriggerSetCctForwardSpeedZero', 'EventTriggerRequestDeath', 'EventTalk', 'EventScrubDekuTurnAround', 'EventGoOffstageForUser', 'EventTriggerSoundChangeForbidEmitFootStep', 'EventTriggerSoundDisableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku_Brothers[Three]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerRequestDeath', 'EventTriggerSoundDisableSpMode', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku_Brothers[Two]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerRequestDeath', 'EventTriggerSoundDisableSpMode', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Rupee_Green[ScrubDekuRupee_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Rupee_Green[ScrubDekuRupee_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Rupee_Green[ScrubDekuRupee_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Heart[ScrubDekuHeart_01]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Heart[ScrubDekuHeart_02]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Heart[ScrubDekuHeart_03]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku[Disappear(Enemy_Scrub_Deku)]
entrypoint: Disappear(Enemy_Scrub_Deku)
actions: ['EventScrubDekuRunAway']
queries: []
params: None

Actor: Obj_Heart[Disappear(Obj_Heart)]
entrypoint: Disappear(Obj_Heart)
actions: ['EventWarpToActorIncludedRayCheck', 'EventPlayAS', 'EventTriggerDeleteSelf']
queries: []
params: None

Actor: Obj_Rupee_Green[Disappear(Obj_Rupee_Green)]
entrypoint: Disappear(Obj_Rupee_Green)
actions: ['EventTriggerDeleteSelf', 'EventWarpToActorIncludedRayCheck', 'EventPlayAS']
queries: []
params: None

Actor: Enemy_Scrub_Business[InitTalk_Attacked(Arg_Actor)]
entrypoint: InitTalk_Attacked(Arg_Actor)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

void BossArea_ShutIn() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Deku_0003'})
}

void Boss_Win() {

    call InitDefeatBoss()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Gohma_DefeatBoss', 'Index': -1, 'Value': True})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Deku_BossOut', 'FadeInTypeEventEnd': 2})
    Enemy_DungeonBoss_Gohma.EventTriggerDeathSignal()
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'StartPos', 'NotChangeRot': False, 'InstanceName': 'DefeatBoss', 'ASCommand': 'EvtWait'})
    Npc_Navi.EventWarpToTargetPosAndRot({'Position': [12.300000190734863, 48.16999816894531, 67.22000122070312], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'Type': 2, 'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

    call Common_Camera_Pln.Camera_PlayableAfterBoss()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfForest', 'StepName': 'GoToWarpPoint', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void Boss_Appear() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Gohma_IsLightingForBattle'})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': False, 'Length': 3, 'IsNoPlayAnime': True})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Enemy_DungeonBoss_Gohma.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Pre_Battle_Ceiling_Find', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor1ActorName': 'Enemy_DungeonBoss_Gohma', 'EndRecelerateRate': 1.0, 'TargetFovy': 15.0, 'MoveTime': 25, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.25, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 3, 'IsEnableRevertFast': False})
        UISystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Length': 0})
        Event15:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheDekuTree_BossArea_ChangeENVForBoss'})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'InstanceName': 'StartPos_Get_StoneOfForest', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'LockOnWait', 'IsWaitEnd': True})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Deku_BossIn', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Gohma.EventSetBattlePresentationOnPreState()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        } else {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.0})
        }

        fork {
            Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'Position': [6.670000076293945, 47.917510986328125, 67.22000122070312], 'ClothWarpMode': -1, 'YAngle': 90.0})
        } {
            if !GameSystemActor.EventQueryIsDreamWorld() {
                ChallengeSystemActor.EventTriggerMiniGameTimerStart()
            }
        } {
            Enemy_DungeonBoss_Gohma.EventTriggerDungeonBossGohmaWarpToReferencedAnchor({'InstanceName': 'Gohma_BattleStartPos'})
        }

    } else {

        fork {
            Enemy_DungeonBoss_Gohma.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Pre_Battle_Ceiling_Find', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 60, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 1.5], 'PosVectorSetType': 1, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor1ActorName': 'Enemy_DungeonBoss_Gohma', 'TargetFovy': 40.0, 'AtVector': [0.0, 2.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor1ActorName': 'Enemy_DungeonBoss_Gohma', 'IsWaitEnd': False, 'MoveTime': 200, 'TargetFovy': 30.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.25, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            EventCamera.EventTriggerRequestCameraShake({'IsRumbleController': False, 'ApplyType': 1, 'Pattern': 8, 'LoopEndCount': 1, 'Power': 2.0})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'DemoStart', 'IsIgnoreDucking': False})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Enemy_DungeonBoss_Gohma', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 1, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor1ActorName': 'Enemy_DungeonBoss_Gohma', 'EndRecelerateRate': 1.0, 'TargetFovy': 15.0, 'MoveTime': 25, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.25, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Get_StoneOfForest', 'StepName': 'DefeatBoss', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': False})
        goto Event15
    }
}

void Talk_Deku_01() {
    Enemy_Scrub_Deku.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku.EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk.InitTalk_Enemy({'LookAtActorName': 'Enemy_Scrub_Deku', 'LookAtInstanceName': '', 'EventTalkCameraType': 2, 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku")})

    }

    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_07', 'MaintainPerformanceState': 0})
    Event177:
    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_00', 'ASName': 'Talk', 'MaintainPerformanceState': 0})

    call FocusFaceCamera({'Actor1ActorName': 'Enemy_Scrub_Deku', 'Actor1InstanceName': ''})

    Enemy_Scrub_Deku.EventTriggerSoundChangeForbidEmitFootStep()
    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_05', 'MaintainPerformanceState': 0})

    call Disappear({'Enemy_Scrub_Deku': ActorIdentifier(name="Enemy_Scrub_Deku"), 'Obj_Heart': ActorIdentifier(name="Obj_Heart", sub_name="ScrubDekuHeart_01"), 'Obj_Rupee_Green': ActorIdentifier(name="Obj_Rupee_Green", sub_name="ScrubDekuRupee_01")})

    Enemy_Scrub_Deku.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call Focus_ForDeku()


    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_RoomB_Cleared'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'TurnFaceControlType': 1, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'ActorName': 'DestinationAnchor', 'PosOffset': [0.0, 0.5, 0.0], 'WorldPos': [0.0, 0.0, 0.0], 'Target': 5, 'InstanceName': 'PL_Point01', 'UseNormalTurn': False, 'IsDoNavi': True})
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    Enemy_Scrub_Deku.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    Enemy_Scrub_Deku.EventTriggerRequestDeath({'DeathReason': 10})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 330})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_Dungeon_EnemyScrubDekuDestroy_001'})
    Event23:
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Talk_Deku_02() {
    Enemy_Scrub_Deku.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku.EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk.InitTalk_Enemy({'LookAtInstanceName': '', 'LookAtActorName': 'Enemy_Scrub_Deku', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku"), 'EventTalkCameraType': 2})

    }

    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_08', 'MaintainPerformanceState': 0})
    Event191:
    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_01', 'ASName': 'Talk', 'MaintainPerformanceState': 0})
    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_03', 'ASName': 'Talk', 'MaintainPerformanceState': 0})

    call FocusFaceCamera({'Actor1ActorName': 'Enemy_Scrub_Deku', 'Actor1InstanceName': ''})

    Enemy_Scrub_Deku.EventTriggerSoundChangeForbidEmitFootStep()
    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_04', 'MaintainPerformanceState': 0})

    call Disappear({'Enemy_Scrub_Deku': ActorIdentifier(name="Enemy_Scrub_Deku"), 'Obj_Heart': ActorIdentifier(name="Obj_Heart", sub_name="ScrubDekuHeart_02"), 'Obj_Rupee_Green': ActorIdentifier(name="Obj_Rupee_Green", sub_name="ScrubDekuRupee_02")})

    Enemy_Scrub_Deku.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Enemy_Scrub_Deku.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    Enemy_Scrub_Deku.EventTriggerRequestDeath({'DeathReason': 10})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 355})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_Dungeon_EnemyScrubDekuDestroy_002'})
    goto Event23
}

void Talk_Deku_03() {
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[One].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku_Brothers[One].EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk.InitTalk_Enemy({'LookAtInstanceName': 'One', 'LookAtActorName': 'Enemy_Scrub_Deku_Brothers', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku_Brothers", sub_name="One"), 'EventTalkCameraType': 2})

    }

    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_09', 'MaintainPerformanceState': 0})
    Event198:
    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_02', 'ASName': 'Talk', 'MaintainPerformanceState': 0})

    call FocusFaceCamera({'Actor1ActorName': 'Enemy_Scrub_Deku_Brothers', 'Actor1InstanceName': 'One'})

    Enemy_Scrub_Deku_Brothers[One].EventTriggerSoundChangeForbidEmitFootStep()
    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_06', 'MaintainPerformanceState': 0})

    call Disappear({'Enemy_Scrub_Deku': ActorIdentifier(name="Enemy_Scrub_Deku_Brothers", sub_name="One"), 'Obj_Heart': ActorIdentifier(name="Obj_Heart", sub_name="ScrubDekuHeart_03"), 'Obj_Rupee_Green': ActorIdentifier(name="Obj_Rupee_Green", sub_name="ScrubDekuRupee_03")})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Enemy_Scrub_Deku_Brothers[One].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Scrub_Deku_Brothers[Two].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Scrub_Deku_Brothers[Three].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {

        call Focus_ForDeku()

    }


    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_RoomK_Cleared'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'TurnFaceControlType': 1, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'WorldPos': [0.0, 0.0, 0.0], 'UseNormalTurn': False, 'IsDoNavi': True})
    }

    Enemy_Scrub_Deku_Brothers[Two].EventTriggerRequestDeath({'DeathReason': 10})
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerRequestDeath({'DeathReason': 10})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Enemy_Scrub_Deku_Brothers[One].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
    Enemy_Scrub_Deku_Brothers[One].EventTriggerRequestDeath({'DeathReason': 10})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 334})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_Dungeon_EnemyScrubDekuDestroy_003'})
    goto Event23
}

void Focus_ForDeku() {

    fork {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'MoveTime': 0, 'TargetActorInstanceName': 'PL_Point01', 'IdealDistance': 3.0, 'TargetOffset': [0.0, 1.0, 3.0]})
    } {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
}

void GetSword() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SY_Treasurebox', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 1, 'EventName': 'Dm_Kokiri_0063'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Mido_Child_Talk_Event30'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_Mido_Child_Blocker'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Weapon_Shield_Deku'}) {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 437})
        } else {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 75})
        }
    }
}

void Disappear() {

    fork {
        switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Shop_Heart'}) {
          case [0, 1]:
            Obj_Heart[Disappear(Obj_Heart)].EventWarpToActorIncludedRayCheck({'TargetActorKind': 0, 'InstanceName': '', 'IsWaitEnd': False, 'ActorName': ''})
            Obj_Heart[Disappear(Obj_Heart)].EventPlayAS({'ASName': 'Rotate_Obj', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Obj_Rupee_Green[Disappear(Obj_Rupee_Green)].EventTriggerDeleteSelf()
          case 2:
            Obj_Rupee_Green[Disappear(Obj_Rupee_Green)].EventWarpToActorIncludedRayCheck({'IsWaitEnd': True, 'TargetActorKind': 0, 'InstanceName': '', 'ActorName': ''})
            Obj_Rupee_Green[Disappear(Obj_Rupee_Green)].EventPlayAS({'ASName': 'Rotate_Obj', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            Obj_Heart[Disappear(Obj_Heart)].EventTriggerDeleteSelf()
        }
    } {
        Enemy_Scrub_Deku[Disappear(Enemy_Scrub_Deku)].EventScrubDekuRunAway({'IsWaitEnd': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
}

void Talk_Deku_01_Attacked() {
    Enemy_Scrub_Deku.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku.EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk_Attacked({'EventTalkCameraType': 2, 'LookAtActorName': 'Enemy_Scrub_Deku', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku"), 'LookAtInstanceName': ''})

    }

    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_07', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    goto Event177
}

void Talk_Deku_02_Attacked() {
    Enemy_Scrub_Deku.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku.EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk_Attacked({'EventTalkCameraType': 2, 'LookAtActorName': 'Enemy_Scrub_Deku', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku"), 'LookAtInstanceName': ''})

    }

    Enemy_Scrub_Deku.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_08', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    goto Event191
}

void Talk_Deku_03_Attacked() {
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[One].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku_Brothers[One].EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call InitTalk_Attacked({'EventTalkCameraType': 2, 'LookAtActorName': 'Enemy_Scrub_Deku_Brothers', 'LookAtInstanceName': 'One', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku_Brothers", sub_name="One")})

    }

    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_09', 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    goto Event198
}

void FocusFaceCamera() {

    fork {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Actor1ActorName', 'Actor1InstanceName': 'Actor1InstanceName', 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsIgnoreVectorReferenceActorRot1': False, 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False, 'Vector1': [0.0, 1.0, 0.0], 'ActorName2': 'Player_Event', 'Actor2InstanceName': '', 'Vector2': [0.0, 0.0, 0.0]}) {

            fork {
                Enemy_Scrub_Deku_Brothers[Two].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
            } {
                Enemy_Scrub_Deku_Brothers[Three].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'Actor1InstanceName', 'PosVector': [0.0, 1.409999966621399, 2.2899999618530273], 'AtVector': [0.0, 0.3700000047683716, -0.3400000035762787], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'Actor1InstanceName', 'PosVector': [0.0, 1.409999966621399, 2.2899999618530273], 'AtVector': [0.0, 0.3700000047683716, -0.3400000035762787], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Actor1ActorName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void InitDefeatBoss() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventPlayerPutAway({'IsWaitEnd': True})
}

void Boss_Win_DreamWorld() {

    call InitDefeatBoss()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

        call SubEvent_AllBossBattle.BossRushBossStageExitSuccessGohma()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Deku_BossOut', 'FadeInTypeEventEnd': 2})

        call SubEvent_AllBossBattle.BossStageExitProcess()

    }
}

void InitTalk_Attacked() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Enemy_Scrub_Business[InitTalk_Attacked(Arg_Actor)].EventTriggerBecomeSpeaker()
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'LookAtActorName', 'InstanceName': 'LookAtInstanceName', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {

        call InitTalk.SetTalkCamera_DependingDistance({'ActorNameA': 'LookAtActorName', 'InstanceNameA': 'LookAtInstanceName'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName'})

    }

}

void BossAppearSkipFunc() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Length': 0, 'IsWaitEnd': True, 'Color': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': 'PosVector', 'AtVector': 'AtVector', 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Player_Event.EventPlayerPlayASForFlowchart({'ClothWarpMode': 0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtCaution'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    UISystemActor.EventEventFadeIn({'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Color': 0})
}

void BossAppearSkip_Dodongo() {

    call BossAppearSkipFunc({'PosVector': [0.10999999940395355, 1.159999966621399, -3.559999942779541], 'AtVector': [-0.019999999552965164, 1.4900000095367432, 0.10999999940395355]})

}

void BossAppearSkip_Barinade() {

    call BossAppearSkipFunc({'PosVector': [-0.03999999910593033, 1.2200000286102295, -2.0899999141693115], 'AtVector': [0.0, 1.25, 1.7100000381469727]})

}

void BossAppearSkip_Phantom() {

    call BossAppearSkipFunc({'PosVector': [0.0, 0.8700000047683716, -3.5899999141693115], 'AtVector': [0.0, 1.409999966621399, 0.3700000047683716]})

}

void BossAppearSkip_Valvagia() {

    call BossAppearSkipFunc({'PosVector': [0.0, 1.850000023841858, -3.9800000190734863], 'AtVector': [0.0, 1.5, 0.0]})

}

void BossAppearSkip_Morpha() {

    call BossAppearSkipFunc({'PosVector': [0.0, 1.850000023841858, -3.990000009536743], 'AtVector': [0.0, 1.7599999904632568, -2.9200000762939453]})

}

void BossAppearSkip_Nabooru() {

    call BossAppearSkipFunc({'PosVector': [0.07000000029802322, 2.990000009536743, -3.119999885559082], 'AtVector': [0.07999999821186066, 1.8899999856948853, 0.20999999344348907]})

}

void BossAppearSkip_KotakeKoume() {

    call BossAppearSkipFunc({'PosVector': [0.0, 1.7599999904632568, -4.5], 'AtVector': [0.0, 1.7300000190734863, 0.0]})

}

void BossAppearSkip_Twinrova() {

    call BossAppearSkipFunc({'PosVector': [0.05999999865889549, 0.9100000262260437, -4.239999771118164], 'AtVector': [0.05000000074505806, 1.0399999618530273, -3.1700000762939453]})

}

void BossAppearSkip_Ganondorf() {

    call BossAppearSkipFunc({'PosVector': [0.03999999910593033, 1.5199999809265137, -2.069999933242798], 'AtVector': [0.03999999910593033, 1.5199999809265137, -1.0700000524520874]})

}

void BossAppearSkip_Ganon() {

    call BossAppearSkipFunc({'PosVector': [0.019999999552965164, 1.809999942779541, -4.53000020980835], 'AtVector': [0.019999999552965164, 1.7699999809265137, -3.5399999618530273]})

}
