-------- EventFlow: MiniGame_Fishing --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerForceSetMaskTalkFlag', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSelectSchedule']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerSetItemForMiniGame', 'EventPlayerFishingCatch', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerResetItemBeforeMiniGame', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerFishingKeep', 'EventPlayerFishingRelease', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerLookAtObject', 'EventDoNothing']
queries: ['EventQueryPlayerIsEquipSinkLure', 'EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_Fishman_001_Child
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventBustShotCamera', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventOpenPlayerStatusMiniGame', 'EventClosePlayerStatusMiniGame', 'EventShowMiniGameScoreNum', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerSetVisibleForMiniGameOnEvent', 'EventTriggerRequestFlushForFishMiniGameScore']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerOpenRupeeDisplay', 'EventTriggerCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Fishman_001_Adult
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviRequestBallonMessage', 'EventTriggerSetModelAlpha']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_LakeHrl_Door_B_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventTalkWithInstanceNameLabel']
queries: ['EventQueryIsActorInFront']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Item_Scale_Gold
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Obj_Heart_Piece
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Hylia_Fishman_001_Adult[CatchFish_Sub(Fishman)]
entrypoint: CatchFish_Sub(Fishman)
actions: ['EventTriggerSetModelLodManual', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)]
entrypoint: SetFishSize(Fishman)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Hylia_Fishman_001_Child[Keep(Fishman)]
entrypoint: Keep(Fishman)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Hylia_Fishman_001_Child[Release(Fishman)]
entrypoint: Release(Fishman)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

void Ready_Adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_Adult_IsFirstTalked', 'Index': -1}) {
        Event754:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_Fishing_FishmanMelancholy_IsFirstTalked'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Fishing:Near_00'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IgnoreBalloonRequest'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IgnoreBalloonRequest', 'Value': False})
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Fishing:Near_02'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Fishing:Near_01'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {

        call Ready_Child_Near()

    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/MiniGame_Fishing:Near_06'})
    }
}

void Ready_Adult_Talk() {
    Obj_LakeHrl_Door_B_01.EventTriggerParticipateEvent()
    Obj_LakeHrl_Door_B_01.EventDoorClose({'IsWaitEnd': True})

    call SinkLureHintOn()

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_MeetAgain'}) {

            call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_Adult_IsFirstTalked'})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'})
            && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedBeforeClearWaterTemple'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_Fishing_FishmanMelancholy'}) {

                    call Melancholy_IsFirstTalk()

                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_213', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    Event264:
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_188', 'MaintainPerformanceState': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fishing_TalkedBeforeClearWaterTemple'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Temporarily_AIScheduleReset', 'Index': -1, 'Value': True})
                    Event13:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call Ready_PlayFishing()

                      case 1:

                        call Ready_Explanation()

                      case 2:

                        call Ready_CancelFishing()

                    }
                } else {
                    goto Event264
                }
            } else {

                call MiniGame_Fishing_Common_Talk()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_Adult_IsFirstTalked'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Temporarily_AIScheduleReset', 'Index': -1, 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_Fishing_FishmanMelancholy'}) {

                call MiniGame_Fishing_Sub.InitTalk_Fishing_Adult_IsFirstTalkOnly({'Arg_Greeting': 4, 'Arg_Turn': 0})


                call Melancholy_IsFirstTalk()

                Event227:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_301'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_MeetAgain'})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_01_2'})
                goto Event13
            } else {

                call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                goto Event227
            }
        } else {

            call MiniGame_Fishing_Sub.InitTalk_Fishing_Adult_IsFirstTalkOnly({'Arg_Greeting': 4, 'Arg_Turn': 0})


            call Adult_IsFirstTalk()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_24', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_MeetAgain'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedBeforeClearWaterTemple'})
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_51', 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 1, 'ChoiceLabel2': 5, 'MaintainPerformanceState': 0})
            goto Event13
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {

        call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_MeetAgain'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_Adult_IsFirstTalked'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Temporarily_AIScheduleReset', 'Index': -1, 'Value': True})

        call Player_MaskCheck()

        Event240:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_129_2'})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_49_2'})
        goto Event13
    } else {

        call MiniGame_Fishing_Sub.InitTalk_Fishing_Adult_IsFirstTalkOnly({'Arg_Greeting': 4, 'Arg_Turn': 0})

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_MeetAgain'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedBeforeClearWaterTemple'})

        call Adult_IsFirstTalk()

        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_216'})
            goto Event240
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_217'})
            goto Event240
        }
    }
}

void Ready_Child_Near() {
    goto Event754
}

void Ready_Child_Talk() {
    Obj_LakeHrl_Door_B_01.EventTriggerParticipateEvent()
    Obj_LakeHrl_Door_B_01.EventDoorClose({'IsWaitEnd': True})

    call SinkLureHintOn()


    call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HaveTalkedChild'}) {

        call MiniGame_Fishing_Common_Talk()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_HaveTalkedChild'})

        call Player_MaskCheck()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_129', 'MaintainPerformanceState': 0})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_49', 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
        goto Event13
    }
}

