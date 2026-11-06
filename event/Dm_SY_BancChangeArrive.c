-------- EventFlow: Dm_SY_BancChangeArrive --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventWaitCloseLoadingFade', 'EventEventFadeOut', 'EventTriggerRequestOpenLoseRunningRaceSimpleInfo', 'EventEventFadeIn', 'EventTriggerSetIsNotClearMessageLog']
queries: ['EventQueryIsRequestLoseRunningRaceAfterBancChanged']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait', 'EventRefindRangeGameSafetySection', 'EventAIScheduleNPCForceWarpToCurrentAnchor', 'EventTriggerBancRequestBeforehandLoad', 'EventReserveBancChange', 'EventWaitTalkCameraInterpolationEnd', 'EventTriggerSendErrorToEventResource', 'EventWaitUpdate']
queries: ['EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsOwnedHorseInCurrentScene']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerRideOnLastRiddenAnimal', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWaitCreationFinishedEquipment', 'EventPlayerWait', 'EventPlayerUnequip', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerPlayerAccelerateRidableAndReserveStop', 'EventTriggerPlayerRequestLookAtTheFront']
queries: ['EventQueryPlayerIsChild', 'EventQueryCheckPlayerState', 'EventQueryPlayerIsEquipArmor', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'BindTargetActorNameComponent': 'Player', 'ExceptionalBindType': 4, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerBecomeSpeaker', 'EventNaviMoveAtActor']
queries: ['EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_007_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_010_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventAIScheduleMoveToPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Epona_Adult[Animal_Epona_Adult_Owned]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

void EntryPoint0() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.600000023841858, -4.0], 'AtVector': [0.0, 1.2000000476837158, 0.0], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.7999999523162842, -4.0], 'AtVector': [0.0, 1.399999976158142, 0.0], 'IsEnableRevertFast': False})
    }
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
            Event187:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
            Event360:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
        } else {
            Event18:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            goto Event360
        }
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        goto Event18
    } else {
        goto Event187
    }
}

void InsideTheDekuTree_Arrive() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Deku_0000'})

    call NaviHint.Hint_Dungeon_Tutorial_Event()

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfForest', 'IsIgnoreCompletedChallenge': True, 'StepName': 'MeetBoss', 'IsIgnoreChallengeProgressUI': False})
}

void DeathMountainTrail_Arrive() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_DeathMtTrail_0000'})

    call Get_StoneOfFire.Get_StoneOfFire_DeathMtTrailIn()

}

void GoronCity_Arrive() {
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerIsChild() {
        Event42:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.SageOfFire_CityIn'}) {
        goto Event42
    } else {
        Event32:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'SageOfFire_CityIn'})
    }
}

void Goto_ZoraDomain() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Zora_0000'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Get_StoneOfWater_MeetImpa', 'Index': -1}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step03_Impa'})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Get_StoneOfWater', 'StepName': 'Step03', 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
    }
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    PostProcessingActor.EventOverwriteSceneShadingParams({'IsOverwriteBakeLightLuminanceRatio': True, 'IsOverwriteInnerRatio': True, 'ShadowRatio': 1.0, 'IsOverwriteShadowRatio': True, 'InnerRatio': 2.0, 'BakeLightLuminanceRatio': 0.3499999940395355})
}

void FromHyruleField_ArriveGerudoValley() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddPosVector': [0.0, 1.100000023841858, -4.599999904632568], 'AdultAddAtVector': [0.0, 1.2000000476837158, 0.0]})

    }
}

void FromSpiritTemple_ArriveColossus() {
    Player_Event.EventTriggerParticipateEvent()

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.899999976158142, 0.0], 'AdultAddAtVector': [0.0, 1.899999976158142, 0.0], 'ChildAddPosVector': [0.0, 1.600000023841858, -4.5], 'AdultAddPosVector': [0.0, 1.600000023841858, -4.5]})

}

void FromWasteland_ArriveColossus() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_DesertColossus_0000'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step04'})
}

void FromColossus_ArriveSpiritTemple() {
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_SageOfSpirit', 'Index': -1, 'Value': 'Step07'}) {
        Event95:
        if !Player_Event.EventQueryPlayerIsChild() {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step07_00'})
            Event94:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_SageOfSpirit', 'Index': -1, 'Value': 'Step07_pre00'}) {
        goto Event95
    } else {
        goto Event94
    }
}

void GanonCastle_Adult_Field_Entry() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GanonCastle_0000'})
}

void Get_StoneOfFire_ArriveFromGoronCity() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_HrlCastle_0030'}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_LostWood_0000'}) {
            Event55:

            call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.7999999523162842, -4.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.399999976158142, -3.5], 'ChildAddAtVector': [0.0, 1.399999976158142, 0.0]})

            Event165:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_GoronCityDarniaTalk_Exp'})
            && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_KokiriForestIn_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'SariaMelodyGet'})
            }
        } else
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_LostWood_0000_GoronCity'}) {
            goto Event55
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LostWood_0000_GoronCity'})
        }
        goto Event165
    } else {
        goto Event55
    }
}

