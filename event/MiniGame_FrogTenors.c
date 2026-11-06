-------- EventFlow: MiniGame_FrogTenors --------

Actor: Animal_Frog_Gray
entrypoint: None()
actions: ['EventJumpAccordingToOcarina', 'EventJumpAccordingToOcarinaWithButterfly', 'ExecuteFrogAppear', 'ExecuteFrogDisappear', 'EventEmitButterflyDisappearingEffect', 'ExecuteFrogSwell', 'EventPlayAS', 'EventDoNothing', 'EventFrogSetXLinkPropertyIsRiseWaterLevel']
queries: []
params: {'IsBindNearestActor': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'IsGrounding': False, 'Position': [10.446999549865723, 101.98100280761719, -54.51300048828125], 'Rotation': [0.0, -20.0, 0.0], 'EventMemberCreateMethod': 3}

Actor: Animal_Frog_Yellow
entrypoint: None()
actions: ['EventJumpAccordingToOcarina', 'EventJumpAccordingToOcarinaWithButterfly', 'ExecuteFrogAppear', 'ExecuteFrogDisappear', 'EventEmitButterflyDisappearingEffect', 'ExecuteFrogSwell', 'EventPlayAS', 'EventDoNothing', 'EventFrogSetXLinkPropertyIsRiseWaterLevel']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'Position': [11.727999687194824, 102.46399688720703, -55.91999816894531], 'Rotation': [0.0, -20.0, 0.0], 'EventMemberCreateMethod': 3}

Actor: Animal_Frog_Red
entrypoint: None()
actions: ['EventJumpAccordingToOcarina', 'EventJumpAccordingToOcarinaWithButterfly', 'ExecuteFrogAppear', 'ExecuteFrogDisappear', 'EventEmitButterflyDisappearingEffect', 'ExecuteFrogSwell', 'EventPlayAS', 'EventDoNothing', 'EventFrogSetXLinkPropertyIsRiseWaterLevel']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'Rotation': [0.0, -30.0, 0.0], 'Position': [11.5, 101.79000091552734, -53.79999923706055], 'EventMemberCreateMethod': 3}

Actor: Animal_Frog_LightBlue
entrypoint: None()
actions: ['EventJumpAccordingToOcarina', 'EventJumpAccordingToOcarinaWithButterfly', 'ExecuteFrogAppear', 'ExecuteFrogDisappear', 'EventEmitButterflyDisappearingEffect', 'ExecuteFrogSwell', 'EventPlayAS', 'EventDoNothing', 'EventFrogSetXLinkPropertyIsRiseWaterLevel']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'Position': [9.324999809265137, 102.56999969482422, -55.99399948120117], 'Rotation': [0.0, -5.0, 0.0], 'EventMemberCreateMethod': 3}

Actor: Animal_Frog_Blue
entrypoint: None()
actions: ['EventJumpAccordingToOcarina', 'EventJumpAccordingToOcarinaWithButterfly', 'EventTriggerParticipateEvent', 'EventTalk', 'EventPlayAS', 'EventEmitButterflyDisappearingEffect', 'ExecuteFrogSwell', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag', 'EventDoNothing', 'EventFrogSetXLinkPropertyIsRiseWaterLevel']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitOcarinaInputForNormal', 'EventWaitOcarinaInputForFrog', 'EventTriggerPrepareScoreForFrog', 'EventTriggerStopPlay', 'EventWait', 'EventTriggerFadeOcarinaMelodyHandle', 'EventTriggerResetPlayedNoteAppliedPitch']
queries: ['EventQueryMelodyTypeForNormal', 'EventQueryIsSuccessFrog', 'EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayOcarinaFree', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerSetOwnAsInstrumentPlayer']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch', 'EventQueryIsGameDataInt', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventShowReadyGo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [10.5, 100.5, -54.5]}