void Step01_Adult_Talk() {
    Event885:

    call HideItem()


    call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsActiveTutorial'}) {

        call Talk_DuringTutorial()

    } else {

        call Talk_DuringFishing()

    }
}

void Step01_Child_Talk() {
    goto Event885
}

void Step01_CatchFish_Child() {

    call CatchFish_Sub({'Fishman_ActorName': 'Npc_Hylia_Fishman_001_Child', 'Fishman_InstanceName': '', 'Fishman': ActorIdentifier(name="Npc_Hylia_Fishman_001_Child")})

}

void Fishing_ShowUI() {
    ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'MiniGameType': 13, 'IsWaitEnd': True})
}

void Fishing_HideUI() {
    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void CheckAquarium() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'camPos_forAquarium', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'atPos_forAquarium', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
    }

    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OnceUpdateRecord'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Child'}) {
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_SinkingLure_Child', 'OverrideStyle': 2, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
            } else {
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_Child', 'IsOverrideStyle': True, 'OverrideStyle': 2, 'MaintainPerformanceState': 0})
            }
            Event136:
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'standPos_forAquarium', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        } else {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_Fishman_Child', 'IsOverrideStyle': True, 'OverrideStyle': 2, 'MaintainPerformanceState': 0})
            goto Event136
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OnceUpdateRecord_Adult'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Adult'}) {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_SinkingLure_Adult', 'IsOverrideStyle': True, 'OverrideStyle': 2, 'MaintainPerformanceState': 0})
        } else {
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_Adult', 'IsOverrideStyle': True, 'OverrideStyle': 2, 'MaintainPerformanceState': 0})
        }
        goto Event136
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Aquarium_Fishman_Adult', 'OverrideStyle': 2, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
        goto Event136
    }
}

void Ready_PlayFishing() {

    call NpcCommon.Npc_IsConfront_WithLinkAS_ForReceive({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

    switchcall PaymentCheck() {
      case 0xd59ff357:
        if !Player_Event.EventQueryPlayerIsChild() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OncePlayed_Child'}) {
                Event79:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_47', 'MaintainPerformanceState': 0})
                if !Player_Event.EventQueryPlayerIsChild() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetHeartPiece'}) {
                        Event651:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_152', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_153', 'MaintainPerformanceState': 0})
                    }
                    Event654:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_155', 'MaintainPerformanceState': 0})
                    Event16:
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_Fishing', 'StepName': 'Step01', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    Npc_EventStarter.EventTriggerAIScheduleSelectSchedule()
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

                    call CheckPlayCount()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GoOutPondAndIn', 'Value': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedNaviBalloonMessage.type497', 'Value': True})
                    }
                    if !Player_Event.EventQueryPlayerIsChild() {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_OncePlayed_Child'})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_OncePlayed'})
                    }

                    call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 59})


                    call Fishing_ShowUI()

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
                    goto Event651
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_154', 'MaintainPerformanceState': 0})
                }
                goto Event654
            } else {
                Event402:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_90', 'ChoiceLabel1': 50, 'ChoiceLabel2': 51, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})

                    call MiniGame_Fishing_Sub.Tutorial_Start()

                    goto Event16
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_92', 'MaintainPerformanceState': 0})
                    goto Event79
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OncePlayed_Child'}) {
            goto Event79
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OncePlayed'}) {
            goto Event79
        } else {
            goto Event402
        }
    }
}

void Step01_IdleTalk() {

    call Idle()


    call Talk_DuringFishing_Choice4()

}

void Ready_CancelFishing() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    UISystemActor.EventTriggerCloseRupeeDisplay()
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_03', 'MaintainPerformanceState': 0})
        Event220:

        call ResetTalkedFlag()

        Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_IgnoreBalloonRequest'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_05', 'MaintainPerformanceState': 0})
        goto Event220
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_06', 'MaintainPerformanceState': 0})
        goto Event220
    }
}

void Step01_CatchFish_Adult() {

    call CatchFish_Sub({'Fishman': ActorIdentifier(name="Npc_Hylia_Fishman_001_Adult"), 'Fishman_ActorName': 'Npc_Hylia_Fishman_001_Adult', 'Fishman_InstanceName': ''})

}