void Get_StoneOfFire_ArriveFromKokiri() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_HrlCastle_0030'}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_LostWood_0000'}) {
            Event470:

            call SubFlow_CustomMoveKokiri({'AdultAddPosVector': [0.0, 1.7999999523162842, -4.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.399999976158142, -3.5], 'ChildAddAtVector': [0.0, 1.399999976158142, 0.0]})

            Event161:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_KokiriForestNPCTalk_Exp'})
            && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_KokiriForestIn_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'SariaMelodyGet', 'IsIgnoreCompletedChallenge': True})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
            }
        } else
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_LostWood_0000_GoronCity'}) {
            goto Event470
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LostWood_0000'})
        }
        goto Event161
    } else {

        call SubFlow_CustomMoveKokiri({'AdultAddPosVector': [0.0, 1.7999999523162842, -4.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.399999976158142, -3.5], 'ChildAddAtVector': [0.0, 1.399999976158142, 0.0]})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Dm_SY_BancChangeArrive_Get_StoneOfFire_ArriveFromKokiri_Event312', 'Index': -1}) {
            goto Event161
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

            call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {

                    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfForest:NaviStop_03'})

                } else {

                    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfForest:NaviStop_02'})

                }
                Event314:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Dm_SY_BancChangeArrive_Get_StoneOfFire_ArriveFromKokiri_Event312', 'Value': True, 'Index': -1})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
            } else {

                call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfForest:NaviStop_01'})

                goto Event314
            }
        }
    }
}

void FromColossus_ArriveWasteland() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ArrivedFromColossus'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_ArrivedFromColossus', 'Index': -1, 'Value': True})
    }
}

void IceCavern_Arrival() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Goto_IceCave'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Goto_IceCave'})
    }
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step01_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step03'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfWater', 'IsFirstStep': False})
    }
}

void WaterTemple_Arrival() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SY_BancChangeArrive'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step04_Exp'}) {
            Event129:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'ChallengeName': 'SageOfWater', 'StepName': 'Step06'})
        }
    } else {
        goto Event129
    }
}

void Dm_SY_BancChangeArrive_Market() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_HrlCastle_0005'})
    PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'EndDistance': 6.5, 'StartDistance': 6.5, 'RequiredFrame': 0, 'IsWaitEnd': False, 'StartFNumber': 8.0, 'EndFNumber': 8.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})

    call Goto_HyruleCastle.Goto_HyruleCastle_EntryMarket()

}

void Arrive_ShadowTemple() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Goto_ShadowTemple'}) {

        call EntryPoint0_Custom()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Goto_ShadowTemple'})
    }
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_Adult_GlassTruth'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_DefeatBoss_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_MeetBoss_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsAfter_GetGlassTruth_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfShadow', 'StepName': 'MeetBoss', 'IsIgnoreCompletedChallenge': True})
    }
}

void Goto_LakeHylia() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InitDemo_LakeHylia'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LakeHrl_0000'})
    }
}

void FromGerudoFortress_ArriveWateland() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_SageOfSpirit', 'Value': 'Step02'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step03'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HountedWasteland_ArrivedFromColossus'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HountedWasteland_ArrivedFromColossus', 'Value': False, 'Index': -1})
    }
}

void FromGerudoFortress_ArriveTrainingGround() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Goto_GerudoTrainingGround'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
        Event464:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_EnterThroughEntrance', 'Index': -1, 'Value': True})
    } else {
        EventSystemActor.EventTransition({'EventName': 'Goto_GerudoTrainingGround', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetIceArrow', 'StepName': 'Step01'})
        goto Event464
    }
}

void DreamWorldBossAreaArrive() {
    UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossAppear', 'Value': True})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 15}) {
      case [0, 2]:
        Event490:
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        ChallengeSystemActor.EventTriggerShowTimerUI()
        Player_Event.EventTriggerParticipateEvent()
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Sequence_HoldRangeSafetyRequest', 'Value': False})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventRefindRangeGameSafetySection({'IsWaitEnd': True})
      case 1:
        Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Armor_GlassTruth', 'IsActive': False, 'DynamicEquipmentState': 1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        goto Event490
    }
}

void BancChangeArrive_LostWood() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.SacredForestMeadow_Field_MelodyGet_Saria'}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_LostWood_0010'}) {
            Event53:

            call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.100000023841858, -3.5], 'AdultAddPosVector': [0.0, 1.100000023841858, -3.5], 'ChildAddAtVector': [0.0, 1.5, 0.0], 'AdultAddAtVector': [0.0, 1.5, 0.0]})

        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LostWood_0010'})
        }
    } else {
        goto Event53
    }
}

