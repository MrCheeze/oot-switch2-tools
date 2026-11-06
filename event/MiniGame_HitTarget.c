-------- EventFlow: MiniGame_HitTarget --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerUnshowMiniGameScoreNum', 'EventOpenPlayerStatusMiniGame', 'EventClosePlayerStatusMiniGame', 'EventExecuteRollbackChallengeStep', 'EventShowReadyGo', 'EventTriggerShowMiniGameScoreNum']
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventSuspend', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerOpenRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSendErrorToEventResource', 'EventTriggerRequestAutoSave', 'EventReserveBancChange', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: ['EventQueryHasRuppe', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryGameDataIntBranch', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataInt', 'EventQueryIsBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: MiniGame_HitTarget_Manager
entrypoint: None()
actions: ['EventMiniGameHitTargetReset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerResetItemBeforeMiniGame', 'EventPlayerSetItemForMiniGame', 'EventPlayerTurnAndLook', 'EventTriggerHealLife', 'EventPlayerDie', 'EventPlayerMoveToAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerDrawn', 'EventTriggerPlayerSetTimerInvalidDoAction', 'EventTriggerPlayerLookAtObject']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Hylia_019_Shop_Child
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventDisableRecentTalkFlag', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_Door_ShopHitTarget[RestrictedDoor_Market_03]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 0}

Actor: Obj_Kakariko_Door_A_06
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Playing_Npc_Hylia_019_Shop_Child_EachFrame() {
    Event1:
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    goto Event1
}

void Ready_Npc_Hylia_019_Shop_Child_Talk() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'MiniGame_HitTarget_Ready_Npc_Hylia_019_Shop_Child_Talk_SubFlow'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Market_Minigame_HitTarget_IsTalk', 'Value': False})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'MiniGame_HitTarget_Ready_Npc_Hylia_019_Shop_Adult_Talk_SubFlow'})
    }
}

void MiniGame_HitTarget_Start() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_HitTarget_IsAfter_Ready_Exp'}) {

        fork {

            call PlayerCamera_Move()

        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': 2, 'IsNearOffset': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'MiniGame_HitTarget_CameraTarget', 'KeepTalkWait': True, 'SlowTurn': False, 'IgnoreTargetPosMove': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        }

        Event227:

        call MiniGame_HitTarget_ResetScore()


        fork {

            call MiniGame_HitTarget_WeaponChange()

        } {

            call MiniGame_HitTarget_ScoreUI()

        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'}) {
            Event474:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_HitTarget_IsAfter_Ready_Exp'}) {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_08', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_42', 'MaintainPerformanceState': 0})
            }
            ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 4})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Playing', 'ChallengeName': 'MiniGame_HitTarget'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'})
            if !Player_Event.EventQueryPlayerIsChild() {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_46', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_07', 'MaintainPerformanceState': 0})
            }
            goto Event474
        }
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_41', 'MaintainPerformanceState': 0})

        fork {

            call PlayerCamera_Move()

        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': 2, 'IsNearOffset': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'PlayPosition', 'MoveSpeed': 1.0, 'DecSpeedDistance': 0.5, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'InstanceName': 'MiniGame_HitTarget_CameraTarget', 'KeepTalkWait': True, 'SlowTurn': False, 'UseNormalTurn': True, 'IsDoNavi': False})
        }

        goto Event227
    }
}

void MiniGame_HitTarget_ResetGimmick() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsAskedFinishBecauseOfZeroRemain', 'Value': False, 'Index': -1})
    MiniGame_HitTarget_Manager.EventMiniGameHitTargetReset({'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void MiniGame_HitTarget_RetryTalk() {
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
    if !Player_Event.EventQueryPlayerIsChild() {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_43', 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                call NpcCommon.NpcCommon_HandOver_PlayerToNpc_NoTurn({'NpcReceiveASName': 'Receive', 'PaidRupee': -10, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'BeforeReceiveFrames': 120})

                Event183:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call MiniGame_HitTarget_Start()

            } else {
                Event15:
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_48', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NoMoney'})
                Event35:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call MiniGame_HitTarget_End_noReset({'CloseUI': False})

            }
        } else {
            Event278:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_21'})
            goto Event35
        }
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_40', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {

                call NpcCommon.NpcCommon_HandOver_PlayerToNpc_NoTurn({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 120, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'PaidRupee': -30})

                goto Event183
            } else {
                goto Event15
            }
        } else {
            goto Event278
        }
    }
}