void CatchFish_Sub() {
    ChallengeSystemActor.EventTriggerSetVisibleForMiniGameOnEvent()
    Npc_Hylia_Fishman_001_Adult[CatchFish_Sub(Fishman)].EventTriggerSetModelLodManual({'LodLevel': 0})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerFishingCatch({'IsWaitEnd': True})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_HeartGet', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'IsConsiderWater': True, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [0.11999999731779099, 0.800000011920929, 1.2999999523162842], 'Vector2': [0.11999999731779099, 0.7699999809265137, 0.5], 'VectorSetType2': 3, 'VectorSetType1': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-0.11999999731779099, 1.0199999809265137, 1.2999999523162842], 'AtVector': [-0.11999999731779099, 0.8899999856948853, 0.5], 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [-0.11999999731779099, 0.7699999809265137, 0.5], 'EnableCameraAlpha': True, 'PosVector': [-0.11999999731779099, 0.800000011920929, 1.2999999523162842], 'IsEnableRevertFast': False})
                }
            } {

                call Sub_InitTalkNavi_Catchfish_Child()

            }

        } else {

            fork {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'IsConsiderWater': True, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'VectorSetType1': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'Vector1': [0.15000000596046448, 1.1399999856948853, 1.7000000476837158], 'Vector2': [0.15000000596046448, 1.1399999856948853, 0.5], 'IsEnableCameraBodyCheck': True}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-0.15000000596046448, 1.590000033378601, 1.7000000476837158], 'AtVector': [-0.15000000596046448, 1.3700000047683716, 0.5], 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.15000000596046448, 1.1399999856948853, 1.7000000476837158], 'AtVector': [-0.15000000596046448, 1.1399999856948853, 0.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                }
            } {

                call Sub_InitTalkNavi_Catchfish_Adult()

            }

        }
    } {
        Npc_Hylia_Fishman_001_Adult[CatchFish_Sub(Fishman)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': '', 'InstanceName': ''})
    }


    call SetFishSize({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})


    call NaviChat.NaviEmotionChange_Return()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_OnceCatchFish', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_ShowFishingTipsChoice'})
}

void SetFishSize() {
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsActiveTutorial'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_Fishing_Tutorial_IsCaughtFishTalk'}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_120_2', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_120_3', 'MaintainPerformanceState': 0})
            }
            Event527:
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_121', 'ChoiceLabel1': 24, 'ChoiceLabel2': 25, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_TutorialInterrupted'})
            Event97:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event66:
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_Fishing_CatchFishSize', 'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'Operator': 2}) {
                    Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_29', 'ChoiceNumber': 2, 'ChoiceLabel1': 23, 'ChoiceLabel2': 30, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Keep({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                    } else {

                        call Release({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                    }
                } else {

                    call Keep({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                }
            } else
            Event104:
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_Fishing_CatchFishSize', 'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'Operator': 4}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_KeepFish', 'Index': -1}) {
                    Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 30, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_53', 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Keep({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                    } else {

                        call Release({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                    }
                } else
                if !Player_Event.EventQueryPlayerIsChild() {
                    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_Fishing_CatchFishSize', 'Operator': 4, 'GameDataA': 'MiniGame_Fishing_RecordFishSize_Child'}) {
                        Event192:
                        Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 30, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_59', 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call Keep({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                        } else {

                            call Release({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                        }
                    } else {
                        Event215:

                        call Release({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

                    }
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'MiniGame_Fishing_CatchFishSize', 'Operator': 4, 'GameDataA': 'MiniGame_Fishing_RecordFishSize_Adult'}) {
                    goto Event192
                } else {
                    goto Event215
                }
            } else {

                call Release({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Minigame_Fishing_Tutorial_IsCaughtFishTalk'})
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_120', 'MaintainPerformanceState': 0})
            goto Event527
        }
    } else {
        switchcall FishSizeCheck() {
          case fnv1a("0"):
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_11', 'ChoiceNumber': 2, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            goto Event97
          case fnv1a("1"):
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_175', 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event66
            } else
            goto Event104
          case fnv1a("2"):
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_22', 'ChoiceNumber': 2, 'ChoiceLabel1': 40, 'ChoiceLabel2': 41, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event66
            } else
            goto Event104
          case fnv1a("3"):
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 21, 'ChoiceLabel2': 31, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_35', 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event66
            } else
            goto Event104
          case fnv1a("4"):
            Npc_Hylia_Fishman_001_Child[SetFishSize(Fishman)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 32, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_151', 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event66
            } else
            goto Event104
        }
    }
}

void SetKeepFishInfo() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_Fishing_CatchFishSize', 'DstGameDataName': 'MiniGame_Fishing_KeepFishSize'})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFish'}) {
        ChallengeSystemActor.EventShowMiniGameScoreNum({'MiniGameScoreIconType': 3, 'IsWaitEnd': True})
    }
    ChallengeSystemActor.EventTriggerRequestFlushForFishMiniGameScore()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFish', 'Value': True})
    if !Player_Event.EventQueryPlayerIsEquipSinkLure() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure', 'Value': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsCatchLoach'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_KeepLoach'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepLoach', 'Value': False})
    }
}

void SetRecordFishSize() {
    if !Player_Event.EventQueryPlayerIsChild() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_OnceUpdateRecord'})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Fishing_KeepFishSize', 'DstGameDataName': 'MiniGame_Fishing_RecordFishSize_Child', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Child', 'Index': -1, 'Value': True})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Child', 'Value': False, 'Index': -1})
        }
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'GameDataB': 'MiniGame_Fishing_RecordFishSize_Adult', 'Operator': 2}) {
            Event147:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_OnceUpdateRecord_Adult'})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Fishing_KeepFishSize', 'DstGameDataName': 'MiniGame_Fishing_RecordFishSize_Adult', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Adult', 'Index': -1, 'Value': True})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Adult', 'Value': False, 'Index': -1})
            }
        }
    } else {
        goto Event147
    }
}