void Dm_SY_BancChangeArrive_HyruleField() {
    Player_Event.EventTriggerParticipateEvent()

    call EntryPoint_1stHyruleField()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

    call ActionGuide.OpenActionGuideSceenForOcarina()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void SacredForestMeadow_ArriveFromLostWood() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Goto_SacredForest'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Goto_SacredForest'})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SacredForestMeadow_Enemy_Moblin_Club_DefaultPos'})
}

void GoTo_DeathMountainCrater() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DeathMtCrater_0000_FromTop', 'FadeInTypeEventEnd': 2})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.23999999463558197, 2.190000057220459, -4.199999809265137], 'AtVector': [0.23999999463558197, 1.149999976158142, 0.019999999552965164], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    Event124:
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call EntryPoint1()


    call SageOfFire.SageOfFire_NaviScorching()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DeathMtCrater_IsFirstEntry', 'Value': False, 'Index': -1})
}

void GoTo_DeathMountainCrater_FromGoronCity() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DeathMtCrater_0000', 'FadeInTypeEventEnd': 2})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.1899999976158142, 2.309999942779541, -4.170000076293945], 'AtVector': [-0.1899999976158142, 1.25, 0.10999999940395355], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    goto Event124
}

void Dm_SY_BancChangeArrive_Kokiri() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event275:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event266:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event266
            } else {
                goto Event275
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lostwood_BancChangeArrive_Kokiri'}) {
        Event263:
        UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 423})
    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtLookAroundAttention', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Lostwood_BancChangeArrive_Kokiri'})
        goto Event263
    }
}

void FromZoraDomain_arriveZoraFountain() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZoraFountain_0000'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 470})
}

void GoronCity_Arrive_FromLostWood() {
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_FromLostWood', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    goto Event32
}

void Dm_SY_BancChangeArrive_SpiritTemple_02() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [-1.0, 1.2000000476837158, -3.5], 'ChildAddAtVector': [1.0, 1.7999999523162842, 1.0], 'AdultAddPosVector': [-1.0, 1.5, -4.0], 'AdultAddAtVector': [0.5, 1.600000023841858, 1.0]})

}

void Dm_SY_BancChangeArrive_SpiritTemple_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [-1.0, 1.0, -3.0], 'ChildAddAtVector': [0.15000000596046448, 1.399999976158142, 0.10000000149011612], 'AdultAddPosVector': [-1.0, 1.0, -2.0999999046325684], 'AdultAddAtVector': [0.15000000596046448, 1.7999999523162842, 0.10000000149011612]})

}

void EntryPoint0_Custom() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVector': [0.0, 2.799999952316284, -4.349999904632568], 'AtVector': [0.0, 1.5499999523162842, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event353:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event344:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event344
            } else {
                goto Event353
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
    }

    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}

void GoronCity_InitDemo_Arrive() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Goron_0000'})

    call Get_StoneOfFire.Get_StoneOfFire_ArriveCity()

}

void DeathMountainCrater_Arrive() {
    Player_Event.EventTriggerParticipateEvent()

    call SubFlow_CustomMoveCamera_NoKeepCamera({'ChildAddPosVector': [0.0, 1.75, -4.0], 'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'AdultAddPosVector': [0.0, 2.049999952316284, -5.0], 'AdultAddAtVector': [0.0, 1.850000023841858, 0.0]})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_NaviCraterTalk'})
    && Player_Event.EventQueryPlayerIsChild()
    && !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Goron', 'Num': 1})
    && Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_Goron', 'ArmorSlot': 1}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        EventCamera.EventTriggerCameraSavePoint()
        switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
          case [0, 3]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ナビィが肩にいません'})
          case 1:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'AtVector': [0.23999999463558197, 1.149999976158142, 0.019999999552965164], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'MoveTime': 60, 'PosVector': [0.23999999463558197, 2.299999952316284, -4.360000133514404], 'IsEnableRevertFast': False})
            Event253:

            call EntryPoint1()


            call SageOfFire.SageOfFire_NaviCraterTalk()

          case 2:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 60, 'Actor1ActorName': 'Player_Event', 'AtVector': [-0.20000000298023224, 1.25, -0.09000000357627869], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.20000000298023224, 2.299999952316284, -4.360000133514404], 'IsEnableRevertFast': False})
            goto Event253
        }
    }
}

void SubFlow_CustomMoveCamera() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event153:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event75:

                    call WaitingEpona_WarpIfClose()

                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event75
            } else {
                goto Event153
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVector': 'ChildAddPosVector', 'AtVector': 'ChildAddAtVector', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'AtVector': 'AdultAddAtVector', 'PosVector': 'AdultAddPosVector', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False, 'ChangeToManualModeAfterEvent': False})
    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}