void Finish_Npc_Hylia_019_Shop_Child_StepStart() {

    call MiniGame_HitTarget_GiveupTalk()


    call MiniGame_HitTarget_ResetGimmick()

}

void MiniGame_HitTarget_ResultTalk() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_Score_ForMessage', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})

    call MiniGame_HitTarget_ResetScoreUI()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_HitTarget_IsFullRemainBullet'}) {

        call MasterCamera_Front()


        call NeverPlayed()

    } else {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

        call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_70', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': ''})

        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_Score'}) {
          case [0, 1, 2, 3, 4, 5, 6, 7]:

            fork {

                call MasterCamera_Front()

            } {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_06', 'ASName': 'Act_Talk_Failure', 'MaintainPerformanceState': 0})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'PlayPosition', 'ASCommand': 'EvtWait'})
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

                call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLeft': False, 'IsLookAtPlayer': False})

                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }


            call MiniGame_HitTarget_ResetGimmick()


            call Camera_LinkANDMaster()

            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1}) {
                        Event285:
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_27', 'MaintainPerformanceState': 0})
                    }
                    Event49:

                    call MiniGame_HitTarget_RetryTalk()

                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear', 'Index': -1, 'Value': True})
                    goto Event49
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore', 'Index': -1}) {
                    goto Event285
                }
                goto Event49
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear', 'Index': -1, 'Value': True})
                goto Event49
            }
          case [8, 9]:

            fork {

                call MasterCamera_Front()

            } {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_07', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Talk_Failure', 'MaintainPerformanceState': 0})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'PlayPosition', 'ASCommand': 'EvtWait'})
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

                call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLeft': False, 'IsLookAtPlayer': False})

                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }


            call MiniGame_HitTarget_ResetGimmick()


            call Camera_LinkANDMaster()

            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            if !Player_Event.EventQueryPlayerIsChild() {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1}) {
                        Event289:
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_27', 'MaintainPerformanceState': 0})
                    }
                    Event288:
                    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_26', 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})

                        call MiniGame_HitTarget_Start()

                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_21'})

                        call MiniGame_HitTarget_End_noReset({'CloseUI': False})

                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear', 'Index': -1, 'Value': True})
                    goto Event288
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore', 'Index': -1}) {
                    goto Event289
                }
                goto Event288
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear', 'Index': -1, 'Value': True})
                goto Event288
            }
          case 10:

            fork {

                call MasterCamera_Right()

                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_10', 'ASName': 'Act_Talk_Success', 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                call MasterCamera_Left()

                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_28', 'ASName': 'Act_Talk_Success_B', 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

                call MasterCamera_Front()

                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_29', 'ASName': 'Act_Talk_Success_C', 'MaintainPerformanceState': 0})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'PlayPosition', 'ASCommand': 'EvtWait'})
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

                call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLeft': False, 'IsLookAtPlayer': False})

                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }


            call MiniGame_HitTarget_ResetGimmick()


            call Camera_LinkANDMaster()

            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsHardMode', 'Index': -1}) {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_34', 'ASName': '', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_34', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
            }

            call RewardTalk()

        }
    }
}

void Retry_Npc_Hylia_019_Shop_Child_StepStart() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'MiniGame_HitTarget_BestScore', 'Operator': 2}) {
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HitTarget_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})

                call Change_FInishUI_NoRecord()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1, 'Value': True})
                Event13:

                call MiniGame_HitTarget_ResultTalk()

            } else {
                Event444:

                call Change_FInishUI_NoRecord()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1, 'Value': False})
                goto Event13
            }
        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HitTarget_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            goto Event444
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'Operator': 2, 'GameDataB': 'MiniGame_HitTarget_Kakariko_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_HitTarget_Kakariko_BestScore'})

            call Change_FInishUI_NoRecord()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore'})
            goto Event13
        } else {
            Event396:

            call Change_FInishUI_NoRecord()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore', 'Value': False})
            goto Event13
        }
    } else {
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_HitTarget_Kakariko_BestScore'})
        goto Event396
    }
}