void ShowKeepFish() {

    call GiveReward()

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepLoach'}) {

        call ReplaceAquariumFish()

    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_55', 'MaintainPerformanceState': 0})

    call SinkingLureTalk()


    call ClearKeepFishInfo()

}

void ClearKeepFishInfo() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_Fishing_KeepFishSize', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFish', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'})
}

void GiveReward() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_137', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepLoach'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_150', 'MaintainPerformanceState': 0})
        } else {

            fork {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_150', 'MaintainPerformanceState': 0})
            } {

                call LoachBustShot()

            }

        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_194', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

            call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Purple'})

            UISystemActor.EventTriggerCloseRupeeDisplay()
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_GetHeartPiece', 'Index': -1}) {
                    Event874:
                    EventSystemActor.EventDoNothing({'IsWaitEnd': True})
                    Event223:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_33', 'MaintainPerformanceState': 0})
                    Event641:
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_116', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterUpdateRecord', 'Value': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_195', 'ASName': '', 'MaintainPerformanceState': 0})
                    Event870:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_198', 'MaintainPerformanceState': 0})
                    goto Event641
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
                goto Event874
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_199', 'MaintainPerformanceState': 0})
                goto Event870
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_180', 'MaintainPerformanceState': 0, 'ASName': 'Act_Joy_Wait'})

            fork {
                Player_Event.EventDoNothing({'IsWaitEnd': True})
            } {
                Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
            } {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            }

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_194', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

            call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Purple'})

            UISystemActor.EventTriggerCloseRupeeDisplay()
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_GetHeartPiece', 'Index': -1}) {
                    goto Event874
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_196', 'MaintainPerformanceState': 0})

                    call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ActorName': 'Obj_Heart_Piece', 'ASName': 'Wait', 'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter"), 'Target': 3, 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_GetHeartPiece', 'Index': -1, 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtEnd', 'Value': True})
                    goto Event223
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
                goto Event874
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_197', 'MaintainPerformanceState': 0})

                call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ASName': 'Wait', 'Target': 3, 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': '', 'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter"), 'ActorName': 'Item_Scale_Gold'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtEnd', 'Value': True})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 497})
                goto Event223
            }
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFishSize', 'Value': 40}) {
      case 0:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFishSize', 'Value': 26}) {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_176', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_165', 'ASName': '', 'MaintainPerformanceState': 0})
                Event677:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Minigame_Fishing_IsUseSinkingLureTalk'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_177', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
                Event382:

                call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Blue'})

                UISystemActor.EventTriggerCloseRupeeDisplay()
            }
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_17', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_165', 'ASName': '', 'MaintainPerformanceState': 0})
                goto Event677
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_140', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
                goto Event382
            }
        }
      case [1, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 50, 'GameDataName': 'MiniGame_Fishing_KeepFishSize'}) {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_143', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_164', 'ASName': '', 'MaintainPerformanceState': 0})
                goto Event677
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_141', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

                call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Red'})

                UISystemActor.EventTriggerCloseRupeeDisplay()
            }
          case [1, 2]:
            if !Player_Event.EventQueryPlayerIsChild() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_144', 'MaintainPerformanceState': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_164', 'ASName': '', 'MaintainPerformanceState': 0})
                    goto Event677
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_145', 'ASName': '', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_145_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_GetHeartPiece', 'Index': -1}) {

                        call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Red'})

                        UISystemActor.EventTriggerCloseRupeeDisplay()
                    } else {

                        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'ReveiveItem': 'Obj_Heart_Piece', 'NpcActorName': 'Npc_EventStarter', 'ASName': 'Wait', 'NpcInstanceName': ''})

                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_GetHeartPiece', 'Index': -1, 'Value': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtEnd', 'Value': True})
                    }
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_144', 'MaintainPerformanceState': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_164', 'ASName': '', 'MaintainPerformanceState': 0})
                    goto Event677
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_145', 'ASName': '', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_145_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_Fishing_KeepFishSize', 'Value': 60}) {
                      case 0:
                        Event385:

                        call Dm_SY_GetInEvent.GetInEvent({'ActorName': 'Obj_Rupee_Purple'})

                        UISystemActor.EventTriggerCloseRupeeDisplay()
                      case [1, 2]:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
                            goto Event385
                        } else {

                            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'ReveiveItem': 'Item_Scale_Gold', 'ASName': 'Wait', 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtEnd', 'Value': True})
                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 497})
                        }
                    }
                }
            }
        }
    }
}

void ClearAllInfo() {

    call ClearKeepFishInfo()

    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_Fishing_CatchFishSize'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fishing_AfterUpdateRecord'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fishing_TutorialInterrupted'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainyInCurrentPlay', 'Value': False})
}