void Dm_SY_BancChangeArrive_KokiriForest_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 2.200000047683716, -3.5], 'AdultAddPosVector': [0.0, 2.200000047683716, -3.5], 'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.350000023841858, 0.0]})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.NaviHint_Trial', 'Index': -1, 'Value': True})
}

void Dm_SY_BancChangeArrive_InsideTheDekuTree_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.5, -3.5], 'AdultAddPosVector': [0.0, 1.5, -3.5], 'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.350000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_Market_01() {

    call SubFlow_CustomMoveCamera({'AdultAddAtVector': [0.0, 0.0, 0.0], 'AdultAddPosVector': [0.0, 0.0, 0.0], 'ChildAddPosVector': [0.0, 1.5, -3.5], 'ChildAddAtVector': [0.0, 1.25, 0.0]})

}

void Dm_SY_BancChangeArrive_HyruleCastle_01() {

    call SubFlow_CustomMoveCamera({'AdultAddAtVector': [0.0, 0.0, 0.0], 'AdultAddPosVector': [0.0, 0.0, 0.0], 'ChildAddPosVector': [0.0, 1.2999999523162842, -4.5], 'ChildAddAtVector': [0.0, 1.649999976158142, 0.0]})

}

void Dm_SY_BancChangeArrive_KakarikoVillage_01() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {

        call SubFlow_CustomMoveCamera({'AdultAddAtVector': [0.0, 2.0, 0.0], 'ChildAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [-1.100000023841858, 1.2000000476837158, -4.5], 'AdultAddPosVector': [-1.100000023841858, 1.600000023841858, -4.5]})

    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddAtVector': [0.0, 2.0, 0.0], 'AdultAddPosVector': [-1.149999976158142, 2.0, -4.800000190734863]})

    }
}

void Dm_SY_BancChangeArrive_HyruleField_01() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_HrlField_0080'}) {
                Event60:

                call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.399999976158142, 0.0], 'ChildAddPosVector': [-0.25, 1.5, -4.0], 'AdultAddAtVector': [0.0, 1.7000000476837158, 0.0], 'AdultAddPosVector': [-0.2800000011920929, 2.25, -4.0]})

            } else
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Npc_Dream_FirstTalk'}) {
                goto Event60
            } else
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_TimeTemple_0087'}) {
                goto Event60
            } else
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_TimeTemple_0086'}) {
                goto Event60
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_ArriveFromKakarikoVillage'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventSystemActor.EventTransition({'EventName': 'Dm_HrlField_0080', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            }
        } else {
            goto Event60
        }
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        goto Event60
    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddAtVector': [0.0, 1.600000023841858, 0.0], 'AdultAddPosVector': [0.0, 2.799999952316284, -4.800000190734863]})

    }
}

void Dm_SY_BancChangeArrive_KakarikoVillage_02() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.5499999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.75, -3.25], 'AdultAddPosVector': [0.0, 1.75, -3.25]})

}

void Dm_SY_BancChangeArrive_DeathMountainTrail_01() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromGoronCity', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromDodongoCavern', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromMountainCrater', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MountainTrail_ArriveFromKakarikoVillage'})

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.25, -3.5], 'ChildAddAtVector': [0.0, 1.409999966621399, 0.0], 'AdultAddPosVector': [0.0, 1.3200000524520874, -3.5], 'AdultAddAtVector': [0.0, 1.600000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_Graveyard_01() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.399999976158142, 0.0], 'ChildAddPosVector': [0.0, 1.5, -4.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'AdultAddPosVector': [0.0, 1.850000023841858, -4.0]})

}

void Dm_SY_BancChangeArrive_Market_02() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.5, -4.0], 'ChildAddAtVector': [0.0, 1.600000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.75, 0.0], 'AdultAddPosVector': [0.0, 1.600000023841858, -4.0]})

}

void Dm_SY_BancChangeArrive_HyruleField_02() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HrlField_HasEnteredFirstTime_Adult', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HrlField_HasEnteredFirstTime_Adult', 'Value': False, 'Index': -1})
    }
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': False, 'Length': 0})
    GameSystemActor.EventWaitUpdate({'UpdateCount': 2, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': False, 'Length': 0, 'IsNoPlayAnime': False})

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.5, -4.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.5, -4.0], 'ChildAddAtVector': [0.0, 1.600000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_DeathMountainTrail_02() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromGoronCity', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromDodongoCavern', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromMountainCrater', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromKakarikoVillage', 'Value': False})

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.399999976158142, -4.5], 'AdultAddAtVector': [0.0, 1.649999976158142, 0.0], 'ChildAddAtVector': [0.0, 1.4500000476837158, 0.0], 'ChildAddPosVector': [0.0, 1.0499999523162842, -4.0]})

}

