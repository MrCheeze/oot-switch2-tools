-------- EventFlow: Goto_HyruleCastle --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerSetSelectedItem', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerSlowWalkStop']
queries: ['EventQueryPlayerCheckSelectedItem', 'EventQueryCheckPlayerState']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EventMemberCreateMethod': 2, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Malon_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventWait', 'EventWaitForActorPresence', 'EventRemoveProjectiles']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Talon_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerStopInGameBgm', 'EventTriggerSoundStartSceneBgm', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Zelda_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventAIScheduleWarpToAnchor', 'EventPlayASWithClothWarp', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Fairy_Saria
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_RebuildConditionEnvTimePalette', 'Event_ResetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Goto_HyruleCastle_Kaepora_00() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': True, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HyruleField_ArriveEntrance', 'Index': -1, 'Value': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_HrlField_0000'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_HrlField_0005'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HyruleField_ChangeENV', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventWorldManagerController.Event_RebuildConditionEnvTimePalette()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlField_0010'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-0.33000001311302185, 1.409999966621399, -3.180000066757202], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsFinishChallengeMenuOpenEvent', 'Value': True})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Pouch_Amiibo', 'Num': 1, 'IsSetMessageTargetActorName': False, 'IsEquipDIrect': False, 'IsGetEvent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'StepName': 'Step02', 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 77})

    call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 50})

    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Goto_HyruleCastle', 'IsFirstStep': True})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_HyruleField', 'StartType': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviHint_Disp_FieldHint_01', 'Value': False})
}

void Goto_HyruleCastle_AfterWakeUpTalon() {
    Npc_Hylia_Talon_Child.EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()

    call ShowItem.ShowItemSuccess({'AssignableItem': 32})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Hylia_Talon_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlCastle_0020'})
}

void Goto_HyruleCastle_MeetZelda() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    Npc_Hylia_Zelda_Child.EventTriggerParticipateEvent()
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Goto_HyruleCastle_CompletePos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Zelda_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    Npc_Hylia_Zelda_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_HrlCastle_0030'})
    Npc_Hylia_Zelda_Child.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlCastle_0035', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_HrlCastle_0045'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_HrlCastle_0050', 'FadeInTypeEventEnd': 2})
    EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlCastle_0060'})
    UISystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True})
    Npc_Hylia_Zelda_Child.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'ClothWarpMode': 2})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.8299999833106995, 1.4900000095367432, -3.2200000286102295], 'AtVector': [0.0, 1.309999942779541, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    Npc_Hylia_Zelda_Child.EventPlayASWithClothWarp({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': 2, 'IsWaitEnd': False})
    Npc_Hylia_Zelda_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'DoorOfTime', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    UISystemActor.EventEventFadeIn({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'DoorOfTime', 'IsFirstStep': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void KokiriForest_ArriveLostWood() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Kokiri_Saria_Child', 'InstanceName': 'KokiriForest_ArriveLostWood', 'IsActorCreateRequest': False, 'IsWaitEnd': True})
    Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood].EventWarpToTargetPosAndRot({'YAngle': -90.0, 'Position': [-120.1259994506836, 114.48249816894531, -36.88779830932617], 'IsWaitEnd': True, 'ClothWarpMode': -1})
    Npc_Fairy_Saria.EventWarpToTargetPosAndRot({'YAngle': -90.0, 'Position': [-120.8759994506836, 115.9000015258789, -36.88800048828125], 'IsWaitEnd': True, 'ClothWarpMode': -1})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'YAngle': 90.0, 'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'DemoWaitHalf', 'Position': [-122.125, 114.46269989013672, -36.88970184326172], 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-121.3759994506836, 115.9000015258789, -36.88800048828125], 'YAngle': 90.0, 'ClothWarpMode': -1})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:環境系SE下げ', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0150', 'FadeInTypeEventEnd': 2})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': True})
    }
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:環境系SE下げ', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0155', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HyruleField_ChangeENV', 'Value': True})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'FadePattern': 1, 'IsStartOnEvent': False, 'NextBanc': 'HyruleField_Child', 'NextStartPos': 'HyruleField_FrontOfLostWoodBridge', 'BootEventName': 'Dm_SY_BancChangeArrive_HyruleField', 'EventStarterName': '', 'IsItemWarp': False})
}

