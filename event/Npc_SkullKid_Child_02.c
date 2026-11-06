-------- EventFlow: Npc_SkullKid_Child_02 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerPreparePlayExampleForSession', 'EventPlayExampleForSession', 'EventWaitOcarinaInputForSession', 'EventTriggerIncrementCurrentRandomScoreSoundMaxNum', 'EventWait', 'EventCloseMessageDialog', 'EventTriggerResetPlayedNoteAppliedPitch', 'EventTriggerZeldaNotesAddNPCTalkCountNeedOtherFlag']
queries: ['EventQueryIsSuccessSession', 'EventQueryIsPlayedCurrentGradeSoundNumForSession', 'EventQueryTalkChoice2', 'EventQueryRandomChoice3', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_SkullKid_Child_02[SkullKid1]
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerLookAtObject', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventNpcMusicianPlayAS', 'EventTriggerSetRecentTalkFlag', 'EventTriggerChangeEmotion', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayOcarinaFree', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerPlayerLookAtObject', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventPlayerMove', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_SkullKid_Child_03[SkullKid2]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerSetOwnAsInstrumentPlayer', 'EventNpcMusicianPlayAS', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

void PlayOcarinaForSkullKidSession() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_OnCenter'}) {

        fork {
            Player_Event.EventPlayerMove({'MoveSpeed': 0.10000000149011612, 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'WorldPos': [45.13100051879883, 95.81199645996094, 13.880000114440918], 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsContinueMoveAnimeAfterFinish': False})
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 0, 'InstanceName': '', 'WorldPos': [48.38399887084961, 97.80000305175781, 15.850000381469727], 'ActorName': '', 'IsWaitEnd': True, 'IsDoNavi': False})
        } {

            call NaviEventCommon.NaviMove_PlayerHomePos_Choice({'IsLeft': True, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsWaitEnd': True, 'PassThrough': 0.0, 'LookAtOffsetBase': 0, 'LookAtActorName': 'Npc_SkullKid_Child_02', 'LookAtTarget': 3, 'IsTurnLooking': True, 'IsLookAtObject': True, 'LookAtInstanceName': 'SkullKid1'})

        }

    }
    EventCamera.EventMoveToTargetPosCamera({'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [43.029319763183594, 96.10169982910156, 14.420149803161621], 'AtVector': [46.6904296875, 97.07160186767578, 14.762530326843262], 'MoveTime': 0, 'IsEnableRevertFast': False})

    call NaviEventCommon.NaviMove_PlayerHomePos_Choice({'IsLeft': True, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsWaitEnd': True, 'IsLookAtObject': False, 'IsTurnLooking': False, 'PassThrough': 0.0, 'LookAtOffsetBase': 0, 'LookAtTarget': 2, 'LookAtInstanceName': '', 'LookAtActorName': 'Player_Event'})

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Minigame_SkullKidSession', 'StepName': 'Playing', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_02_Talked'})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(フェード普通)'})

    fork {
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_SkullKid_Child_03[SkullKid2].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    GameSystemActor.EventTriggerZeldaNotesAddNPCTalkCountNeedOtherFlag({'OnlyUseOtherFlag': True, 'ActorName': 'Npc_SkullKid_Child_03', 'Frame': 0})
    GameSystemActor.EventTriggerZeldaNotesAddNPCTalkCountNeedOtherFlag({'OnlyUseOtherFlag': True, 'ActorName': 'Npc_SkullKid_Child_02', 'Frame': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_HasFailed', 'Value': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_02_PlayOcarinaForSkullKidSession_Event78', 'Index': -1}) {

        fork {
            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_14', 'MaintainPerformanceState': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
            Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
        }

    } else {

        fork {
            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_06', 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_02_PlayOcarinaForSkullKidSession_Event78', 'Value': True, 'Index': -1})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
            Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 0, 'InstanceName': '', 'WorldPos': [48.38399887084961, 97.80000305175781, 15.850000381469727], 'ActorName': '', 'IsDoNavi': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        call NaviEventCommon.NaviMove_PlayerHomePos_Choice({'IsLeft': True, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsWaitEnd': True, 'PassThrough': 0.0, 'LookAtOffsetBase': 0, 'LookAtActorName': 'Npc_SkullKid_Child_02', 'LookAtTarget': 3, 'IsTurnLooking': True, 'IsLookAtObject': True, 'LookAtInstanceName': 'SkullKid1'})

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call SessionStart()

}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:Near_01'})
}

void Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Spearker2InstanceName': 'SkullKid2', 'Spearker2ActorName': 'Npc_SkullKid_Child_03', 'Actor2': ActorIdentifier(name="Npc_SkullKid_Child_03", sub_name="SkullKid2")})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid_Child_02_Talked'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_02_PlayOcarinaForSkullKidSession_Event78', 'Index': -1}) {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Index': -1, 'Value': 6}) {
          case 0:

            call Mask_All()

            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_07', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_16', 'MaintainPerformanceState': 0})
            }
          case [1, 2]:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_08', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_20', 'MaintainPerformanceState': 0})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_IsGetHeartPiece'}) {
                Npc_SkullKid_Child_03[SkullKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_22', 'MaintainPerformanceState': 0})
            } else {
                Npc_SkullKid_Child_03[SkullKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_09', 'MaintainPerformanceState': 0})
            }
        }
    } else {

        call Mask_All()

        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_05', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_15', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_10', 'MaintainPerformanceState': 0})
        }
    }
}