void MiniGame_HitTarget_GiveupTalk() {

    call InitTalk.InitTalk_NoMaskTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsAskedFinishBecauseOfZeroRemain', 'Index': -1}) {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_54', 'ChoiceLabel1': 11, 'ChoiceLabel2': 10, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            call MiniGame_HitTarget_ResultTalk()

        } else {
            Event305:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_22', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_20', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_39', 'MaintainPerformanceState': 0})

            call MiniGame_HitTarget_End({'CloseUI': True})

        } else {
            goto Event305
        }
    }
}

void Check_NoMoney() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NoMoney', 'Value': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NeverPlayed'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NeverPlayed'})
    }
}

void Check_NeverPlayed() {
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_12', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Wait', 'MaintainPerformanceState': 0})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_52', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NeverPlayed'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_ColdShoulder'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitParsonOutGame', 'Value': False})

    call InitTalk.Sub_InitTalk_Npc({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child")})

}

void RewardTalk() {
    if !Player_Event.EventQueryPlayerIsChild() {

        call Child_Reward()

    } else {

        call Adult_Reward()

    }
}

void RetryTalk2() {
    Event543:
    if !Player_Event.EventQueryPlayerIsChild() {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 4, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_44', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 4, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_01', 'MaintainPerformanceState': 0})
    }
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call Choice_Do()

      case 1:

        call Check_EvtTalkWonder()

        Event105:
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_15', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_45', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_06', 'MaintainPerformanceState': 0})
        }
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'})
        }
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 4, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_44', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel2': 4, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_01', 'MaintainPerformanceState': 0})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            call Choice_Do()

          case 1:

            call ReHowToPlay2()

          case 2:

            call Choice_No()

        }
      case 2:

        call Choice_No()

    }
}

void MiniGame_HitTarget_End() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_38', 'MaintainPerformanceState': 0})

    call MiniGame_HitTarget_ResetGimmick()


    call MiniGame_HitTarget_WeaponRollback()

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'CloseUI'}) {

        call MiniGame_HitTarget_ResetScoreUI()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Event561:
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_21', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        Event203:
        if !Player_Event.EventQueryPlayerIsChild() {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear', 'Index': -1, 'Value': True})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear', 'Index': -1, 'Value': True})
        }
        Event426:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsHardMode', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_IsHardMode', 'Value': False})
        }
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MiniGame_HitTarget', 'ChallengeStep': 'Ready'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        goto Event561
    }
}

void Choice_Do() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

            call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

            if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child'})

                call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'PaidRupee': -10, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'BeforeReceiveFrames': 100, 'IsTurn': False})

                Event9:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_09', 'MaintainPerformanceState': 0})

                call MiniGame_HitTarget_Start()

            }
        } else {
            Event41:
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_30', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NoMoney'})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        }
    } else
    if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {

        call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

        if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        } else {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child'})

            call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 100, 'IsTurn': False, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'PaidRupee': -30})

            goto Event9
        }
    } else {
        goto Event41
    }
}

void Choice_No() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_02', 'MaintainPerformanceState': 0})
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}

void MiniGame_HitTarget_GiveupTalk_TryOpenDoor() {

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_51', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': ''})

    EventCamera.EventTriggerCameraSavePoint()
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.47999998927116394, 1.1799999475479126, 2.1600000858306885], 'AtVector': [0.47999998927116394, 1.1799999475479126, 2.1700000762939453], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsAskedFinishBecauseOfZeroRemain', 'Index': -1}) {
            Event230:
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_18', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event128:
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_39', 'MaintainPerformanceState': 0})

                call MiniGame_HitTarget_End({'CloseUI': True})

                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
            } else {
                Event129:
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_22', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
                Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 30.0})
            }
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_50', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
            Event127:
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event128
            } else {
                goto Event129
            }
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_019_Shop_Child', 'PosVector': [2.200000047683716, 2.619999885559082, 1.8700000047683716], 'AtVector': [0.3199999928474426, 1.6100000143051147, 0.550000011920929], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsAskedFinishBecauseOfZeroRemain', 'Index': -1}) {
            goto Event230
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_16', 'MaintainPerformanceState': 0})
            goto Event127
        }
    }
}

void MiniGame_HitTarget_WeaponRollback() {
    Player_Event.EventPlayerResetItemBeforeMiniGame({'IsWaitEnd': True})
}

