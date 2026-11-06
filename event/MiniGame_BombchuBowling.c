-------- EventFlow: MiniGame_BombchuBowling --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerAIScheduleSetAwaken', 'EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleIsWokeUp', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventReserveBancChange', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventOpenPlayerStatusMiniGame', 'EventClosePlayerStatusMiniGame', 'EventExecuteRollbackChallengeStep', 'EventShowReadyGo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay', 'EventShowFinish']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerResetItemBeforeMiniGame', 'EventPlayerSetItemForMiniGame', 'EventTriggerHealLife', 'EventPlayerDie', 'EventPlayerTurnAndLook', 'EventPlayerMoveToAnchor', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerSetTimerInvalidDoAction']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Obj_HrlCity_Shop_HitTarget_A_01[1st]
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_HrlCity_Shop_HitTarget_A_01[2nd]
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_067_Shop_Child
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleSimpleGetUp', 'EventTriggerAIScheduleSetAwaken', 'EventTriggerBecomeSpeaker', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetModelLodManual']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleIsWokeUp', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/MiniGame_BomchuBowling/workspace.pp__ModelProject.gyml'}

Actor: Obj_HrlCity_Shop_Target_A_02
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_HrlCity_Shop_Target_A_03
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_HrlCity_Shop_Target_A_01
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_HrlCity_Shop_Target_A_04
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_HrlCity_Shop_Target_A_05
entrypoint: None()
actions: ['EventMiniGameBombchuBowlingDisableTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Door_ShopBombBoring[RestrictedDoor_Market_01]
entrypoint: None()
actions: ['EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Ready_Npc_Hylia_021_Shop_Child_Talk() {

    call BackMove_Check({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Obj_Door_ShopBombBoring[RestrictedDoor_Market_01].EventDoorClose({'IsWaitEnd': True})
    Obj_HrlCity_Shop_Target_A_01.EventTriggerParticipateEvent()
    if !Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
        Event33:

        call AfterWakeUp()

    } else
    if !Npc_Hylia_067_Shop_Child.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {

        call Sleeping()

    } else {
        goto Event33
    }
}

void MiniGame_BombchuBowling_Hit1stTarget() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerParticipateEvent()
    Obj_HrlCity_Shop_Target_A_01.EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
    Obj_HrlCity_Shop_HitTarget_A_01[1st].EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
}

void MiniGame_BombchuBowling_Hit2ndTarget() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerParticipateEvent()
    Obj_HrlCity_Shop_Target_A_02.EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
    Obj_HrlCity_Shop_HitTarget_A_01[2nd].EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
}

void MiniGame_BombchuBowling_Hit3rdTarget() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CuccoDucking', 'Value': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'PosVector': [-28.989999771118164, 102.4800033569336, 4.980000019073486], 'AtVector': [-41.540000915527344, 102.4800033569336, 4.980000019073486], 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-34.900001525878906, 102.4800033569336, 4.980000019073486], 'AtVector': [-41.540000915527344, 102.4800033569336, 4.980000019073486], 'TargetFovy': 55.0, 'MoveTime': 90, 'StartAccelerateRate': 1.0, 'IsEnableRevertFast': False})
    } {
        Obj_HrlCity_Shop_Target_A_03.EventPlayAS({'ASName': 'Hit', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': True})
        Npc_Hylia_067_Shop_Child.EventAIScheduleSimpleGetUp({'IsChangeMotionType': False, 'IsChangeMoveState': False, 'IsWaitEnd': True})
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_35', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-40.34000015258789, 100.44999694824219, 5.0]})
        Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'BombchuBowling_Hit3rdTarget_00'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_ItemGet_Medium', 'CommandLife': 2, 'IsReleaseDucking': False})
    UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 0, 'MiniGameType': 3})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Warp_MasterFront()


    call MiniGame_BombchuBowling_End()

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CuccoDucking', 'Value': False})

    call MiniGame_BombchuBowling_GetPrise()

}