void Dm_SY_BancChangeArrive_GoronCity_01() {

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 2.200000047683716, -4.5], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 1.5, -3.5], 'ChildAddAtVector': [0.0, 1.2799999713897705, 0.0]})

}

void Dm_SY_BancChangeArrive_GoronCity_02() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'ChildAddPosVector': [0.0, 1.75, -4.0], 'AdultAddPosVector': [0.0, 1.75, -4.5], 'AdultAddAtVector': [0.0, 1.350000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_DeathMountainTrail_03() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromGoronCity', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromDodongoCavern', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromMountainCrater', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromKakarikoVillage', 'Value': False})

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.4500000476837158, 0.0], 'AdultAddAtVector': [0.0, 1.600000023841858, 0.0], 'ChildAddPosVector': [0.3490000069141388, 1.25, -3.984999895095825], 'AdultAddPosVector': [0.3490000069141388, 1.378000020980835, -3.984999895095825]})

}

void Dm_SY_BancChangeArrive_SacredForestMeadow_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.25, -4.0], 'ChildAddAtVector': [0.0, 1.4500000476837158, 0.0], 'AdultAddPosVector': [0.0, 3.200000047683716, -4.5], 'AdultAddAtVector': [0.0, 1.899999976158142, 0.0]})

}

void Dm_SY_BancChangeArrive_ZoraFountain_01() {

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.350000023841858, -4.5], 'AdultAddAtVector': [0.0, 1.600000023841858, 0.0], 'ChildAddPosVector': [0.0, 1.600000023841858, -4.0], 'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0]})

}

void ZoraRiver_ArriveFromZoraDomain() {
    Player_Event.EventTriggerParticipateEvent()

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.25, 0.0], 'ChildAddPosVector': [0.0, 1.600000023841858, -3.0], 'AdultAddAtVector': [0.0, 1.399999976158142, 0.0], 'AdultAddPosVector': [0.0, 2.0, -3.5]})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZoraRiver_ArriveFromZoraDomain'})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step05_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsAfter_Step04_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfWater_IsReminded', 'Index': -1}) {

        call SageOfWater.HowToGoToWaterTemple()

    }
}

void ZoraRiver_ArriveFromLostWood() {
    Player_Event.EventTriggerParticipateEvent()

    call SubFlow_CustomMoveCamera_UnderWater({'ChildAddPosVector': [0.0, 1.2000000476837158, -3.5], 'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0], 'AdultAddPosVector': [0.0, 1.2000000476837158, -3.5], 'AdultAddAtVector': [0.0, 1.2999999523162842, 0.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ZoraRiver_ArriveFromZoraDomain'})
}

void Dm_SY_BancChangeArrive_LakeHylia_01() {

    call SubFlow_CustomMoveCamera_UnderWater({'ChildAddPosVector': [0.0, 1.2000000476837158, -3.5], 'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0], 'AdultAddPosVector': [0.0, 1.2000000476837158, -3.5], 'AdultAddAtVector': [0.0, 1.2999999523162842, 0.0]})

}

void Dm_SY_BancChangeArrive_ZoraDomain_01() {

    call SubFlow_CustomMoveCamera_UnderWater({'ChildAddPosVector': [0.0, 1.2000000476837158, -3.5], 'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0], 'AdultAddPosVector': [0.0, 1.2000000476837158, -3.5], 'AdultAddAtVector': [0.0, 1.2999999523162842, 0.0]})

}

void MountainTrail_ArriveFromDeathMountainCrater() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromGoronCity', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromDodongoCavern', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromMountainCrater', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MountainTrail_ArriveFromKakarikoVillage', 'Value': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
}

void Dm_SY_BancChangeArrive_ZoraRiver_01_Under() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.600000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.600000023841858, 0.0], 'ChildAddPosVector': [0.0, 2.0, -5.0], 'AdultAddPosVector': [0.0, 2.5, -5.5]})

}

void Dm_SY_BancChangeArrive_HyruleField_03_Land() {

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 2.5, -4.5], 'ChildAddPosVector': [0.0, 2.5, -4.0], 'ChildAddAtVector': [0.0, 1.5, 0.0], 'AdultAddAtVector': [0.0, 1.5, 0.0]})

}

void Dm_SY_BancChangeArrive_LostWood_01() {

    call SubFlow_CustomMoveCamera_UnderWater({'ChildAddPosVector': [0.0, 1.2000000476837158, -3.5], 'ChildAddAtVector': [0.0, 1.2999999523162842, 0.0], 'AdultAddPosVector': [0.0, 1.2000000476837158, -3.5], 'AdultAddAtVector': [0.0, 1.2999999523162842, 0.0]})

}