void MiniGame_HitTarget_WeaponChange() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Player_Event.EventPlayerSetItemForMiniGame({'UsingItemMiniGame': 4, 'IsWaitEnd': True, 'ItemNum': 15, 'IsEquipMiniGameActor': True})
        Player_Event.EventPlayerDrawn({'IsWaitEnd': True, 'IsDrawnImmediate': False, 'EquipmentSlot': 3})
    } else {
        Player_Event.EventPlayerSetItemForMiniGame({'UsingItemMiniGame': 30, 'IsWaitEnd': True, 'ItemNum': 15, 'IsEquipMiniGameActor': True})
        Player_Event.EventPlayerDrawn({'EquipmentSlot': 3, 'IsWaitEnd': True, 'IsDrawnImmediate': False})
    }
}

void AboutPrize() {
    Npc_Hylia_019_Shop_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_19', 'MaintainPerformanceState': 0})
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'}) {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_05', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_04', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'}) {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_55', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_04', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    }
}

void Check_MasterAngry() {
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_71', 'MaintainPerformanceState': 0})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_63', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitPerson'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_ColdShoulder'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitParsonOutGame', 'Value': False})

    call InitTalk.Sub_InitTalk_Npc({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child")})

}

void Child_Reward() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsHardMode', 'Index': -1}) {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_53', 'MaintainPerformanceState': 0})
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})

            call GetRupy_HitTarget({'GetRupee': 30})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Event601:
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_56', 'MaintainPerformanceState': 0})
            Event98:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_TalkedAboutRules'})

            call MiniGame_HitTarget_End_noReset({'CloseUI': False})

        } else {

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Obj_Rupee_Red', 'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            goto Event601
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_BulletBag_Medium'}) {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Item_BulletBag_Large', 'ASName': 'Wait', 'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'NpcInstanceName': ''})

    } else {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Item_BulletBag_Medium', 'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'})
    Event67:
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_11', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
    goto Event98
}

void Adult_Reward() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsHardMode', 'Index': -1}) {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_53', 'MaintainPerformanceState': 0})
            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})

            call GetRupy_HitTarget({'GetRupee': 70})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            goto Event601
        } else {

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Obj_Rupee_Purple'})

            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            goto Event601
        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Quiver_Medium'}) {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Item_Quiver_Large', 'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

    } else {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ReveiveItem': 'Item_Quiver_Medium', 'NpcActorName': 'Npc_Hylia_019_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'})
    goto Event67
}

void MiniGame_HitTarget_ResetScoreUI() {
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_ScoreMax', 'Value': 0, 'Index': -1})
    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
}

void MiniGame_HitTarget_ScoreUI() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_ScoreMax', 'Index': -1, 'Value': 10})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 0})
    if !Player_Event.EventQueryPlayerIsChild() {
        ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'IsWaitEnd': True, 'MiniGameType': 4})
    } else {
        ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'IsWaitEnd': True, 'MiniGameType': 5})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void MiniGame_HitTarget_ZeroRemainBullet() {

    call FINISH_UI()

    if !Player_Event.EventQueryPlayerIsChild() {

        call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_14', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': ''})

    } else {

        call InitTalk.InitTalk_OnEvent_CameraStop({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_14', 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child")})

    }
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_16', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ASName': 'Act_Talk_Failure', 'ChoiceLabel2': 7, 'ChoiceLabel1': 5, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_36', 'MaintainPerformanceState': 0})

        call MiniGame_HitTarget_ResultTalk()

    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_17', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_IsAskedFinishBecauseOfZeroRemain', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    }
}

void MiniGame_HitTarget_ResetScore() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void NeverPlayed() {
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_35', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NeverPlayed'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_ColdShoulder', 'Value': True})

    call MiniGame_HitTarget_End_NoTalk({'CloseUI': True})

}

void CheckRestrictedDoor() {

    call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 0, 'StartTime': 20}) {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_03', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_HitTarget_FirstTalk'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_MiniGame_HitTarget_FirstTalk'})
        }
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 4, 'StartTime': 0}) {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_20', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})

        call NaviEventCommon.NaviMove_PlayerHomePos_Door()

        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_Navi_04', 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 4, 'EndTme': 7}) {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_14', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_HitTarget_FirstTalk'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_MiniGame_HitTarget_FirstTalk'})
        }
    } else {
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '通るはずのないフロー'})
    }
}