void MiniGame_BombchuBowling_GetPrise() {
    Npc_Hylia_067_Shop_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

    call MiniGame_BombchuBowling_WeaponRollback()

    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_01', 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Handover', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_01_2', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearThirdTime'}) {

                call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActorName': 'Npc_Hylia_067_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ReveiveItem': 'Obj_Rupee_Red'})

                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Event93:

                call MiniGameClearCount()

                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_17', 'MaintainPerformanceState': 0})
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_70', 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
                Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
            } else {

                call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ReveiveItem': 'Obj_Heart_Piece', 'NpcActorName': 'Npc_Hylia_067_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

                goto Event93
            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_BombBag_Medium'}) {

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'ASName': 'Wait', 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ReveiveItem': 'Item_BombBag_Large', 'NpcActorName': 'Npc_Hylia_067_Shop_Child', 'NpcInstanceName': ''})

        } else {

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'ReveiveItem': 'Item_BombBag_Medium', 'ASName': 'Wait', 'NpcInstanceName': '', 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'NpcActorName': 'Npc_Hylia_067_Shop_Child'})

        }
        goto Event93
    } else {

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'ReveiveItem': 'Item_BombchuBundle_Medium', 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'NpcActorName': 'Npc_Hylia_067_Shop_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

        goto Event93
    }
}

void MiniGame_BombchuBowling_End() {
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'MiniGame_BombchuBowling', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready'})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_BombchuBowling_Progress', 'Index': -1, 'Value': 0})
    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})

    call MiniGame_BombchuBowling_WeaponRollback()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_GimickRegeneration', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Rule', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Prize', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_JustAfterCleared', 'Index': -1, 'Value': True})
    Obj_HrlCity_Shop_Target_A_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_GimickRegeneration', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CuccoDucking', 'Value': False})
}

void MiniGame_BombchuBowling_GiveupTalk_TryOpenDoor() {

    call IrregularWakeUp()


    call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_25', 'Arg_Turn': 1, 'ActorName': 'Npc_Hylia_067_Shop_Child', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child")})


    call Camera_LookMaster()

    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_44', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'ASName': 'Act_Think_Wait', 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call GiveUp_Door()

    } else {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 1})

        call Continue_Door()

        Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 30.0})
    }
}

void AfterWakeUp() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Market_MiniGame_BombchuBowling_FirstTalk'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Market_MiniGame_BombchuBowling_FirstTalk'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchBowling_Dead'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchBowling_Dead', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Prize'})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearThirdTime'}) {
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_71'})
                } else {
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_72'})
                }
                Event299:
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                Event100:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_20', 'ChoiceLabel1': 0, 'ChoiceLabel3': 1, 'MaintainPerformanceState': 0})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                        call NpcCommon.NpcCommon_Receive_PlayerToNpc({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 0, 'IsTurn': False, 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'PaidRupee': -10})

                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_03', 'MaintainPerformanceState': 0})
                        if !Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
                            Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
                            Npc_Hylia_067_Shop_Child.EventAIScheduleSimpleGetUp({'IsChangeMotionType': False, 'IsChangeMoveState': False, 'IsWaitEnd': True})
                            Event108:

                            call MiniGame_BombchuBowling_Start()

                        } else {
                            goto Event108
                        }
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_09', 'MaintainPerformanceState': 0})
                        Event177:
                        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_67', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
                        Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    }
                  case 1:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Rule'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_24', 'MaintainPerformanceState': 0})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Rule'})
                    }
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_23', 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_45', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_ExplainRentalItem'})

                    call RetryHowToPlay()

                  case 2:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_07', 'MaintainPerformanceState': 0})
                    goto Event177
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_74'})
            } else {
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_73'})
            }
            goto Event299
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Prize'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearThirdTime'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_32', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    goto Event100
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_30', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    goto Event100
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_31', 'MaintainPerformanceState': 0})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                goto Event100
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_36', 'MaintainPerformanceState': 0})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                goto Event100
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Prize'})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_JustAfterCleared', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_38', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearThirdTime'}) {
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_12', 'ASName': '', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    goto Event100
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_33', 'MaintainPerformanceState': 0})
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_05', 'MaintainPerformanceState': 0})
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_51', 'MaintainPerformanceState': 0})
                    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                    goto Event100
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_33', 'MaintainPerformanceState': 0})
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_BombBag_Medium'}) {
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_22', 'MaintainPerformanceState': 0})
                } else {
                    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_06', 'MaintainPerformanceState': 0})
                }
                Event341:
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_50', 'ASName': '', 'MaintainPerformanceState': 0})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
                goto Event100
            } else {
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_37', 'MaintainPerformanceState': 0})
                goto Event341
            }
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_63', 'MaintainPerformanceState': 0})
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_61', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_62', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'ChoiceLabel1': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_66', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_64', 'MaintainPerformanceState': 0})
            Event352:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_65', 'MaintainPerformanceState': 0})
        } else {
            goto Event352
        }
    }
}