void Fishing_NaviReaction() {
    ;
}

void Step01_EndFishing() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_KeepFish', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_139', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event504:

            call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})


            call ShowKeepFish()


            call EndSequense()

        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_112', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_39', 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 14, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event670:

            call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_04', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_55', 'MaintainPerformanceState': 0})

            call SinkingLureTalk()


            call EndSequense()

        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_112', 'MaintainPerformanceState': 0})
        }
    }
}

void Ready_Explanation() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_67', 'ChoiceLabel1': 3, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 3, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_67_2'})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {

        call NpcCommon.Npc_IsConfront_WithLinkAS_ForReceive({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

        switchcall PaymentCheck() {
          case 0xd59ff357:

            call MiniGame_Fishing_Sub.Tutorial_Start()

            goto Event16
        }
    } else {

        call Ready_CancelFishing()

    }
}

void ResetTalkedFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_RecomendedPlaying', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedFishingTips', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedHowToPlay', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsAfterTalkNearLure', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsAfterTalkNearLureNoHat', 'Value': False})
}

void CheckPlayCount() {

    call SetPlayCountUntilRainy()

    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_Fishing_PlayCount', 'Index': -1, 'Value': 1})

    call ApplyCount()

}

void RestEnvFlag() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_Rainy', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Rainy', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_CanRainyTalk'})
    }
}

void Keep() {
    Player_Event.EventPlayerFishingKeep({'IsWaitEnd': False})

    fork {

        call SetKeepFishInfo()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_IsPlayInSouthWest', 'Index': -1}) {
            Npc_Hylia_Fishman_001_Child[Keep(Fishman)].EventNPCTurnToTarget({'Target': 0, 'WorldPos': [-96.41000366210938, 135.5, 495.30999755859375], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False})
        }
    }


    call Fishing_NaviReaction()


    call MiniGame_Fishing_Sub.Tutorial_End({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

}

void Release() {

    fork {
        Player_Event.EventPlayerFishingRelease({'IsWaitEnd': False})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtWait'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_IsPlayInSouthWest', 'Index': -1}) {
            Npc_Hylia_Fishman_001_Child[Release(Fishman)].EventNPCTurnToTarget({'Target': 0, 'WorldPos': [-96.41000366210938, 135.5, 495.30999755859375], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': False})
        }
    }


    call MiniGame_Fishing_Sub.Tutorial_End({'Fishman': 'Fishman', 'Fishman_ActorName': 'Fishman_ActorName', 'Fishman_InstanceName': 'Fishman_InstanceName'})

}

void PaymentCheck() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
            Event29:

            call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

            if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                UISystemActor.EventTriggerCloseRupeeDisplay()
                return 0xd49ff1c4
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
                if !Player_Event.EventQueryPlayerIsChild() {

                    call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': False, 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'PaidRupee': -10})

                } else {

                    call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': False, 'NpcActor': ActorIdentifier(name="Npc_EventStarter"), 'PaidRupee': -30})

                }
                UISystemActor.EventTriggerCloseRupeeDisplay()
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_02_2', 'MaintainPerformanceState': 0})

                call NpcCommon.NpcCommon_HandOver_NpcToPlayer_FishingOnly({'ReceiveItem': 'Item_FishingRod', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})

                Player_Event.EventPlayerSetItemForMiniGame({'UsingItemMiniGame': 18, 'IsWaitEnd': True, 'ItemNum': 1, 'IsEquipMiniGameActor': True})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtStart'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_200', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtStart', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fishing_NotYetHearSinkLureHintAtStart'})
                    Event76:
                    return 0xd59ff357
                } else {
                    goto Event76
                }
            }
        } else {
            Event30:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_07', 'MaintainPerformanceState': 0})
            UISystemActor.EventTriggerCloseRupeeDisplay()
            return 0xd69ff4ea
        }
    } else
    if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {
        goto Event29
    } else {
        goto Event30
    }
}

void Talk_DuringTutorial() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsAccessDoor'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_IsAccessDoor', 'Value': False, 'Index': -1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 12, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_203', 'MaintainPerformanceState': 0})
        Event737:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_KeepFish', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_202', 'ChoiceLabel4': 55, 'ChoiceLabel1': 12, 'ChoiceLabel2': 56, 'ChoiceLabel3': 11, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call EndFishing_IsAccessDoorTalk_Keeping()

              case 1:
                Event721:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsActiveTutorial', 'Value': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 12, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_109', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_TutorialInterrupted'})
              case 2:
                Event842:

                call Step01_IdleTalk()

              case 3:
                Event873:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_ShowedTutorial_Interested'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Minigame_Fishing_Tutorial_Battle'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 12, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_124', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 12, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_123', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 12, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_122', 'MaintainPerformanceState': 0})
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_201', 'ChoiceLabel1': 12, 'ChoiceLabel2': 56, 'ChoiceLabel3': 11, 'ChoiceLabel4': 55, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call EndFishing_IsAccessDoorTalk_NotKept()

              case 1:
                goto Event721
              case 2:
                goto Event842
              case 3:
                goto Event873
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_108', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        goto Event737
    }
}