void PlayOcarinaForFrogMiniGame_Melody() {
    Animal_Frog_Blue.EventTriggerParticipateEvent()

    call FrogTenors_NaviReaction_Reset()

    if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'ActorName': 'Animal_Frog_Blue', 'AngleThreshold': 30.0}) {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': '', 'UpperASCommand': '', 'ActorName': 'Animal_Frog_Blue', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    }
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    Animal_Frog_Blue.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_EponaSong'}) {
            Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Gray.ExecuteFrogAppear({'IsWaitEnd': True, 'DirectionalAngle': 0.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SariaSong'}) {
            Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Yellow.ExecuteFrogAppear({'IsWaitEnd': True, 'DirectionalAngle': 30.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SunSong'}) {
            Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Red.ExecuteFrogAppear({'IsWaitEnd': True, 'DirectionalAngle': 10.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_TimeSong'}) {
            Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_LightBlue.ExecuteFrogAppear({'IsWaitEnd': True, 'DirectionalAngle': -40.0})
        }
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 1, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.4399999976158142, 1.3300000429153442, -1.440000057220459], 'AtVector': [-1.0299999713897705, 0.6600000262260437, 1.340000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_FrogTenors_Playing', 'Index': -1, 'Value': True})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [1.2000000476837158, -0.2750000059604645, 0.4300000071525574], 'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [8.930000305175781, 101.88999938964844, -51.150001525878906], 'YAngle': 180.0, 'UseDemoWait': False, 'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'ClothWarpMode': 0, 'EnableInAir': False})
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_FrogTenors', 'StepName': 'Playing'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SongClear'}) {

        call FrogMiniGame_Insectrepellent()

    } else {
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_22', 'MaintainPerformanceState': 0})
        Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

        fork {
            GameSystemActor.EventWaitOcarinaInputForNormal({'IsWaitEnd': True, 'HasRecommendedMelody': False, 'MelodyType': 0})
        } {
            GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
            Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
        } {
            Animal_Frog_Blue.EventJumpAccordingToOcarina({'IsWaitEnd': True})
        } {
            Animal_Frog_Gray.EventJumpAccordingToOcarina({'IsWaitEnd': True})
        } {
            Animal_Frog_Yellow.EventJumpAccordingToOcarina({'IsWaitEnd': True})
        } {
            Animal_Frog_LightBlue.EventJumpAccordingToOcarina({'IsWaitEnd': True})
        } {
            Animal_Frog_Red.EventJumpAccordingToOcarina({'IsWaitEnd': True})
        }

        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case [0, 1, 2, 3, 4, 5, 12]:

            call Dm_SY_Ocarina.PlayAuto()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            Event332:
            switch GameSystemActor.EventQueryMelodyTypeForNormal() {
              case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
                Event10:

                call Dm_SY_Ocarina.RequestCreateConditionSensor({'IsNotNeedSensor': False})

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                  case 0:
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_ZeldaLullaby'}) {
                        Animal_Frog_Blue.ExecuteFrogSwell({'IsWaitEnd': True})
                    }
                    Animal_Frog_Blue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_00', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})

                    call TeachNewMusic({'GameDataName': 'MiniGame_FrogTenors_ZeldaLullaby'})

                  case 1:
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_EponaSong'}) {
                        Animal_Frog_Gray.ExecuteFrogSwell({'IsWaitEnd': True})
                    }
                    Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_26', 'MaintainPerformanceState': 0})

                    call TeachNewMusic({'GameDataName': 'MiniGame_FrogTenors_EponaSong'})

                  case 2:
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SariaSong'}) {
                        Animal_Frog_Yellow.ExecuteFrogSwell({'IsWaitEnd': True})
                    }
                    Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_25', 'MaintainPerformanceState': 0})

                    call TeachNewMusic({'GameDataName': 'MiniGame_FrogTenors_SariaSong'})

                  case 3:
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SunSong'}) {
                        Animal_Frog_Red.ExecuteFrogSwell({'IsWaitEnd': True})
                    }
                    Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_27', 'MaintainPerformanceState': 0})

                    call TeachNewMusic({'GameDataName': 'MiniGame_FrogTenors_SunSong'})

                  case 4:
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_TimeSong'}) {
                        Animal_Frog_LightBlue.ExecuteFrogSwell({'IsWaitEnd': True})
                    }
                    Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_28', 'MaintainPerformanceState': 0})

                    call TeachNewMusic({'GameDataName': 'MiniGame_FrogTenors_TimeSong'})

                  case 5:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_StormSong'}) {
                        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_34', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
                        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_07', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
                        Event95:

                        call FrogMiniGame_FrogLeave()

                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveTime': 60, 'PosVector': [12.579999923706055, 106.2699966430664, -43.459999084472656], 'AtVector': [11.619999885559082, 104.26000213623047, -48.2599983215332], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        } {
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_FrogTenors_StormSong'})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                        } {
                            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_01', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
                        } {
                            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'MiniGame_FrogTenors'})
                        }


                        fork {
                            Animal_Frog_Blue.EventFrogSetXLinkPropertyIsRiseWaterLevel({'IsWaitEnd': True})
                        } {
                            Animal_Frog_Gray.EventFrogSetXLinkPropertyIsRiseWaterLevel({'IsWaitEnd': True})
                        } {
                            Animal_Frog_Yellow.EventFrogSetXLinkPropertyIsRiseWaterLevel({'IsWaitEnd': True})
                        } {
                            Animal_Frog_Red.EventFrogSetXLinkPropertyIsRiseWaterLevel({'IsWaitEnd': True})
                        } {
                            Animal_Frog_LightBlue.EventFrogSetXLinkPropertyIsRiseWaterLevel({'IsWaitEnd': True})
                        }

                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 1, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.4399999976158142, 1.3300000429153442, -1.440000057220459], 'AtVector': [-1.0299999713897705, 0.6600000262260437, 1.340000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_30', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})

                        call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Heart_Piece', 'IsNpcEventStarter': False})

                        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'offset': [0.699999988079071, -0.2750000059604645, -0.4300000071525574], 'IsUseAfterPlayerTurn': True})
                        Event163:

                        call FlogMinigame_Check()

                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SongClear'}) {

                            fork {
                                Animal_Frog_Blue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            } {
                                Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            } {
                                Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            } {
                                Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            } {
                                Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            }

                            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                            call FrogMiniGame_Insectrepellent()

                        } else
                        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                          case 0:
                            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_17_2'})
                            Event86:
                            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_OneSongClear'}) {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_FrogTenors_OneSongClear'})
                            }
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_FrogTenors_AfterSongClear'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_Navi_NewSong', 'Value': True})

                            call FrogMiniGame_FrogLeave()

                          case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_17', 'MaintainPerformanceState': 0})
                            goto Event86
                        }
                    }
                  case [6, 7, 8, 9, 10, 11, 12]:
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_05', 'MaintainPerformanceState': 0})

                    call FrogMiniGame_FrogLeave()

                    GameSystemActor.EventTriggerFadeOcarinaMelodyHandle()
                }
              case 5:

                call Frogs_dance()

                goto Event10
            }
          case [6, 7, 8, 9, 10, 11]:

            fork {
                Animal_Frog_Blue.EventDoNothing({'IsWaitEnd': True})
            } {
                Animal_Frog_Gray.EventDoNothing({'IsWaitEnd': True})
            } {
                Animal_Frog_Yellow.EventDoNothing({'IsWaitEnd': True})
            } {
                Animal_Frog_LightBlue.EventDoNothing({'IsWaitEnd': True})
            } {
                Animal_Frog_Red.EventDoNothing({'IsWaitEnd': True})
            }


            call Dm_SY_Ocarina.PlayAuto()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
            goto Event332
          case 13:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_16', 'MaintainPerformanceState': 0})

            call FrogMiniGame_FrogLeave()

        }
    }
}