void Sleeping() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_53', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
    Npc_Hylia_067_Shop_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wakeup'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchBowling_Dead'}) {
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_60'})
    } else {
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_10', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'Act_Surprise_Wait', 'MaintainPerformanceState': 0})
    }
    Npc_Hylia_067_Shop_Child.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})

    call AfterWakeUp()

}

void MiniGameClearCount() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_ClearThirdTime'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    }
}

void MiniGame_BombchuBowling_WeaponRollback() {
    Player_Event.EventPlayerResetItemBeforeMiniGame({'IsWaitEnd': True})
}

void MiniGame_BombchuBowling_WeaponChange() {
    Player_Event.EventPlayerSetItemForMiniGame({'IsWaitEnd': True, 'UsingItemMiniGame': 9, 'ItemNum': 10, 'IsEquipMiniGameActor': False})
}

void MiniGame_BombchuBowling_Start() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_29', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_GimickRegeneration', 'Value': True})

    call MovetoPlayArea()


    call Level_Place()


    call MiniGame_BombchuBowling_WeaponChange()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CuccoDucking', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_GimickRegeneration', 'Value': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    fork {
        ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'IsWaitEnd': True, 'MiniGameType': 3})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_Rule', 'Index': -1}) {
            Event160:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_28', 'MaintainPerformanceState': 0})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_JustAfterCleared', 'Index': -1}) {
            goto Event160
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_27', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ExplainRentalItem', 'Index': -1}) {
                Event158:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_13', 'MaintainPerformanceState': 0})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_ExplainRentalItem'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_46', 'MaintainPerformanceState': 0})
                goto Event158
            }
        }
    }

    ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 3})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_BombchuBowling', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_BombchuBowling_Progress', 'Value': 1, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime'}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 0})
            Event204:
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
          case 1:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType'})
            goto Event204
          case 2:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 2})
            goto Event204
        }
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 1})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 2})
    }
    goto Event204
}

void Playing_Npc_Hylia_067_Shop_Child_Talk() {

    call BackMove_Check({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
        Event27:
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_25', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        Event298:
        ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_26', 'MaintainPerformanceState': 0, 'ASName': ''})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
                Event43:
                Npc_Hylia_067_Shop_Child.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

                call NpcCommon.NpcCommon_HandOver_PlayerToNpc_NoTurn({'NpcReceiveASName': 'Receive', 'BeforeReceiveFrames': 60, 'NpcActor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'PaidRupee': -10})

                UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_39', 'ASName': 'Wait', 'MaintainPerformanceState': 0})

                call MiniGame_BombchuBowling_End()


                call MiniGame_BombchuBowling_Retry()


                call MovetoPlayArea()

                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_16', 'MaintainPerformanceState': 0})
                ChallengeSystemActor.EventShowReadyGo({'IsWaitEnd': True, 'MiniGameType': 3})
                if !Npc_Hylia_067_Shop_Child.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
                    Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
                }
            } else {
                Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_18', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                    Event339:

                    call GiveUp()

                } else {
                    Event394:
                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkNo', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

                    call Continue()

                }
            }
          case 1:
            goto Event339
          case 2:
            goto Event394
        }
    } else
    if !Npc_Hylia_067_Shop_Child.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {

        call Sleeping_Playing()

    } else {
        goto Event27
    }
    goto Event298
}

