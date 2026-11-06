-------- EventFlow: OpeningEvent --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerSetHaveTalked', 'EventTriggerNaviWarpToTargetPosAndRot', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: ['EventQueryBancChangeIsLoaded']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: ['EventQueryIsInGameBgmSuspend']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventLoadingFadeOut', 'EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainPinResource']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void Opening_LoadingKokiriForest() {
    EventSystemActor.EventTransition({'EventName': 'Dm_Kokiri_0000', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    if GameSystemActor.EventQueryBancChangeIsLoaded() {
        UISystemActor.EventLoadingFadeOut({'IsBlackFade': True, 'IsWaitEnd': True, 'IsNoIcon': False})
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': True, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
    }
}

void Opening_Introduction() {
    Player_Event.EventTriggerParticipateEvent()
    EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Meet_DekuTree', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': False})
    TerrainSystemActor.EventTerrainPinResource({'SceneName': 'KokiriForest_01', 'Position': [69.83300018310547, 111.99400329589844, -16.405000686645508], 'Level': 16, 'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [68.12999725341797, 112.62000274658203, -11.829999923706055], 'AtVector': [68.87999725341797, 112.58999633789062, -12.489999771118164], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventSystemActor.EventTransition({'EventName': 'Dm_Kokiri_0030', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Length': 0, 'IsWaitEnd': True, 'Color': 0})
        Npc_Navi.EventWarpToTargetPosAndRot({'Position': [-46.099998474121094, 119.54000091552734, 15.829999923706055], 'ClothWarpMode': -1, 'YAngle': 108.35299682617188, 'IsWaitEnd': True})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-47.599998474121094, 120.02999877929688, 15.869999885559082], 'AtVector': [-46.150001525878906, 119.4800033569336, 15.40999984741211], 'TargetFovy': 54.90999984741211, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        UISystemActor.EventEventFadeIn({'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False, 'Color': 0})
        Event17:
        if !SoundSystemActor.EventQueryIsInGameBgmSuspend() {
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        }
        Npc_Navi.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': True})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        Npc_Navi.EventTriggerNaviWarpToTargetPosAndRot({'Position': [-46.099998474121094, 119.54000091552734, 15.829999923706055], 'ClothWarpMode': -1, 'YAngle': 108.35299682617188})
        goto Event17
    }
}