void Dm_SY_BancChangeArrive_GoronCity_02_before() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.350000023841858, 0.0], 'ChildAddPosVector': [0.0, 1.75, -4.0], 'AdultAddPosVector': [0.0, 1.75, -4.5], 'AdultAddAtVector': [0.0, 1.350000023841858, 0.0]})

}

void SubFlow_CustomMoveCamera_UnderWater() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event291:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                    Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
                } else {
                    Event286:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                    goto Event286
                } else {
                    goto Event291
                }
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVector': 'ChildAddPosVector', 'AtVector': 'ChildAddAtVector', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'AtVector': 'AdultAddAtVector', 'PosVector': 'AdultAddPosVector', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

}

void FromTrainingGround_ArriveFortress() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_OutThroughEntrance', 'Index': -1, 'Value': True})
}

void Dm_SY_BancChangeArrive_IceCaven_01() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.9500000476837158, 0.0], 'AdultAddAtVector': [0.0, 1.9500000476837158, 0.0], 'ChildAddPosVector': [0.0, 1.4500000476837158, -4.449999809265137], 'AdultAddPosVector': [0.0, 1.4500000476837158, -4.449999809265137]})

}

void Dm_SY_BancChangeArrive_IceCaven_02() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 2.5, -5.0], 'AdultAddPosVector': [0.0, 2.5, -5.0], 'ChildAddAtVector': [0.0, 1.75, 0.0], 'AdultAddAtVector': [0.0, 1.75, 0.0]})

}

void Dm_SY_BancChangeArrive_UndetTheGrave_01() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.7999999523162842, 0.0], 'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 2.799999952316284, -4.099999904632568], 'AdultAddPosVector': [0.0, 2.799999952316284, -4.099999904632568]})

}

void Dm_SY_BancChangeArrive_UnderTheGrave_02() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 2.200000047683716, -3.5], 'AdultAddPosVector': [0.0, 2.200000047683716, -3.5], 'ChildAddAtVector': [0.0, 1.399999976158142, 0.0], 'AdultAddAtVector': [0.0, 1.399999976158142, 0.0]})

}

void Dm_SY_BancChangeArrive_DeathMountainCrater_02() {

    call SubFlow_CustomMoveCamera({'AdultAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddAtVector': [0.0, 1.7999999523162842, 0.0], 'ChildAddPosVector': [0.0, 2.200000047683716, -4.5], 'AdultAddPosVector': [0.0, 2.200000047683716, -4.5]})

}

void Dm_SY_BancChangeArrive_ShadowTemple_01() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.7000000476837158, 0.0], 'AdultAddAtVector': [0.0, 1.7000000476837158, 0.0], 'ChildAddPosVector': [0.0, 2.4000000953674316, -3.75], 'AdultAddPosVector': [0.0, 2.4000000953674316, -3.75]})

}

void Dm_SY_BancChangeArrive_DesertColossus_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.350000023841858, -5.0], 'AdultAddPosVector': [0.0, 1.350000023841858, -5.0], 'ChildAddAtVector': [0.0, 1.850000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.850000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_InsideGanonCastle_01() {

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.0, -4.400000095367432], 'ChildAddPosVector': [0.0, 1.0, -4.400000095367432], 'AdultAddAtVector': [0.0, 1.850000023841858, 0.0], 'ChildAddAtVector': [0.0, 1.850000023841858, 0.0]})

}

void Dm_SY_BancChangeArrive_Market_03() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.600000023841858, 0.0], 'ChildAddPosVector': [0.0, 1.9500000476837158, -4.5], 'AdultAddPosVector': [0.0, 2.0, -4.5], 'AdultAddAtVector': [0.0, 1.649999976158142, 0.0]})

}

void Dm_SY_BancChangeArrive_GanonCastle_01() {

    call SubFlow_CustomMoveCamera({'ChildAddPosVector': [0.0, 1.5, -4.5], 'ChildAddAtVector': [0.0, 1.899999976158142, 0.0], 'AdultAddPosVector': [0.0, 1.4500000476837158, -4.5], 'AdultAddAtVector': [0.0, 1.899999976158142, 0.0]})

}

void Dm_SY_BancChangeArrive_GanonCastle_02() {

    call SubFlow_CustomMoveCamera({'AdultAddPosVector': [0.0, 1.7999999523162842, -4.5], 'ChildAddPosVector': [0.0, 1.7999999523162842, -4.5], 'ChildAddAtVector': [0.0, 1.6100000143051147, 0.0], 'AdultAddAtVector': [0.0, 1.6100000143051147, 0.0]})

}

void Dm_SY_BancChangeArrive_GerudoFortress_02() {

    call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.850000023841858, 0.0], 'AdultAddAtVector': [0.0, 1.850000023841858, 0.0], 'AdultAddPosVector': [0.0, 1.8300000429153442, -4.199999809265137], 'ChildAddPosVector': [0.0, 1.6299999952316284, -4.199999809265137]})

}