void HitTarget_MasterAngryEvent() {

    call Common.AirStartUp()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MiniGame_HitTarget_IsAfter_Retry_Exp'}) {

        fork {

            call MiniGame_HitTarget_ResetScoreUI()

        } {

            call InitTalk.InitTalk_OnEvent_SetTalkCamera_Flinch({'Arg_Turn': 1, 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_65'})

        }


        call MasterCamera_Front()

        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_61', 'MaintainPerformanceState': 0})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitPerson'})
            Event151:
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_64', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_ColdShoulder', 'Value': True})

            call MiniGame_HitTarget_AngerEnd()

            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_60', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitPerson'})
            goto Event151
        }
    } else {

        call InitTalk.InitTalk_OnEvent_SetTalkCamera_Flinch({'Arg_Turn': 1, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_65', 'ActorName': 'Npc_Hylia_019_Shop_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child")})

        if !Npc_Hylia_019_Shop_Child.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_66', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_67', 'MaintainPerformanceState': 0})
        }
        Npc_Hylia_019_Shop_Child.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitParsonOutGame'})
    }
}

void MiniGame_HitTarget_AngerEnd() {
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'Step_MiniGame_HitTarget', 'Value': 'Playing'}) {

        call MiniGame_HitTarget_ResetGimmick()


        call MiniGame_HitTarget_WeaponRollback()


        call MiniGame_HitTarget_ResetScoreUI()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Event152:
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'GetOutPosition', 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Event154:

        call PlayerCameraReset_NoKeep()

        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event426
    } else {
        goto Event152
    }
}

void CheckBow() {
    if !Npc_Hylia_019_Shop_Child.EventQueryIsOnRecentTalkFlag() {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_71', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_70', 'MaintainPerformanceState': 0})
    }
}

void MiniGame_HitTarget_End_noReset() {

    call MiniGame_HitTarget_WeaponRollback()

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'CloseUI'}) {

        call MiniGame_HitTarget_ResetScoreUI()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Event403:
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        goto Event203
    } else {
        goto Event403
    }
}

void MiniGame_HitTarget_End_NoTalk() {

    call MiniGame_HitTarget_ResetGimmick()


    call MiniGame_HitTarget_WeaponRollback()

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'CloseUI'}) {

        call MiniGame_HitTarget_ResetScoreUI()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Event111:
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

        call PlayerCameraReset()

        goto Event203
    } else {
        goto Event111
    }
}

void PlayerCameraReset() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.03999999910593033, 1.409999966621399, -2.940000057220459], 'AtVector': [0.0, 0.800000011920929, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05000000074505806, 1.8200000524520874, -2.9600000381469727], 'AtVector': [0.0, 1.350000023841858, 0.0], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void MasterCamera_Front() {
    Npc_Hylia_019_Shop_Child.EventTriggerRequestLookAtTheFront()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_019_Shop_Child', 'PosVector': [0.0, 1.5499999523162842, 2.440000057220459], 'AtVector': [0.0, 1.5499999523162842, 1.0099999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    Npc_Hylia_019_Shop_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
}

void MasterCamera_Right() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_019_Shop_Child', 'PosVector': [1.159999966621399, 1.6100000143051147, 1.9600000381469727], 'AtVector': [0.25999999046325684, 1.6100000143051147, 0.6800000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

}

void MasterCamera_Left() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_019_Shop_Child', 'PosVector': [-0.6499999761581421, 1.6100000143051147, 2.0199999809265137], 'AtVector': [-0.15000000596046448, 1.6100000143051147, 0.6800000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

}