void Goto_HyruleCastle_AfterMalonAppear() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsAfter_Step02_01_Exp'}) {

        call SubEvent_GetEponaSong.Mask_All()

        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 1307241100:
            if !Npc_Hylia_Malon_Child.EventQueryIsOnRecentTalkFlag() {
                Event93:
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_AlarmCucco', 'Num': 1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Malon_Child_SeeTheCucco'})
                    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_105', 'MaintainPerformanceState': 0})
                    Event99:
                    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_101', 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        fork {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                        } {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                        }

                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsNpc_Hylia_Malon_Child_Talk_All', 'Index': -1}) {
                            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_114', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 5, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_108', 'MaintainPerformanceState': 0})
                        }
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:

                            call aboutTalon()

                            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 6, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call aboutMalon()

                                Event121:
                                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call aboutLonLonLanch()

                                    Event129:
                                    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_113', 'MaintainPerformanceState': 0})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsNpc_Hylia_Malon_Child_Talk_All', 'Index': -1, 'Value': True})
                                } else {
                                    Event200:
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

                                    call Malon_Goodbye()

                                }
                              case 1:

                                call aboutLonLonLanch()

                                Event123:
                                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call aboutMalon()

                                    goto Event129
                                } else {
                                    goto Event200
                                }
                              case 2:
                                Event199:
                                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

                                call Malon_Goodbye()

                            }
                          case 1:

                            call aboutMalon()

                            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 6, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call aboutTalon()

                                goto Event121
                              case 1:

                                call aboutLonLonLanch()

                                Event125:
                                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call aboutTalon()

                                    goto Event129
                                } else {
                                    goto Event200
                                }
                              case 2:
                                goto Event199
                            }
                          case 2:

                            call aboutLonLonLanch()

                            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 0, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_110', 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call aboutTalon()

                                goto Event123
                              case 1:

                                call aboutMalon()

                                goto Event125
                              case 2:
                                goto Event199
                            }
                          case 3:
                            Event147:

                            call Malon_Goodbye()

                        }
                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        goto Event147
                    }
                } else {
                    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_117', 'MaintainPerformanceState': 0})
                    goto Event99
                }
            } else {
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_102', 'MaintainPerformanceState': 0})
                Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_104', 'MaintainPerformanceState': 0})
                goto Event93
            }
          case 803420549:
            goto Event93
        }
    } else
    if !Npc_Hylia_Malon_Child.EventNPCQueryCheckFrontToTarget({'AngleThreshold': 120.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {

        call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})

    }
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_96', 'IsAnonymous': True, 'MaintainPerformanceState': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'ClothWarpMode': 0})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_100', 'IsAnonymous': True, 'MaintainPerformanceState': 0})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_97', 'MaintainPerformanceState': 0})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_98', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_118', 'MaintainPerformanceState': 0})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkingS'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Hylia_Malon_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleCastle_Taron_IsBefore_MeetMaron', 'Index': -1}) {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_123', 'ASName': 'Act_SitChair_Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_123_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
        Event35:

        call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ActorName': 'Item_WeirdEgg', 'ASName': 'Act_SitChair_Wait', 'Npc_EventStarter': ActorIdentifier(name="Npc_Hylia_Malon_Child"), 'Target': 3, 'NpcActorName': 'Npc_Hylia_Malon_Child', 'NpcInstanceName': ''})

        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_117', 'MaintainPerformanceState': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step03', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'Goto_HyruleCastle'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveTalked_Special.Goto_HyruleCastle_Goto_HyruleCastle_AfterMalonAppear_Event38'})
    } else {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_119', 'ASName': 'Act_SitChair_Wait', 'MaintainPerformanceState': 0})
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_119_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
        goto Event35
    }
}

void Goto_HyruleCastle_EntryMarket() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step02_01'})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    } {
        PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteShadowRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False, 'BakeLightLuminanceRatio': 1.0, 'ShadowRatio': 1.0})
    }

}

void Step03_01_Npc_Navi_StepStart() {
    switch Player_Event.EventQueryPlayerCheckSelectedItem() {
      case 0:

        call EggHatch()

        Player_Event.EventPlayerSetSelectedItem({'Item': 32, 'IsWaitEnd': True})
        Event88:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Goto_HyruleCastle', 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step03_02'})
      case [1, 2]:

        call EggHatch()

        goto Event88
    }
}

void EggHatch() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Crow'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAroundAttention', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        }
    }

    if Player_Event.EventQueryCheckPlayerState({'State': 10}) {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    }
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_WeirdEgg', 'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'IsGetEvent': False})

    call GetInEvent_EggHatche.GetInEvent_EggHatche({'ActorName': 'Item_AlarmCucco'})

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 82})
}

void Malon_Goodbye() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_107', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_99', 'MaintainPerformanceState': 0, 'ASName': 'Act_SitChair_Hello'})
    }
}

void aboutTalon() {
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_109', 'MaintainPerformanceState': 0})
}

void aboutMalon() {
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_111', 'MaintainPerformanceState': 0})
}

void aboutLonLonLanch() {
    Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_112', 'MaintainPerformanceState': 0})
}

void aboutCucco() {
    Player_Event.EventTriggerParticipateEvent()

    call InitTalk.InitTalk_OnEvent({'Arg_Greeting': 4, 'InstanceNameA': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Malon_Child"), 'Arg_Turn': 1, 'ActorNameA': 'Npc_Hylia_Malon_Child'})


    call ShowItem.ShowItemSuccess_NoCamera({'AssignableItem': 32})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Malon_Child_SeeTheCucco'}) {
        if !Npc_Hylia_Malon_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_121', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_122', 'MaintainPerformanceState': 0})
        }
        Event116:

        call NpcCommon.ShowItem_Close()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Malon_Child_SeeTheCucco'})
        Npc_Hylia_Malon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Malon_Child:Talk_120', 'MaintainPerformanceState': 0})
        goto Event116
    }
}