void MiniGame_BombchuBowling_BulletsNoneFinish() {
    UISystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False, 'Type': 1, 'MiniGameType': 3})
    Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': True})

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_21', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ActorName': 'Npc_Hylia_067_Shop_Child', 'InstanceName': ''})

    ChallengeSystemActor.EventClosePlayerStatusMiniGame({'IsWaitEnd': True})
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_34', 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

            call Newgame()

        } else {
            Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_59', 'MaintainPerformanceState': 0})
            Event119:

            call GiveUp()

        }
    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        goto Event119
    }
}

void MiniGame_BombchuBowling_GameOver() {
    Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_57', 'MaintainPerformanceState': 0})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_58', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    GameSystemActor.EventReserveBancChange({'FadePattern': 1, 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'Market_Child', 'EventStarterName': '', 'NextStartPos': 'GameOverRespawn', 'IsItemWarp': False})

    call MiniGame_BombchuBowling_End()


    call Level_Putaway()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Choise_Hardmode', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchBowling_Dead', 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void MiniGame_BombchuBowling_Hit2ndTarget_Left() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerParticipateEvent()
    Obj_HrlCity_Shop_Target_A_04.EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
    Obj_HrlCity_Shop_HitTarget_A_01[2nd].EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
}

void MiniGame_BombchuBowling_Hit2ndTarget_Right() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerParticipateEvent()
    Obj_HrlCity_Shop_Target_A_05.EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
    Obj_HrlCity_Shop_HitTarget_A_01[2nd].EventMiniGameBombchuBowlingDisableTarget({'IsWaitEnd': True})
}

void MiniGame_BombchuBowling_Retry() {

    call MiniGame_BombchuBowling_WeaponChange()

    ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'IsWaitEnd': True, 'MiniGameType': 3})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_BombchuBowling', 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MiniGame_BombchuBowling_Progress', 'Value': 1, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime'}) {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 0})
            Event227:
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
          case 1:
            GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType'})
            goto Event227
          case 2:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 2})
            goto Event227
        }
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 1})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_SecondTargetType', 'Value': 2})
    }
    goto Event227
}

void Camera_LookMaster() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_Hylia_067_Shop_Child', 'PosVector': [1.100000023841858, 1.2999999523162842, 2.75], 'AtVector': [0.6100000143051147, 1.3300000429153442, 1.4299999475479126], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void Camera_LinkANDMaster() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_067_Shop_Child', 'PosVector': [1.090000033378601, 1.1399999856948853, 3.509999990463257], 'AtVector': [-0.4399999976158142, 1.2999999523162842, -0.3799999952316284], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void MovetoPlayArea() {

    fork {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'MiniGame_Bombchu_PlayerStart', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'PosOffset': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'TurnFaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'IgnoreTargetPosMove': False, 'InstanceName': 'MiniGame_Bombchu_CameraTarget', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

        call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'MoveTime': 90, 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-20.785999298095703, 102.92790222167969, 4.969620227813721], 'AtVector': [-25.203670501708984, 102.06500244140625, 4.979680061340332], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

}

void Level_Place() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CounterSpawnFlag', 'Value': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearSecondTime', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Hard'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_ClearFirstTime', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Normal'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_BombchuBowling_Easy'})
    }
}

void Level_Putaway() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Easy', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Normal', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Hard', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_CounterSpawnFlag', 'Value': True})
}

void Newgame() {
    goto Event43
}