void FlogMinigame_Check() {
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_ZeldaLullaby', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_SariaSong', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_EponaSong', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_TimeSong', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_SunSong', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FrogTenors_StormSong', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SongClear'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void FrogMiniGame_FrogLeave() {

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_EponaSong'}) {
            Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Gray.ExecuteFrogDisappear({'IsWaitEnd': True, 'DirectionalAngle': 10.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SariaSong'}) {
            Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Yellow.ExecuteFrogDisappear({'IsWaitEnd': True, 'DirectionalAngle': 35.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SunSong'}) {
            Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_Red.ExecuteFrogDisappear({'IsWaitEnd': True, 'DirectionalAngle': -20.0})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_TimeSong'}) {
            Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        } else {
            Animal_Frog_LightBlue.ExecuteFrogDisappear({'IsWaitEnd': True, 'DirectionalAngle': 30.0})
        }
    } {
        Animal_Frog_Blue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    }

    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_FrogTenors', 'ChallengeStep': 'Ready', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_FrogTenors_Playing', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Animal_Frog_Blue', 'Index': -1, 'Value': True})
}

void FrogMiniGame_Insectrepellent() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Explanation'}) {
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_23', 'MaintainPerformanceState': 0})
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_24', 'MaintainPerformanceState': 0})
            Event97:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_09', 'MaintainPerformanceState': 0})
                SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
                ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 14})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent'}) {

                    call MushiToriGame({'ActorName': 'Obj_Rupee_Blue', 'IsRetry': False})

                } else {

                    call MushiToriGame({'ActorName': 'Obj_Heart_Piece', 'IsRetry': False})

                }
              case 1:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber', 'Value': 0, 'Index': -1}) {
                  case [0, 1]:
                    Event94:
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_19', 'MaintainPerformanceState': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_18', 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MaintainPerformanceState': 0})
                    goto Event97
                  case 2:
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_31', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_18', 'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MaintainPerformanceState': 0})
                    goto Event97
                }
              case 2:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_10', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Explanation'})

                call FrogMiniGame_FrogLeave()

            }
        } else {
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_23', 'MaintainPerformanceState': 0})
            goto Event94
        }
      case 2:
        if !Animal_Frog_Blue.EventQueryIsOnRecentTalkFlag() {
            Event41:
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber'}) {
              case [0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_42'})
                goto Event97
              case 1:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_29', 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
                goto Event97
              case 2:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_39'})
                goto Event97
              case 3:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_41'})
                goto Event97
            }
        } else {
            Animal_Frog_Blue.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber', 'Index': -1, 'Value': 3}) {
              case [0, 1]:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_04', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                goto Event41
              case 2:
                Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_40'})
                goto Event41
            }
        }
    }
}