void Dm_SY_BancChangeArrive_GerudoFortress_03() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {

        call SubFlow_CustomMoveCamera({'ChildAddAtVector': [0.0, 1.649999976158142, 0.0], 'AdultAddAtVector': [0.0, 1.649999976158142, 0.0], 'ChildAddPosVector': [0.0, 1.5499999523162842, -4.25], 'AdultAddPosVector': [0.0, 1.5499999523162842, -4.25]})

    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddAtVector': [0.0, 2.200000047683716, 0.0], 'AdultAddPosVector': [0.0, 2.0, -4.800000190734863]})

    }
}

void Dm_SY_BancChangeArrive_LakeHylia_02() {
    Player_Event.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerRequestAutoSave()
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'PosVector': [0.0, 2.200000047683716, -3.5], 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event447:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                    Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
                } else {
                    Event440:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event440
            } else {
                goto Event447
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
    }

    if !UISystemActor.EventQueryIsRequestLoseRunningRaceAfterBancChanged() {

        fork {
            Npc_Navi.EventNaviMoveAtActor({'IsWaitEnd': True, 'IsTurnLooking': False, 'ASCommand': 'EvtTalk', 'LookAtActorName': 'Player_Event', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'LookAtTarget': 2, 'IsLookAtObject': True, 'TargetActorName': 'Player_Event', 'IsUseDisguiseSpeakerPos': False, 'TargetInstanceName': '', 'IsTargetNaviAttentionPos': False, 'LookAtPosOffset': [0.0, 0.20000000298023224, 0.0], 'TargetOffset': [0.0, 0.30000001192092896, 0.6000000238418579], 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
            Npc_Navi.EventTriggerBecomeSpeaker()
        } {

            call NaviEventCommon.Sub_InitTalk_PlayerWait()

        }


        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_901'})

        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        UISystemActor.EventTriggerRequestOpenLoseRunningRaceSimpleInfo()
    }
}

void Dm_SY_BancChangeArrive_HyruleField_03() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddAtVector': [0.0, 1.600000023841858, 0.0], 'AdultAddPosVector': [0.0, 2.0, -4.800000190734863]})

    }
}

void SubFlow_CustomMoveCamera_Horse() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    Player_Event.EventTriggerPlayerRideOnLastRiddenAnimal()
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        Player_Event.EventTriggerPlayerAccelerateRidableAndReserveStop()
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Animal_Epona_Adult', 'Actor1InstanceName': 'Animal_Epona_Adult_Owned', 'Actor2InstanceName': 'Animal_Epona_Adult_Owned', 'Actor2ActorName': 'Animal_Epona_Adult', 'AtVector': 'AdultAddAtVector', 'PosVector': 'AdultAddPosVector', 'IsEnableRevertFast': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False, 'ChangeToManualModeAfterEvent': False})
    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}

void Dm_SY_BancChangeArrive_GerudoValley_01() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_RunFromFortress'}) {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
            Event418:
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 10})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_RunFromFortress', 'Value': False})
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_BancChangeArrive'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoFortress_RunFromFortress'}) {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddPosVector': [0.0, 2.0, -5.0], 'AdultAddAtVector': [0.0, 2.200000047683716, 0.0]})

        goto Event418
    } else {

        call SubFlow_CustomMoveCamera_Horse({'AdultAddPosVector': [0.0, 2.0, -5.0], 'AdultAddAtVector': [0.0, 2.200000047683716, 0.0]})

    }
}

void KakarikoVillage_Arrive() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Length': 0, 'IsWaitEnd': True, 'Color': 0})
        Player_Event.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event327:
        GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/KakarikoVillage/KakarikoVillage_Adult.bcett.json', 'IsTargetRetry': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Burning_Start'})

        call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Demo_CloseTimer()

        Player_Event.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_Master', 'DynamicEquipmentState': 2, 'IsActive': True})
        UISystemActor.EventTriggerSetIsNotClearMessageLog()
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kakariko_0030', 'FadeInTypeEventEnd': 2})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        GameSystemActor.EventReserveBancChange({'NextBanc': 'KakarikoVillage_Adult', 'BootEventName': 'KakarikoVillage_FlashbackScenes', 'FadePattern': 1, 'NextPosition': [-51.41733932495117, 97.158447265625, 44.20138931274414], 'NextStartRot': [0.0, 90.0, 0.0], 'IsWaitEnd': True, 'NextStartPos': '', 'EventStarterName': '', 'IsStartOnEvent': False, 'IsItemWarp': False})
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    } else {
        goto Event327
    }
}