void Continue() {
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Event65:
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_15', 'MaintainPerformanceState': 0})

    call BeforeSleep()

    ChallengeSystemActor.EventOpenPlayerStatusMiniGame({'IsWaitEnd': True, 'MiniGameType': 3})
}

void GiveUp() {
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_48', 'MaintainPerformanceState': 0})
    Event282:
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_49', 'ASName': 'Wait', 'MaintainPerformanceState': 0})

    call Warp_MasterFront()


    call MiniGame_BombchuBowling_End()


    call Level_Putaway()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_BombchuBowling_Choise_Hardmode', 'Value': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_17', 'MaintainPerformanceState': 0})
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_70', 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
    Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
}

void MiniGame_BombchuBowling_BreakIn() {

    call IrregularWakeUp()

    Npc_Hylia_067_Shop_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_BreakIn', 'Index': -1}) {
        if !Npc_Hylia_067_Shop_Child.EventQueryAvoidDuplicationRandomChoice2() {

            call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_41', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ActorName': 'Npc_Hylia_067_Shop_Child', 'InstanceName': ''})

        } else {

            call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_42', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ActorName': 'Npc_Hylia_067_Shop_Child', 'InstanceName': ''})

        }
        Event344:
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerMoveToAnchor({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': True, 'DecSpeedDistance': 3.0, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'AnchorInstanceName': 'MiniGame_Bombchu_PlayerBack'})
        Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
        Player_Event.EventPlayerTurnAndLook({'Target': 4, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Direction': 180.0, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        if !Npc_Hylia_067_Shop_Child.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
            Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_BombchuBowling_BreakIn', 'Index': -1, 'Value': True})

        call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_40', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_067_Shop_Child"), 'ActorName': 'Npc_Hylia_067_Shop_Child', 'InstanceName': ''})

        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_43', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        goto Event344
    }
}

void RetryHowToPlay() {
    goto Event100
}

void Sleeping_Playing() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_53', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
    Npc_Hylia_067_Shop_Child.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wakeup', 'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_54', 'MaintainPerformanceState': 0})
}

void BeforeSleep() {
    switch Npc_Hylia_067_Shop_Child.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_67', 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
        Event370:
        Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': False})
      case 1:
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_68', 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
        goto Event370
      case 2:
        Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_69', 'ASName': 'Act_Counter_Wait_Sleep_Talk', 'MaintainPerformanceState': 0})
        goto Event370
    }
}

void GiveUp_Door() {
    Npc_Hylia_067_Shop_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Talk_48', 'MaintainPerformanceState': 0})
    goto Event282
}

void Warp_MasterFront() {

    fork {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'BombchuBowlingStartPos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_Hylia_067_Shop_Child', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})

        call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

    } {

        call Camera_LinkANDMaster()

        Npc_Hylia_067_Shop_Child.EventTriggerBecomeSpeaker()
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {

        call Level_Putaway()

    }

}

void Continue_Door() {
    goto Event65
}

void Ready_Npc_Hylia_067_Shop_Child_Near() {
    Event405:
    if Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_067_Shop_Child:Near_01'})
    }
}

void Playing_Npc_Hylia_067_Shop_Child_Near() {
    goto Event405
}

void BackMove_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_BackMoveCounter_PlayerPosition_Nearby', 'Index': -1}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'CheckDistance': 1.649999976158142, 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.800000011920929})

        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_EventStarter', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.899999976158142}) {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 1.0})

        } else {

            call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 1.100000023841858})

        }
    } else {

        call InitTalk.InitTalk_BackMoveCounter({'Arg_Turn': 4, 'Arg_Greeting': 4, 'OffsetDist': 0.800000011920929})

    }
}

void IrregularWakeUp() {
    Npc_Hylia_067_Shop_Child.EventTriggerAIScheduleSetAwaken({'Bool': True})
    Npc_Hylia_067_Shop_Child.EventAIScheduleSimpleGetUp({'IsChangeMotionType': False, 'IsChangeMoveState': False, 'IsWaitEnd': True})
    Npc_Hylia_067_Shop_Child.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}