void FrogTenors_NaviReaction_Reset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_Navi_NewSong', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_FrogTenors_Navi_Failed'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_FrogTenors_Navi_Success'})
}

void MushiToriGame() {
    if GameDataActor.EventQueryIsBool({'BoolValue': 'IsRetry'}) {

        call LevelSetting()

    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Player_Event.EventTriggerSetOwnAsInstrumentPlayer()

    fork {
        GameSystemActor.EventWaitOcarinaInputForFrog({'IsWaitEnd': True})
    } {
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})
    } {
        Animal_Frog_Blue.EventJumpAccordingToOcarinaWithButterfly({'IsWaitEnd': True, 'Pos': [0.0, 0.6000000238418579, 0.0]})
    } {
        Animal_Frog_Gray.EventJumpAccordingToOcarinaWithButterfly({'IsWaitEnd': True, 'Pos': [0.0, 0.6000000238418579, 0.0]})
    } {
        Animal_Frog_Yellow.EventJumpAccordingToOcarinaWithButterfly({'IsWaitEnd': True, 'Pos': [0.0, 0.6000000238418579, 0.0]})
    } {
        Animal_Frog_LightBlue.EventJumpAccordingToOcarinaWithButterfly({'IsWaitEnd': True, 'Pos': [0.0, 0.6000000238418579, 0.0]})
    } {
        Animal_Frog_Red.EventJumpAccordingToOcarinaWithButterfly({'IsWaitEnd': True, 'Pos': [0.0, 0.6000000238418579, 0.0]})
    }

    switch GameSystemActor.EventQueryIsSuccessFrog() {
      case 0:
        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 0, 'MiniGameType': 14})
        GameSystemActor.EventTriggerStopPlay()

        call Frogs_dance()

        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber'}) {
          case 0:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_03', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
            Event382:

            call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'IsNpcEventStarter': False, 'ActorName': 'ActorName'})

            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'offset': [0.699999988079071, -0.2750000059604645, -0.4300000071525574], 'IsUseAfterPlayerTurn': True})
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_20', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent', 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_Navi_Success', 'Value': True})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber', 'Index': -1})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 4, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber', 'Index': -1}) {
              case 0:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_ClearAfter'})
                Event158:

                call FrogMiniGame_FrogLeave()

              case [1, 2]:
                goto Event158
            }
          case 1:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_43'})
            goto Event382
          case 2:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_44'})
            goto Event382
          case 3:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_45'})
            goto Event382
          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_46'})
            goto Event382
        }
      case 1:

        call Failed()

        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_33', 'MaintainPerformanceState': 0})
        Event81:

        call FrogMiniGame_RetryFlow()

      case 2:

        call Failed()

        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_32', 'MaintainPerformanceState': 0})
        goto Event81
      case 3:

        call Failed()

        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_10', 'MaintainPerformanceState': 0})

        call FrogMiniGame_FrogLeave()

    }
}

void TeachNewMusic() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 0:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_07', 'MaintainPerformanceState': 0, 'ASName': 'Swing'})
            goto Event95
          case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_07', 'MaintainPerformanceState': 0})
            goto Event95
        }
    } else
    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 0:
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'ASName': 'Swing', 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_06'})
        Event380:
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_FrogTenors_GetCount'}) {
          case 0:

            call GetRupy_FrogsTenors({'GetRupee': 5})

            Event379:
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_FrogTenors_GetCount', 'Value': 1, 'Index': -1})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'offset': [0.699999988079071, -0.2750000059604645, -0.4300000071525574], 'IsUseAfterPlayerTurn': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
            goto Event163
          case 1:

            call GetRupy_FrogsTenors({'GetRupee': 10})

            goto Event379
          case 2:

            call GetRupy_FrogsTenors({'GetRupee': 15})

            goto Event379
          case 3:

            call GetRupy_FrogsTenors({'GetRupee': 20})

            goto Event379
          case 4:

            call GetRupy_FrogsTenors({'GetRupee': 30})

            goto Event379
        }
      case [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_06', 'MaintainPerformanceState': 0})
        goto Event380
    }
}