void Camera_LinkANDMaster() {

    fork {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
}

void MiniGame_HitTarget_GameOver() {
    Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_81', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    if !Player_Event.EventQueryPlayerIsChild() {
        GameSystemActor.EventReserveBancChange({'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'Market_Child', 'EventStarterName': '', 'NextStartPos': 'HitTargetStartPos', 'IsItemWarp': False})
    } else {
        GameSystemActor.EventReserveBancChange({'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'EventStarterName': '', 'NextStartPos': 'HitTargetStartPos', 'NextBanc': 'KakarikoVillage_Adult', 'IsItemWarp': False})
    }

    call MiniGame_HitTarget_DeadEnd()

}

void NoMoney() {
    if !Npc_Hylia_019_Shop_Child.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_31', 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_32', 'MaintainPerformanceState': 0})
    }
    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_33', 'MaintainPerformanceState': 0})
}

void RetryTalk3() {
    Event550:
    if !Player_Event.EventQueryPlayerIsChild() {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_44', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 4, 'ChoiceLabel4': 1, 'MaintainPerformanceState': 0})
    } else {
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_01', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 4, 'ChoiceLabel4': 1, 'MaintainPerformanceState': 0})
    }
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call Choice_Do()

      case 1:
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call Choice_Do_Hard()

      case 2:

        call Check_EvtTalkWonder()

        Event247:
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_15', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_45', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_06', 'MaintainPerformanceState': 0})
        }
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_ExplainRentalItem'})
        }
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_100', 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_44', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 4, 'ChoiceLabel4': 1, 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_01', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 4, 'ChoiceLabel4': 1, 'MaintainPerformanceState': 0})
        }
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            call Choice_Do()

          case 1:
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

            call Choice_Do_Hard()

          case 2:

            call ReHowToPlay3()

          case 3:

            call Choice_No()

        }
      case 3:

        call Choice_No()

    }
}

void Choice_Do_Hard() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

            call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

            if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child'})

                call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'PaidRupee': -10, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'BeforeReceiveFrames': 100, 'IsTurn': False})

                Event421:
                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_101', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_IsHardMode'})

                call MiniGame_HitTarget_Start()

            }
        } else {
            goto Event41
        }
    } else
    if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {

        call SubEvent_GetSwordBigGoron.SubEvent_TimerCheck()

        if !ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        } else {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Hylia_019_Shop_Child'})

            call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 100, 'IsTurn': False, 'NpcActor': ActorIdentifier(name="Npc_Hylia_019_Shop_Child"), 'PaidRupee': -30})

            goto Event421
        }
    } else {
        goto Event41
    }
}

void MiniGame_HitTarget_DeadEnd() {

    call MiniGame_HitTarget_ResetGimmick()


    call MiniGame_HitTarget_WeaponRollback()


    call MiniGame_HitTarget_ResetScoreUI()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    goto Event154
}

void Change_FInishUI_NoRecord() {
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'MiniGame_Score'}) {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:

        fork {
            UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 4})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 139})
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})
        }

      case 10:

        fork {
            UISystemActor.EventShowFinish({'IsWaitEnd': True, 'Type': 0, 'IsNewRecords': False, 'MiniGameType': 4})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 139})
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum({'IsWaitEnd': True})
        } {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_ItemGet_Medium', 'CommandLife': 2, 'IsReleaseDucking': False})
        }

    }
}

void PlayerCamera_Move() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'TargetFovy': 55.0, 'Actor1ActorName': 'Player_Event', 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-14.199999809265137, 101.63999938964844, -11.789999961853027], 'AtVector': [-14.220000267028809, 101.43000030517578, -14.279999732971191], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 90})

        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'PosVector': [-58.619998931884766, 93.7300033569336, 62.619998931884766], 'AtVector': [-55.630001068115234, 93.47000122070312, 62.650001525878906], 'TargetFovy': 55.0, 'Actor1ActorName': 'Player_Event', 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 90})

        }

    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void ReHowToPlay2() {

    call Check_EvtTalkWonder()

    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_47', 'MaintainPerformanceState': 0})
    goto Event105
}

void ReHowToPlay3() {

    call Check_EvtTalkWonder()

    Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_47', 'MaintainPerformanceState': 0})
    goto Event247
}

void FINISH_UI() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_FirstTimeClear'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'MiniGame_HitTarget_BestScore', 'Operator': 2}) {
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HitTarget_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})

                call Change_FInishUI_NoRecord()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1, 'Value': True})
            } else {
                Event582:

                call Change_FInishUI_NoRecord()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HitTarget_HrlCity_NewScore', 'Index': -1, 'Value': False})
            }
        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HitTarget_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            goto Event582
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_FirstTimeClear'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'Operator': 2, 'GameDataB': 'MiniGame_HitTarget_Kakariko_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_HitTarget_Kakariko_BestScore'})

            call Change_FInishUI_NoRecord()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore'})
        } else {
            Event583:

            call Change_FInishUI_NoRecord()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_NewScore', 'Value': False})
        }
    } else {
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MiniGame_HitTarget_Kakariko_BestScore'})
        goto Event583
    }
}