void Talk_DuringFishing() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsAccessDoor'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_IsAccessDoor', 'Value': False, 'Index': -1})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_KeepFish', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_202', 'ChoiceLabel4': 13, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'ChoiceLabel3': 11, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call EndFishing_IsAccessDoorTalk_Keeping()

              case 1:
                Event733:

                call Explanation()

              case 2:
                Event732:

                call Step01_IdleTalk()

              case 3:
                Event839:

                call Step01_EndTalk()

            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_201', 'ChoiceLabel4': 13, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'ChoiceLabel3': 11, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call EndFishing_IsAccessDoorTalk_NotKept()

              case 1:
                goto Event733
              case 2:
                goto Event732
              case 3:
                goto Event839
            }
        }
    } else {
        switchcall EnvTalk() {
          case 0x13adfaf5:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_187', 'MaintainPerformanceState': 0})
            Event368:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 13, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_174', 'ChoiceLabel3': 11, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            Event696:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call Step01_EndFishing()

              case 1:

                call Explanation()

              case 2:

                call Step01_IdleTalk()

              case 3:

                call Step01_EndTalk()

            }
          case 0x381f3a05:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_190', 'ChoiceLabel3': 11, 'ChoiceLabel4': 13, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            goto Event368
          case 0xee0c99e4:
            goto Event368
          case 0xf81e792e:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_185', 'ChoiceLabel3': 11, 'ChoiceLabel4': 13, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            goto Event368
        }
    }
}

void Explanation() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_CompletedTutorial'}) {
        Event475:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_125', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
        Event477:
        if !GameSystemActor.EventQueryTalkChoice2() {

            call NpcCommon.Npc_IsConfront_WithLinkAS({'LinkAS': 'EvtTalkYes', 'NpcActor': ActorIdentifier(name="Npc_EventStarter")})


            call MiniGame_Fishing_Sub.Tutorial_Start()

        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})

            call Talk_DuringFishing_Choice4()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TutorialInterrupted'}) {
        goto Event475
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_126', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0})
    }
    goto Event477
}

void Talk_DuringFishing_Choice4() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_127', 'ChoiceLabel4': 13, 'ChoiceLabel1': 12, 'ChoiceLabel2': 5, 'ChoiceLabel3': 11, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    goto Event696
}

void Player_MaskCheck() {
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_131', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_130', 'MaintainPerformanceState': 0})
    }
}

void Mask_All() {

    call NpcCommon.Mask_Talk_Common_NotTalkMonolog({'Mask_Keaton_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/MiniGame_Fishing:Mask_103'})

}

void EndSequense() {
    Player_Event.EventPlayerResetItemBeforeMiniGame({'IsWaitEnd': True})

    call Fishing_HideUI()


    call RestEnvFlag()


    call ClearAllInfo()

    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_Fishing', 'ChallengeStep': 'Ready', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsGet.Weapon_SinkingLure', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsActiveTutorial', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterFinishFishing', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Minigame_Fishing_IsUseSinkingLureTalk', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GoOutPondAndIn', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterTalkAboutHat', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fishing_CancelTutorialByTakeHat'})
}

void ReplaceAquariumFish() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'Operator': 2, 'GameDataB': 'MiniGame_Fishing_RecordFishSize_Child'}) {
            Event632:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_163', 'MaintainPerformanceState': 0})
            } else {
                Event583:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_146', 'MaintainPerformanceState': 0})
            }
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call SetRecordFishSize()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_147', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterUpdateRecord', 'Value': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Child'}) {
            Event584:
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'GameDataB': 'MiniGame_Fishing_RecordFishSize_Child', 'Operator': 0}) {
                    goto Event583
                } else {
                    Event629:
                    EventSystemActor.EventDoNothing({'IsWaitEnd': True})
                }
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'GameDataB': 'MiniGame_Fishing_RecordFishSize_Adult', 'Operator': 0}) {
                goto Event583
            } else {
                goto Event629
            }
        } else {
            Event71:
            EventSystemActor.EventDoNothing({'IsWaitEnd': True})
        }
    } else
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_KeepFishSize', 'Operator': 2, 'GameDataB': 'MiniGame_Fishing_RecordFishSize_Adult'}) {
        goto Event632
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_RecordWithSinkingLure_Adult'}) {
        goto Event584
    } else {
        goto Event71
    }
}

void EndFishing_IsAccessDoorTalk_NotKept() {
    goto Event670
}

void EndFishing_IsAccessDoorTalk_Keeping() {
    goto Event504
}

void SinkingLureTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_UseSinkingLure'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minigame_Fishing_SinkingLure_IsConfiscated'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_207', 'MaintainPerformanceState': 0})
            Event690:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_208', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_205', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Minigame_Fishing_SinkingLure_IsConfiscated', 'Index': -1, 'Value': True})
            goto Event690
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_208', 'MaintainPerformanceState': 0})
    }
}

void SinkLureHintOn() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetHeartPiece'}) {
            Event600:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_HintSinkLure_AtStart'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_GetGoldScale'}) {
            goto Event600
        }
    }
}

void CheckSignBoard() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {
        SignBoard_EventStarter.EventTriggerBecomeSpeaker()

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Obj_LakeHrl_SignBoard_A_01', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'InstanceName': 'FishingSignBoard', 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_LakeHrl_SignBoard_A_01', 'Actor1InstanceName': 'FishingSignBoard', 'PosVector': [0.15000000596046448, -0.7400000095367432, 5.599999904632568], 'AtVector': [0.12999999523162842, 0.11999999731779099, 1.0299999713897705], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsOverrideStyle': False, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'OverrideStyle': 0})
    } else {

        call SignboardWood.ReadBackSide()

    }
}

void NaviMove_CatchFish() {

    call NaviChat.NaviEmotionChange_NoTime({'EmotionType': 'EmotionType'})

    Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': False, 'LookAtTarget': 2, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'PassThrough': 0.5, 'LookAtPosOffset': 'LookAtPosOffset', 'offset': 'offset', 'IsWaitEnd': False, 'IsLookAtObject': True, 'MoveSpeed': 10.0, 'LookAtOffsetBase': 1, 'ArrivedASCommand': 'ArrivedASCommand', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
}

void FishSizeCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_IsCatchLoach'}) {
        return fnv1a("4")
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Fishing_CatchFishSize', 'Value': 40, 'Index': -1}) {
      case 0:
        return fnv1a("0")
      case [1, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Fishing_CatchFishSize', 'Index': -1, 'Value': 50}) {
          case 0:
            return fnv1a("1")
          case [1, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Fishing_CatchFishSize', 'Value': 70, 'Index': -1}) {
              case 0:
                return fnv1a("2")
              case [1, 2]:
                return fnv1a("3")
            }
        }
    }
}

void Sub_InitTalkNavi_Catchfish_Child() {
    switchcall FishSizeCheck() {
      case fnv1a("0"):

        call NaviMove_CatchFish({'EmotionType': 0, 'ArrivedASCommand': 'EvtWait', 'LookAtPosOffset': [-0.15000000596046448, -0.3499999940395355, 2.0], 'offset': [-0.550000011920929, 0.0, -0.44999998807907104]})

      case [fnv1a("1"), fnv1a("2")]:

        call NaviMove_CatchFish({'EmotionType': 1, 'LookAtPosOffset': [-0.20000000298023224, -0.3499999940395355, 2.0], 'ArrivedASCommand': 'EvtTalk', 'offset': [-0.6000000238418579, 0.0, -0.3499999940395355]})

      case [fnv1a("3"), fnv1a("4")]:

        call NaviMove_CatchFish({'LookAtPosOffset': [-0.20000000298023224, -0.3499999940395355, 2.0], 'ArrivedASCommand': 'EvtTalk', 'EmotionType': 4, 'offset': [-0.6000000238418579, 0.0, -0.3499999940395355]})

    }
}

void Sub_InitTalkNavi_Catchfish_Adult() {
    switchcall FishSizeCheck() {
      case fnv1a("0"):

        call NaviMove_CatchFish({'EmotionType': 0, 'ArrivedASCommand': 'EvtWait', 'LookAtPosOffset': [-0.15000000596046448, -0.3499999940395355, 2.0], 'offset': [-0.75, 0.0, -0.44999998807907104]})

      case [fnv1a("1"), fnv1a("2")]:

        call NaviMove_CatchFish({'EmotionType': 1, 'LookAtPosOffset': [-0.20000000298023224, -0.3499999940395355, 2.0], 'ArrivedASCommand': 'EvtTalk', 'offset': [-0.800000011920929, 0.0, -0.3499999940395355]})

      case [fnv1a("3"), fnv1a("4")]:

        call NaviMove_CatchFish({'LookAtPosOffset': [-0.20000000298023224, -0.3499999940395355, 2.0], 'ArrivedASCommand': 'EvtTalk', 'EmotionType': 4, 'offset': [-0.800000011920929, -0.10000000149011612, -0.3499999940395355]})

    }
}

void EnvTalk() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Event807:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_CanRainyTalk'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainy'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainyInCurrentPlay'}) {
                    Event812:
                    return 0xee0c99e4
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainyInCurrentPlay', 'Value': True})
                    return 0x381f3a05
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainyInCurrentPlay', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Fishing_TalkedInRainy'})
                return 0xf81e792e
            }
        } else {
            goto Event812
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfWater_EscapeFromWaterTemple'}) {
        goto Event807
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainy_TalkedBeforeClearWaterTemple'}) {
        goto Event812
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_TalkedInRainy_TalkedBeforeClearWaterTemple', 'Value': True})
        return 0x13adfaf5
    }
}