void FrogMiniGame_RetryFlow() {
    Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_08', 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call FrogTenors_NaviReaction_Reset()

        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_21', 'MaintainPerformanceState': 0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
        ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 14})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent'}) {

            call MushiToriGame({'ActorName': 'Obj_Rupee_Blue', 'IsRetry': True})

        } else {

            call MushiToriGame({'ActorName': 'Obj_Heart_Piece', 'IsRetry': True})

        }
    } else {
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_10', 'MaintainPerformanceState': 0})

        call FrogMiniGame_FrogLeave()

    }
}

void Playing_Animal_Frog_Blue_Talk() {
    Animal_Frog_Blue.EventTriggerParticipateEvent()
}

void Frogs_dance() {

    fork {
        Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
    } {
        Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
    } {
        Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
    } {
        Animal_Frog_Blue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
    } {
        Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Swing'})
    }

}

void OcarinaInduction() {
    Animal_Frog_Blue.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})

    call NaviEventCommon.NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'PassThrough': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': True, 'LookAtTarget': 3, 'IsTurnLooking': True, 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtInstanceName': '', 'LookAtActorName': 'Animal_Frog_Blue'})


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'TargetFovy': 50.0, 'PosVector': [9.212599754333496, 102.56710052490234, -50.74290084838867], 'AtVector': [9.182100296020508, 102.08409881591797, -54.45209884643555], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Animal_Frog_Blue.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    } {
        Animal_Frog_Blue.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 0, 'ActorName': '', 'InstanceName': ''})
    }


    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_EponaSong'}) {
            Animal_Frog_Gray.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SariaSong'}) {
            Animal_Frog_Yellow.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_SunSong'}) {
            Animal_Frog_Red.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_TimeSong'}) {
            Animal_Frog_LightBlue.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
        }
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Animal_Frog_Blue'}) {
        if !Animal_Frog_Blue.EventQueryIsOnRecentTalkFlag() {
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_36', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        } else {
            Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_37', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        }
        Event31:

        fork {
            Animal_Frog_Blue.EventNPCTurnToTarget({'FaceControlType': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TurnToTarget', 'Target': 5, 'IsWaitEnd': False})
        } {

            call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 0})

        }

    } else {
        Animal_Frog_Blue.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 4, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_FrogTenors:Talk_38', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        goto Event31
    }
}

void GetRupy_FrogsTenors() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtGet', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'GetRupee'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}

void LevelSetting() {
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_Clearnumber'}) {
      case 0:
        GameSystemActor.EventTriggerPrepareScoreForFrog({'Num': 14, 'IsRandom': False, 'PlayableSeconds': 1.0, 'FirstPlayableSeconds': 2.0})
      case 1:
        GameSystemActor.EventTriggerPrepareScoreForFrog({'IsRandom': True, 'Num': 14, 'PlayableSeconds': 0.8999999761581421, 'FirstPlayableSeconds': 1.7999999523162842})
      case 2:
        GameSystemActor.EventTriggerPrepareScoreForFrog({'IsRandom': True, 'Num': 14, 'FirstPlayableSeconds': 1.399999976158142, 'PlayableSeconds': 0.699999988079071})
      case 3:
        GameSystemActor.EventTriggerPrepareScoreForFrog({'IsRandom': True, 'Num': 18, 'FirstPlayableSeconds': 1.399999976158142, 'PlayableSeconds': 0.699999988079071})
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerPrepareScoreForFrog({'IsRandom': True, 'Num': 18, 'PlayableSeconds': 0.699999988079071, 'FirstPlayableSeconds': 1.399999976158142})
    }
}

void Failed() {

    fork {
        Animal_Frog_Blue.EventEmitButterflyDisappearingEffect({'IsWaitEnd': True, 'MiniGameFailureReason': 0})
    } {
        Animal_Frog_Gray.EventEmitButterflyDisappearingEffect({'IsWaitEnd': True, 'MiniGameFailureReason': 0})
    } {
        Animal_Frog_Yellow.EventEmitButterflyDisappearingEffect({'IsWaitEnd': True, 'MiniGameFailureReason': 0})
    } {
        Animal_Frog_LightBlue.EventEmitButterflyDisappearingEffect({'IsWaitEnd': True, 'MiniGameFailureReason': 0})
    } {
        Animal_Frog_Red.EventEmitButterflyDisappearingEffect({'IsWaitEnd': True, 'MiniGameFailureReason': 0})
    } {
        UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 14})
    }

    GameSystemActor.EventTriggerStopPlay()
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_InsectRepellent_ClearAfter', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FrogTenors_Navi_Failed', 'Value': True})
}