void KakarikoVillage_FlashbackScenes() {
    Player_Event.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/KakarikoVillage/KakarikoVillage_Adult_Alternative.bcett.json', 'IsTargetRetry': False})
    UISystemActor.EventTriggerSetIsNotClearMessageLog()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kakariko_0040', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventReserveBancChange({'NextBanc': 'KakarikoVillage_Adult_Alternative', 'FadePattern': 1, 'NextPosition': [-51.41733932495117, 97.158447265625, 44.20138931274414], 'NextStartRot': [0.0, 90.0, 0.0], 'IsWaitEnd': True, 'NextStartPos': '', 'EventStarterName': '', 'IsStartOnEvent': False, 'BootEventName': 'KakarikoVillage_MelodyGet_Shadow', 'IsItemWarp': False})
    Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
}

void KakarikoVillage_MelodyGet_Shadow() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_MelodyGet_Shadow', 'FadeInTypeEventEnd': 2})

    call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck_Demo_DeleteItem()

    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_GlassTruth', 'Num': 1}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfShadow', 'IsIgnoreCompletedChallenge': False, 'StepName': 'GotGlassTruth'})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfShadow', 'StepName': 'GoToDungeon', 'IsIgnoreCompletedChallenge': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_AfterBurned_NpcStayedFrontWell', 'Index': -1, 'Value': True})
    GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})

    fork {
        Npc_Hylia_007_Adult.EventWarpToTargetPosAndRot({'YAngle': -35.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-26.0, 99.29499816894531, 37.54800033569336]})
        Npc_Hylia_007_Adult.EventAIScheduleMoveToPos({'Pos': [-29.93000030517578, 99.27999877929688, 41.11000061035156], 'Rot': 0.0, 'ASName': '', 'IsTurnToRot': False, 'IsAlignPos': False, 'DesiredGear': 0, 'ForceIsNotAlignmentWaitPosition': False, 'IsWaitEnd': False})
    } {
        Npc_Hylia_010_Adult.EventWarpToTargetPosAndRot({'YAngle': -35.0, 'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-28.0, 99.29499816894531, 39.54800033569336]})
        Npc_Hylia_010_Adult.EventAIScheduleMoveToPos({'Rot': 0.0, 'ASName': '', 'IsTurnToRot': False, 'IsAlignPos': False, 'DesiredGear': 0, 'ForceIsNotAlignmentWaitPosition': False, 'IsWaitEnd': False, 'Pos': [-30.520000457763672, 99.3499984741211, 42.31999969482422]})
    }

    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void SubFlow_CustomMoveKokiri() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event476:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event471:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event471
            } else {
                goto Event476
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'PosVector': 'ChildAddPosVector', 'AtVector': 'ChildAddAtVector', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'AtVector': 'AdultAddAtVector', 'PosVector': 'AdultAddPosVector', 'IsEnableRevertFast': False})
        }
    }

    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}

void DreamWorldBossAreaArrive_Start() {

    call DreamWorldBossAreaArrive()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 13}) {
      case 0:
        Event487:
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 16}) {
          case 0:
            goto Event487
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 19}) {
              case 0:
                goto Event487
              case 2:
                if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_BossRushBossCount', 'Value': 23}) in [0, 2] {
                    goto Event487
                }
            }
        }
    }
}

void EntryPoint_1stHyruleField() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event520:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event512:
                    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, -0.5], 'ASCommand': 'EvtWait'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event512
            } else {
                goto Event520
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'ClothWarpMode': -1})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 2.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}

void WaitingEpona_WarpIfClose() {
    if !GameSystemActor.EventQueryIsOwnedHorseInCurrentScene() {
        Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventTriggerParticipateEvent()
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Animal_Epona_Adult', 'InstanceNameB': 'Animal_Epona_Adult_Owned', 'CheckDistance': 1.5, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {
            Event87:
            Animal_Epona_Adult[Animal_Epona_Adult_Owned].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'OffsetBase': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'PositionOffset': [1.0, 0.0, 0.0]})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Animal_Epona_Adult', 'InstanceNameB': 'Animal_Epona_Adult_Owned', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'EventCamera', 'CheckDistance': 2.0}) {
            goto Event87
        }
    }
}

void EntryPoint1() {

    fork {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void SubFlow_CustomMoveCamera_NoKeepCamera() {
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                    Event537:
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                } else {
                    Event545:

                    call WaitingEpona_WarpIfClose()

                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                goto Event545
            } else {
                goto Event537
            }
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': 20.0, 'ASCommand': 'HorseWait', 'ClothWarpMode': 0})
        }
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'PosVector': 'ChildAddPosVector', 'AtVector': 'ChildAddAtVector', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'EnableCameraAlpha': True, 'AtVector': 'AdultAddAtVector', 'PosVector': 'AdultAddPosVector', 'IsEnableRevertFast': False})
        }
    }

    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}