void Step01_EndTalk() {

    call ResetTalkedFlag()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_128', 'MaintainPerformanceState': 0})
}

void Idle() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Event832:
        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                if !Player_Event.EventQueryPlayerIsEquipSinkLure() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_36', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Minigame_Fishing_IsUseSinkingLureTalk'})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_19', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_25', 'MaintainPerformanceState': 0})
            }
          case 1:
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_21', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_26', 'MaintainPerformanceState': 0})
            }
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_191', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Defeat_Ganon_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Fishing_Step01_IdleTalk_Event177', 'Index': -1}) {
            goto Event832
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_16', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_Fishing_Step01_IdleTalk_Event177', 'Value': True, 'Index': -1})
        }
    } else
    goto Event832
}

void HideItem() {

    fork {

        call NpcCommon.DisplayItemSet({'DisplayItemActor': ActorIdentifier(name="Item_Scale_Gold")})

    } {

        call NpcCommon.DisplayItemSet({'DisplayItemActor': ActorIdentifier(name="Obj_Heart_Piece")})

    }

}

void SetPlayCountUntilRainy() {
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Fishing_PlayCount', 'Value': 0, 'Index': -1}) {
        GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'MiniGame_Fishing_PlayCountUntileRainy', 'GameDataB': 'MiniGame_Fishing_PlayCountUntileRainy'})
    }
}

void ApplyCount() {
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Fishing_PlayCount', 'GameDataB': 'MiniGame_Fishing_PlayCountUntileRainy', 'Operator': 3}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Rainy', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'MiniGame_Fishing_PlayCount', 'GameDataB': 'MiniGame_Fishing_PlayCount'})
    }
}

void Near_TakeOffHat() {

    call MiniGame_Fishing_Sub.Near_TakeOffHat()

}

void Talk_TakeOffHat() {

    call MiniGame_Fishing_Sub.Talk_TakeOffHat()

}

void MiniGame_Fishing_Common_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterGameOver'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_63', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_AfterGameOver', 'Index': -1, 'Value': False})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_64', 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
            goto Event13
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fising_AfterGameOverAngry'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_Fising_AfterGameOverAngry'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_64_3'})
            goto Event13
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_64_2'})
            goto Event13
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_Fishing_FishmanMelancholy'}) {
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Player_Event.EventQueryPlayerIsChild() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_171', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_171_2'})
            }
            goto Event13
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Temporarily_AIScheduleReset', 'Index': -1, 'Value': True})
            if !Player_Event.EventQueryPlayerIsChild() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_172', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_172_2'})
            }
            goto Event13
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            Event550:

            call Mask_All()

            Event24:
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
            if !Player_Event.EventQueryPlayerIsChild() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_01', 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_01_2'})
            }
            goto Event13
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterFinishFishing'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_149', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_AfterFinishFishing', 'Value': False})
            goto Event24
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_15', 'MaintainPerformanceState': 0})
            goto Event24
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        goto Event550
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_52', 'ChoiceLabel2': 5, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    }
    goto Event24
}

void Adult_IsFirstTalk() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_Fishing_Adult_IsFirstTalked'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_Fishing_Temporarily_AIScheduleReset', 'Index': -1, 'Value': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_214'})
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_212', 'ASName': 'Act_Normal_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

    fork {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    } {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventPlayAS({'ASName': 'Act_Normal_Wait', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_215'})
}

void Melancholy_IsFirstTalk() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_211', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/MiniGame_Fishing:Talk_212', 'ASName': 'Act_Normal_Wait', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
}

void LoachBustShot() {
    EventCamera.EventTriggerCameraSavePoint()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_isInCorner'}) {

        fork {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-96.08999633789062, 135.36000061035156, 495.3299865722656], 'AtVector': [-97.02999877929688, 135.36000061035156, 494.5799865722656], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'IsWaitEnd': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-97.02999877929688, 135.36000061035156, 494.5799865722656], 'AtVector': [-97.97000122070312, 135.36000061035156, 493.8399963378906], 'TargetFovy': 50.0, 'MoveTime': 7, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'IsEnableRevertFast': False})
        }

    } else {

        fork {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
        } {
            EventCamera.EventBustShotCamera({'Longitude': 0.0, 'IsWaitEnd': True, 'Latitude': 0.0, 'Radius': 1.2000000476837158, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_EventStarter', 'TargetActorInstanceName': '', 'TargetOffset': [0.0, -0.30000001192092896, 2.0]})
            EventCamera.EventBustShotCamera({'Longitude': 0.0, 'IsWaitEnd': True, 'Latitude': 0.0, 'Radius': 1.2000000476837158, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_EventStarter', 'TargetActorInstanceName': '', 'TargetOffset': [0.0, -0.30000001192092896, 0.800000011920929], 'MoveTime': 7, 'CameraCollisionMode': 1})
        }

    }
}