void SessionStart() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Value': False, 'Index': -1})

    fork {
        Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_01', 'ChangeMstxtForActor': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
    } {
        GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
        Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerPreparePlayExampleForSession({'GameData': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession'})
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession'}) {
      case [0, 1, 2, 3, 4, 5, 7, 9, 10, 11, 12, 13, 15]:
        Event75:
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerEmitXLink({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': ''})
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerSetOwnAsInstrumentPlayer()
        Npc_SkullKid_Child_02[SkullKid1].EventNpcMusicianPlayAS({'ASName': 'Playing', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            GameSystemActor.EventPlayExampleForSession({'IsWaitEnd': True, 'Instruments': 1, 'IsSecondTimeForExampleAuto': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
        } {
            SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
        }

        Npc_SkullKid_Child_02[SkullKid1].EventTriggerXLinkFadeByKey({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': '', 'IsKill': False})
        Npc_SkullKid_Child_02[SkullKid1].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Event89:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Value': False, 'Index': -1})
            Event76:
            Npc_SkullKid_Child_03[SkullKid2].EventTriggerEmitXLink({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': ''})
            Npc_SkullKid_Child_03[SkullKid2].EventTriggerSetOwnAsInstrumentPlayer()
            Npc_SkullKid_Child_03[SkullKid2].EventNpcMusicianPlayAS({'ASName': 'Playing', 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            fork {
                GameSystemActor.EventPlayExampleForSession({'IsWaitEnd': True, 'Instruments': 1, 'IsSecondTimeForExampleAuto': False})
            } {
                SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
            } {
                Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'SkullKid2', 'Target': 3, 'ActorName': 'Npc_SkullKid_Child_03'})
            } {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'InstanceName': 'SkullKid2', 'ActorName': 'Npc_SkullKid_Child_03'})
            }


            fork {
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            } {
                Npc_SkullKid_Child_03[SkullKid2].EventTriggerXLinkFadeByKey({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': '', 'IsKill': False})
                Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
            }

            Event146:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': ''})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [43.029319763183594, 96.10169982910156, 14.420149803161621], 'AtVector': [46.6904296875, 97.07160186767578, 14.762530326843262], 'MoveTime': 45, 'IsEnableRevertFast': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                Player_Event.EventTriggerSetOwnAsInstrumentPlayer()
            }


            fork {
                GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
                Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': False})
            } {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'IsWaitEnd': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_17', 'MaintainPerformanceState': 0})
                  case 1:
                    SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'IsWaitEnd': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_18', 'MaintainPerformanceState': 0})
                  case 2:
                    SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'IsWaitEnd': False, 'OverrideStyle': 3, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_19', 'MaintainPerformanceState': 0})
                }
            } {
                GameSystemActor.EventWaitOcarinaInputForSession({'IsWaitEnd': True, 'Instruments': 0})
            } {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'InstanceName': '', 'ActorName': 'Player_Event'})
            }


            fork {
                Player_Event.EventTriggerXLinkFadeByKey({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': '', 'IsKill': False})
            } {
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            }

            switch GameSystemActor.EventQueryIsSuccessSession() {
              case 0:

                fork {
                    Npc_SkullKid_Child_02[SkullKid1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Success', 'IsWaitEnd': False})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                    Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Success', 'IsWaitEnd': False})
                } {
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                }

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameSystemActor.EventQueryIsPlayedCurrentGradeSoundNumForSession({'GameData': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession'}) {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                    fork {
                        Npc_SkullKid_Child_02[SkullKid1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Clear', 'IsWaitEnd': False})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                        Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Clear', 'IsWaitEnd': False})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    }

                    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
                    Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtWait'})

                    fork {
                        Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_02', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
                        Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                        Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 1})
                        Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
                    } {
                        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [48.38399887084961, 97.80000305175781, 15.850000381469727], 'ActorName': ''})
                    }

                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Value': 6, 'Index': -1}) {
                      case 0:
                        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Player_Event', 'InstanceName': ''})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Index': -1, 'Value': 6})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_MaxRallyCount', 'Value': 3})

                        call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Rupee_Blue', 'IsNpcEventStarter': False})

                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Event171:
                        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_IsGetHeartPiece'}) {
                            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_13', 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
                        }
                        Event211:

                        fork {
                            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_03', 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
                        } {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                            Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 5})
                            Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        }

                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                            Event72:
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_HasFailed', 'Value': False})

                            call SessionStart()

                        } else {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                            Event208:

                            fork {
                                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_12', 'ChoiceNumber': 0, 'ChoiceLabel1': 1, 'MaintainPerformanceState': 0})
                            } {
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                                Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
                                Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                            }

                            Event26:
                            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Minigame_SkullKidSession', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True})
                        }
                      case [1, 2]:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Value': 8, 'Index': -1}) {
                          case 0:
                            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Player_Event', 'InstanceName': ''})
                            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_MaxRallyCount', 'Value': 3})
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Index': -1, 'Value': 8})

                            call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Rupee_Red', 'IsNpcEventStarter': False})

                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                            goto Event171
                          case 1:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Player_Event', 'InstanceName': ''})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_IsGetHeartPiece'}) {

                                call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Rupee_Blue', 'IsNpcEventStarter': False})

                                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                goto Event171
                            } else {

                                call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc({'ActorName': 'Obj_Heart_Piece', 'IsNpcEventStarter': False})

                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Minigame_SkullKidSession_IsGetHeartPiece'})
                                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_11', 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'MaintainPerformanceState': 0})
                                goto Event26
                            }
                          case 2:
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                            goto Event171
                        }
                    }
                } else {
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Value': 1, 'Index': -1})
                    GameSystemActor.EventTriggerIncrementCurrentRandomScoreSoundMaxNum()
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Index': -1}) {
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Value': 6, 'Index': -1}) {
                          case 0:
                            goto Event75
                          case [1, 2]:
                            goto Event89
                        }
                    } else {

                        fork {
                            Npc_SkullKid_Child_02[SkullKid1].EventTriggerEmitXLink({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': ''})
                            Npc_SkullKid_Child_02[SkullKid1].EventTriggerSetOwnAsInstrumentPlayer()
                            Npc_SkullKid_Child_02[SkullKid1].EventNpcMusicianPlayAS({'ASName': 'Playing', 'IsWaitEnd': False})
                        } {
                            Npc_SkullKid_Child_03[SkullKid2].EventTriggerEmitXLink({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': ''})
                            Npc_SkullKid_Child_03[SkullKid2].EventTriggerSetOwnAsInstrumentPlayer()
                            Npc_SkullKid_Child_03[SkullKid2].EventNpcMusicianPlayAS({'ASName': 'Playing', 'IsWaitEnd': False})
                        }

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        Event223:

                        fork {
                            GameSystemActor.EventPlayExampleForSession({'IsWaitEnd': True, 'Instruments': 1, 'IsSecondTimeForExampleAuto': False})
                        } {
                            SystemTextNPC.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'IsOverrideStyle': True, 'IsCloseDialog': False, 'MessageId': '', 'IsWaitEnd': False, 'OverrideStyle': 3, 'MaintainPerformanceState': 0})
                        } {
                            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
                        } {
                            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                        }

                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Index': -1}) {
                            Event256:

                            fork {
                                Npc_SkullKid_Child_02[SkullKid1].EventTriggerXLinkFadeByKey({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': '', 'IsKill': False})
                                Npc_SkullKid_Child_02[SkullKid1].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
                            } {
                                Npc_SkullKid_Child_03[SkullKid2].EventTriggerXLinkFadeByKey({'ELinkKey': 'LightShaft_SessionGame', 'SLinkKey': '', 'IsKill': False})
                                Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                            }

                            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                            goto Event146
                        } else
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Value': 6, 'Index': -1}) {
                          case 0:
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Index': -1, 'Value': True})
                            goto Event223
                          case [1, 2]:
                            goto Event256
                        }
                    }
                }
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                fork {

                    fork {
                        Npc_SkullKid_Child_02[SkullKid1].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Failure', 'IsWaitEnd': False})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Failure', 'IsWaitEnd': False})
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                } {
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                }


                fork {
                    Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_04', 'MaintainPerformanceState': 0})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                    Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                    Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait'})
                } {
                    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'SkullKid1', 'Target': 3})
                }

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Minigame_SkullKidSession_HasFailed', 'Value': True})
                goto Event211
              case 2:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentRallyCount', 'Index': -1, 'Value': 1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                fork {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_21', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
                } {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 23})
                    Npc_SkullKid_Child_03[SkullKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                    Npc_SkullKid_Child_03[SkullKid2].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                } {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
                    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'SkullKid1', 'Target': 3})
                } {
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
                }

                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtTalkYes', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    goto Event208
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    goto Event72
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_SkullKidSession_PlaySkullKid', 'Index': -1, 'Value': True})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Minigame_SkullKidSession_CurrentGradeSoundNumForSession', 'Value': 6, 'Index': -1}) {
              case 0:
                goto Event76
              case [1, 2]:
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                goto Event146
            }
        }
      case 6:
        Event158:
        GameSystemActor.EventTriggerIncrementCurrentRandomScoreSoundMaxNum()
        goto Event75
      case 8:
        GameSystemActor.EventTriggerIncrementCurrentRandomScoreSoundMaxNum()
        GameSystemActor.EventTriggerIncrementCurrentRandomScoreSoundMaxNum()
        goto Event158
    }
}