void Ready_Child_Talk() {
    Obj_Door_ShopHitTarget[RestrictedDoor_Market_03].EventDoorClose({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_Minigame_HitTarget_IsTalk'})
    Event209:
    if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'EndTme': 6, 'StartTime': 20}) {

        call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})

        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_80', 'MaintainPerformanceState': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NeverPlayed'}) {

        call InitTalk.InitTalk_NoMaskTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_37', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Check_NeverPlayed()

            Event555:
            if !Player_Event.EventQueryPlayerIsChild() {
                if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
                    Event17:

                    call Check_NoMoney()

                    Event253:
                    if !Player_Event.EventQueryPlayerIsChild() {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'})
                            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'}) {

                                call RetryTalk3()

                            } else {

                                call RetryTalk2()

                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_TalkedAboutRules'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'}) {
                                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_24', 'MaintainPerformanceState': 0})
                                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})

                                call RetryTalk3()

                            } else {
                                Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_23', 'MaintainPerformanceState': 0})
                                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})

                                call RetryTalk2()

                            }
                        } else
                        if Npc_Hylia_019_Shop_Child.EventQueryIsOnRecentTalkFlag() {
                            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_00', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                        }
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_25', 'MaintainPerformanceState': 0})
                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_HitTarget_FirstTalk'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_HitTarget_FirstTalk'})
                        }
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_03', 'MaintainPerformanceState': 0})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_Get_BulletBag'}) {
                            Event54:
                            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_100', 'MaintainPerformanceState': 0})

                            call AboutPrize()

                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_TalkedAboutRules'})
                            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                            goto Event550
                        } else {
                            Event103:

                            call AboutPrize()

                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_TalkedAboutRules'})
                            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                            goto Event543
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_SulkyBefore'})
                        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'}) {

                            call RetryTalk3()

                        } else {

                            call RetryTalk2()

                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_TalkedAboutRules'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'}) {
                            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_24', 'MaintainPerformanceState': 0})
                            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})

                            call RetryTalk3()

                        } else {
                            Npc_Hylia_019_Shop_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_05', 'MaintainPerformanceState': 0})
                            UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})

                            call RetryTalk2()

                        }
                    } else
                    if !Npc_Hylia_019_Shop_Child.EventQueryIsOnRecentTalkFlag() {
                        Event263:
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_01', 'MaintainPerformanceState': 0})
                        Event327:
                        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Range_Bow', 'Num': 1}) {
                            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_03', 'MaintainPerformanceState': 0})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_Kakariko_Get_Quiver'}) {
                                goto Event54
                            } else {
                                goto Event103
                            }
                        } else {

                            call CheckBow()

                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_HitTarget_Ready_Npc_Hylia_019_Shop_Child_Talk_Event195', 'Index': -1}) {
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_00', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                        goto Event263
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MiniGame_HitTarget_Ready_Npc_Hylia_019_Shop_Child_Talk_Event195', 'Value': True, 'Index': -1})
                        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Adult:Talk_00', 'MaintainPerformanceState': 0})
                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_MiniGame_HitTarget_FirstTalk'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_MiniGame_HitTarget_FirstTalk'})
                        }
                        goto Event327
                    }
                } else
                Event215:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_NoMoney'}) {

                    call NoMoney()

                } else
                goto Event253
            } else
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {
                goto Event17
            } else
            goto Event215
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_49', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitPerson'}) {

        call InitTalk.InitTalk_NoMaskTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_69', 'MaintainPerformanceState': 0})
        Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_62', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Check_MasterAngry()

            goto Event555
        } else {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_13', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
        }
    } else {

        call InitTalk.InitTalk_NoMaskTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitParsonOutGame'}) {
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_13', 'ASName': 'Wait', 'MaintainPerformanceState': 0})
            Npc_Hylia_019_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_019_Shop_Child:Talk_68', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_HitTarget_HrlCity_HitParsonOutGame'})
            goto Event555
        } else
        goto Event555
    }
}

void Ready_Adult_Talk() {
    Obj_Kakariko_Door_A_06.EventDoorClose({'IsWaitEnd': True})
    goto Event209
}

void Check_EvtTalkWonder() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
    }
}

void GetRupy_HitTarget() {
    Npc_Hylia_019_Shop_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Hylia_019_Shop_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Handover'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtGet', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'GetRupee'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void PlayerCameraReset_NoKeep() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.690000057220459, -3.7899999618530273], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.2100000381469727, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    }
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}