void SessionInduction() {
    GameSystemActor.EventTriggerResetPlayedNoteAppliedPitch()
    Player_Event.EventPlayerPlayOcarinaFree({'IsWaitEnd': True})

    call NaviEventCommon.NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'PassThrough': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': True, 'LookAtTarget': 3, 'IsTurnLooking': True, 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtActorName': 'Npc_SkullKid_Child_02', 'LookAtInstanceName': 'SkullKid1'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'TargetFovy': 50.0, 'AtVector': [50.0078010559082, 98.59220123291016, 14.941300392150879], 'EnableCameraAlpha': True, 'PosVector': [44.61534881591797, 96.92868041992188, 13.47130012512207], 'IsEnableRevertFast': False})

    fork {
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    } {
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_SkullKid_Child_02_PlayOcarinaForSkullKidSession_Event78', 'Index': -1}) {

        fork {
            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_24', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
        }

        Event345:
        Npc_SkullKid_Child_02[SkullKid1].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': False, 'MelodyType': 0})

        if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 4, 6, 7, 8, 9, 10, 11, 12] {
            switch Npc_SkullKid_Child_02[SkullKid1].EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_SkullKid_Child_02[SkullKid1].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_00', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case 1:
                Npc_SkullKid_Child_02[SkullKid1].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_01', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case 2:
                Npc_SkullKid_Child_02[SkullKid1].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SkullKid_Child:OcarinaMelodyZeldaLullaby_02', 'DisplayFrame': 180, 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid_Child_02_Talked'}) {
        if !Npc_SkullKid_Child_02[SkullKid1].EventQueryIsOnRecentTalkFlag() {
            Event270:

            fork {
                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_23', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
            } {
                Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
            } {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
            }

            goto Event345
        } else
        if !Npc_SkullKid_Child_03[SkullKid2].EventQueryIsOnRecentTalkFlag() {
            goto Event270
        } else {

            fork {
                Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_25', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
            } {
                Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
            } {
                Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
            }

        }
        goto Event345
    } else {

        fork {
            Npc_SkullKid_Child_02[SkullKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Talk_26', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_SkullKid_Child_02', 'InstanceName': 'SkullKid1', 'Target': 3})
        }

        goto Event345
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SkullKid02_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SkullKid02_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {

        call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_01', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_09', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_03', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_SkullKid_Child_02:Mask_103'})

    }
}
