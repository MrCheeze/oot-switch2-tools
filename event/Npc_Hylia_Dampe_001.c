-------- EventFlow: Npc_Hylia_Dampe_001 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorActionAll', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestCameraShake', 'EventSendEventTalkMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Npc_Hylia_Dampe_001_C1_T/Npc_Hylia_Dampe_001_C1_T/workspace.pp__ModelProject.gyml'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Dampe_001
entrypoint: None()
actions: ['EventMiniGameDiggingHoleDigOut', 'EventMiniGameDiggingHoleLearnResponsePoint', 'EventTalk', 'EventMiniGameDiggingHoleAdventActor', 'EventMiniGameDiggingHoleEntryBalloonMessage', 'EventTriggerMiniGameDiggingHoleBalloonMessage', 'EventMiniGameDiggingHoleWaitASTriggerDig', 'EventMiniGameDiggingHoleWaitASDig', 'EventMiniGameDiggingHoleChangeSoilState', 'EventTriggerLookAtObject', 'EventMiniGameDiggingHoleRequestDeleteHeartPiece', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventMiniGameDiggingHoleGoPointPlayerSelected', 'EventMiniGameDiggingHoleResetPointPlayerSelected', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventMiniGameDiggingHoleInitialize']
queries: ['EventQueryMiniGameDiggingHoleNearPoint', 'EventQueryMiniGameDiggingHoleLottery', 'EventQueryMiniGameDiggingStoredRandomChoice3', 'EventQueryMiniGameDiggingHoleCheckLearnResponsePoint', 'EventQueryMiniGameDiggingHoleSimpleLottery', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryMiniGameDiggingHoleFindNearDemoLocator', 'EventQueryMiniGameDiggingHoleIsPlayerEitherSideOfLocator', 'EventQueryMiniGameDiggingHoleFindNearPoint', 'EventQueryMiniGameDiggingHoleFindSafetyNearestPos', 'EventQueryMiniGameDiggingHoleIsExistPoint', 'EventQueryCheckTerrorLevel', 'EventQueryMiniGameDiggingHoleIsSameNearestPointPlayerAndDampe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSendErrorToEventResource', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3', 'EventQueryTalkChoice4', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerOpenRupeeDisplay', 'EventTriggerCloseRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviMoveAroundToPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerMoveToOffsetAnchor', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithGrab']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[Dm_Locator_Soil_B]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Dm_Locator_Soil_A]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Dm_Locator_Soil_C]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryIsActorInFront']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Invisible_Hylia_Dampe_001
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeSharp
entrypoint: None()
actions: ['EventTriggerDeleteSelf']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Obj_Spirit_PoeFlat
entrypoint: None()
actions: ['EventTriggerDeleteSelf']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Npc_Hylia_030_Child
entrypoint: None()
actions: []
queries: ['EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController[Foliage]
entrypoint: None()
actions: ['Event_SetFoliageTurfParamForFlowchart', 'Event_ResetFoliageTurfParamForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[MiniGame_DampeRace_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Move_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_WorkPlace_Arrival'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_17'})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_03'})
        }
      case [2, 3, 22]:
        switch Npc_Hylia_Dampe_001.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_01'})
          case 1:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_15'})
          case 2:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_16'})
        }
      case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ダンペイ：アクターアクションがelseに入っています'})
    }
}

void Move_Talk() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_MinigameIconOn', 'Value': True})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event14', 'Index': -1}) {
        Event66:
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorActionAll() {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_WorkPlace_Arrival'}) {
                Event189:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event33', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_50', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_49', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event33', 'Value': True, 'Index': -1})
                }
            } else
            Event192:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event30', 'Index': -1}) {
                if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_13', 'MaintainPerformanceState': 0})
                } else {
                    Event205:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_14', 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_11', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event30', 'Value': True, 'Index': -1})
                goto Event205
            }
          case 1:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event202', 'Index': -1}) {
                goto Event192
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_82', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event202', 'Value': True, 'Index': -1})
            }
          case [2, 3, 22]:

            call Talk_WorkPlace_Arrival()

          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ダンペイ：アクターアクションがelseに入っています'})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_00', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event14', 'Value': True, 'Index': -1})
        goto Event66
    }
}

void MiniGame_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_02'})
}

void MiniGame_Check() {

    fork {
        Player_Event.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Dampe_001.EventTriggerParticipateEvent()
    } {
        SignBoard_EventStarter.EventTriggerParticipateEvent()
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'Npc_Hylia_Dampe_001', 'CheckDistance': 2.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'SignBoard_EventStarter', 'InstanceNameB': ''}) {
        Event177:

        fork {

            call Common_Camera_Pln.CameraDoF_Event_Normal()

        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        } {

            call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Dampe_001"), 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': ''})

        }

        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Drop_HeartPiece'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_DigFromTalk'}) {
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_81', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                Event494:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_DigFromTalk', 'Value': False})
                if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
                    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                    PouchSystemActor.EventTriggerIncreaseRupee({'Value': -10})

                    call DiggingHoleTour_Preparation()

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleLottery({'LotteryHitSoil_RupeeGoldRate': 0.0, 'LotteryHitSoil_RupeeRate': 95.0, 'LotteryHitSoil_RupeeGreenRate': 18.0, 'LotteryHitSoil_RupeeBlueRate': 38.0, 'LotteryHitSoil_RupeeRedRate': 32.0, 'LotteryHitSoil_RupeePurpleRate': 12.0}) {
                      case 0:
                        Event125:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_04', 'DisplayFrame': 360, 'IsWaitEnd': True})
                        }
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Think_Wait', 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        Event68:
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Played'})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventTriggerMiniGameDiggingHoleBalloonMessage({'DefaultMessageID': '', 'DefaultDisplayFrame': 60})
                        } else {

                            call AllSoilDug()

                        }
                      case 1:
                        Event120:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'ActorName': 'Obj_Rupee_Green', 'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'DisplayFrame': 360, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_06'})
                        }
                        Event415:
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Joy_Wait', 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        goto Event68
                      case 2:
                        Event121:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'ActorName': 'Obj_Rupee_Blue', 'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'DisplayFrame': 360, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_07'})
                        }
                        goto Event415
                      case 3:
                        Event122:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'ActorName': 'Obj_Rupee_Red', 'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'DisplayFrame': 360, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_08'})
                        }
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Joy_Wait', 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        goto Event68
                      case 4:
                        Event231:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'IsWaitEnd': True, 'ActorName': 'Obj_Rupee_Purple'})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'DisplayFrame': 360, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_18'})
                        }
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Joy_Wait', 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        goto Event68
                      case 5:
                        Event232:
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'ASName': 'Act_Dig_Danpei', 'IsWaitEnd': False})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'IsWaitEnd': True, 'ActorName': 'Obj_Rupee_Gold'})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASDig({'IsWaitEnd': True})
                        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleEntryBalloonMessage({'DisplayFrame': 360, 'IsWaitEnd': True, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_19'})
                        }
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Surprise_Wait', 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        goto Event68
                      case 6:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Drop_HeartPiece'}) {

                            call DiggingHoleTour_Drop_HeartPiece()

                        } else {
                            Npc_Hylia_Dampe_001.EventPlayAS({'ASName': 'Act_Dig_Danpei_Response', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                            Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                            fork {
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_43', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                            } {

                                call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

                                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': ''})
                            }

                            Event48:
                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingStoredRandomChoice3() {
                              case 0:
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_22', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 5}) {
                                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': -5})
                                        Event314:
                                        switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
                                          case 0:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_A'})
                                            Event90:
                                            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'NotPlayLipSyncAnim': True, 'IsNotBecomeSpeaker': True, 'IsAnonymous': True, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_24', 'MaintainPerformanceState': 0})
                                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                            call DiggingHoleTour_Demo({'DropActorName': 'Obj_Heart_Piece'})

                                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'IsWaitEnd': True, 'ActorName': 'Obj_Heart_Piece'})
                                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})

                                            fork {
                                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                                            } {
                                                switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
                                                  case 0:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_A', 'PosOffset': [0.0, -1.0, 0.0]})
                                                  case 1:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_B', 'PosOffset': [0.0, -1.0, 0.0]})
                                                  case 2:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_C', 'PosOffset': [0.0, -1.0, 0.0]})
                                                }
                                            }

                                            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

                                            call DiggingHoleTour_Demo_AfterDigging_MoveToTargetPosCamera()

                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                                            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_26', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

                                            fork {

                                                call Dm_SY_GetInEvent.GetInEvent_NotTurn_NotNpc_Dampe({'ActorName': 'Obj_Heart_Piece', 'IsNpcEventStarter': False})

                                            } {
                                                GameSystemActor[MiniGame_DampeRace_wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
                                                Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleRequestDeleteHeartPiece({'IsWaitEnd': True})
                                            }

                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                                            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_28', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                                            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
                                            Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
                                            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [-2.0, 1.399999976158142, -3.799999952316284], 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
                                            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
                                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Drop_HeartPiece'})
                                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Played'})
                                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
                                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                                            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
                                            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 54})
                                          case 1:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_B'})
                                            goto Event90
                                          case 2:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_C'})
                                            goto Event90
                                        }
                                    } else {
                                        Event103:
                                        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_29', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleLearnResponsePoint({'IsWaitEnd': True})
                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_MiniGame_Talk_Event60', 'Value': True, 'Index': -1})
                                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                                    }
                                } else {
                                    Event499:
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0]})
                                    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_25', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                                    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleLearnResponsePoint({'IsWaitEnd': True})
                                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                                }
                              case 1:
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_30', 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
                                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': -10})
                                        goto Event314
                                    } else {
                                        goto Event103
                                    }
                                } else {
                                    goto Event499
                                }
                              case 2:
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_39', 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 20}) {
                                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                                        goto Event314
                                    } else {
                                        goto Event103
                                    }
                                } else {
                                    goto Event499
                                }
                            }
                        }
                      case 7:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Drop_HeartPiece'}) {

                            call DiggingHoleTour_Drop_HeartPiece()

                        } else {
                            Npc_Hylia_Dampe_001.EventPlayAS({'ASName': 'Act_Dig_Danpei_Response', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                            Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                            fork {
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_43', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                            } {

                                call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

                                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': ''})
                            }

                            Event259:
                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingStoredRandomChoice3() {
                              case [0, 1]:
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_22', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 5}) {
                                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': -5})
                                        Event346:
                                        switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
                                          case 0:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_A'})
                                            Event114:
                                            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'NotPlayLipSyncAnim': True, 'IsNotBecomeSpeaker': True, 'IsAnonymous': True, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_24', 'ASName': '', 'MaintainPerformanceState': 0})
                                            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                            call DiggingHoleTour_Demo({'DropActorName': 'Dm_Obj_Graveyard_Rock_A_01'})

                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
                                            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleAdventActor({'IsWaitEnd': True, 'ActorName': 'Dm_Obj_Graveyard_Rock_A_01'})
                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

                                            fork {
                                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                                                EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 0, 'Power': 0.10000000149011612, 'IsRumbleController': True, 'Pattern': 2})
                                            } {
                                                switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
                                                  case 0:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_A', 'PosOffset': [0.0, -1.0, 0.0]})
                                                  case 1:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_B', 'PosOffset': [0.0, -1.0, 0.0]})
                                                  case 2:
                                                    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_C', 'PosOffset': [0.0, -1.0, 0.0]})
                                                }
                                            }

                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 220})

                                            call DiggingHoleTour_Demo_AfterDigging_MoveToTargetPosCamera()

                                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                                            if !GameSystemActor.EventQueryRandomChoice2() {
                                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_52', 'MaintainPerformanceState': 0})
                                            } else {
                                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_23', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                                            }
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                                            switch GameSystemActor.EventQueryRandomChoice3() {
                                              case 0:
                                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_56', 'MaintainPerformanceState': 0})
                                                Event73:
                                                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Played'})
                                                if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsExistPoint() {
                                                    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                                                } else {

                                                    call AllSoilDug()

                                                }
                                              case 1:
                                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_57', 'MaintainPerformanceState': 0})
                                                goto Event73
                                              case 2:
                                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_58', 'MaintainPerformanceState': 0})
                                                goto Event73
                                            }
                                          case 1:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_B'})
                                            goto Event114
                                          case 2:
                                            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'Target': 3, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_C'})
                                            goto Event114
                                        }
                                    } else {
                                        goto Event103
                                    }
                                } else {
                                    goto Event499
                                }
                              case 2:
                                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_30', 'ChoiceLabel3': 11, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                    if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
                                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': -10})
                                        goto Event346
                                    } else {
                                        goto Event103
                                    }
                                } else {
                                    goto Event499
                                }
                            }
                        }
                      case 8:

                        call DiggingHoleTour_Drop_HeartPiece()

                      case 9:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_27', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                        PouchSystemActor.EventTriggerIncreaseRupee({'Value': 10})
                        EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
                        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    }
                } else {
                    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_29', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0})
                    Event167:
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
                }
            } else {

                fork {
                    Npc_Hylia_Dampe_001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_01', 'IsWaitEnd': True, 'ChoiceLabel2': 12, 'MaintainPerformanceState': 0})
                } {

                    call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

                }

                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event494
                } else {
                    Event495:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_51', 'MaintainPerformanceState': 0})
                    goto Event167
                }
            }
        } else
        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleCheckLearnResponsePoint() {

            call BigHitChance_ShortCut1()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_DigFromTalk'}) {
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_81', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            goto Event494
        } else {

            fork {
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel2': 12, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
            } {

                call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

            }

            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event494
            } else {
                goto Event495
            }
        }
    } else {

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_Hylia_Dampe_001_Play_Face_Talk_By_AI', 'Index': -1, 'Value': True})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Hylia_Dampe_001', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        } {
            switch Npc_Hylia_Dampe_001.EventQueryCheckTerrorLevel() {
              case 0:
                switch Npc_Invisible_Hylia_Dampe_001.EventQueryAvoidDuplicationRandomChoice3() {
                  case 0:
                    Npc_Invisible_Hylia_Dampe_001.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_65', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'MaintainPerformanceState': 0})
                  case 1:
                    Npc_Invisible_Hylia_Dampe_001.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_67', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'MaintainPerformanceState': 0})
                  case 2:
                    Event520:
                    Npc_Invisible_Hylia_Dampe_001.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_66', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'MaintainPerformanceState': 0})
                }
              case [1, 2, 3, 4, 5]:
                goto Event520
            }
        }

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_Hylia_Dampe_001_Play_Face_Talk_By_AI', 'Value': False, 'Index': -1})
        switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleNearPoint() {
          case 0:
            if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsSameNearestPointPlayerAndDampe() {
                Event383:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start'}) {
                    goto Event177
                } else {
                    DevelopEventSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ミニゲーム中でない時に「掘れる土」がDoで調べられています。本来は生成されていない想定です。'})
                }
            } else {
                Event518:
                Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleGoPointPlayerSelected({'IsWaitEnd': True})
            }
          case [1, 2]:
            goto Event518
        }
    }
}

void Near_WorkPlace_Arrival() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_End'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_17'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Dampe_001:Near_00'})
    }
}

void Talk_WorkPlace_Arrival() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_MinigameIconOn', 'Value': True})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event14', 'Index': -1}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Event187:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_End'}) {
            goto Event189
        } else {
            switchcall NpcCommon.CheckEquipmentMask() {
              case [3745441359, 1844135360, 488279774]:

                call NpcCommon.Mask_Talk_Common({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Dampe_001:Mask_103'})

                Event92:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Talk_WorkPlace_Arrival_Event23', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Drop_HeartPiece'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 6, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_83', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_35', 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                    }
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        Event475:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                        Event144:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_33', 'MaintainPerformanceState': 0})
                        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate'})
                        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleInitialize({'IsWaitEnd': True})
                        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
                        Npc_Hylia_Dampe_001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_WorkPlace_Arrival'}) {

                            fork {
                                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'Warp_Link'})
                                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': '', 'IsDoNavi': True})
                            } {
                                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Warp_Dampe', 'ClothWarpMode': -1})
                                Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1, 'Target': 3, 'IsConfront': True, 'ActorName': 'Player_Event', 'InstanceName': ''})
                            }

                        }
                        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'PosVector': [-2.0, 1.7999999523162842, -3.799999952316284], 'IsEnableRevertFast': False})
                        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})

                        call Delete_SharpFlat_Spirit()

                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_TourEnd_Use_SongOfSun', 'Value': False})
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'PlayDiggingHole', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
                      case 1:
                        Event168:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_Kirakira'}) {
                            Event135:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_36', 'MaintainPerformanceState': 0})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_37', 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 3, 'ChoiceLabel3': 13, 'MaintainPerformanceState': 0})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_38', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'MaintainPerformanceState': 0})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event475
                                } else {
                                    Event493:
                                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_42', 'MaintainPerformanceState': 0})
                                }
                              case 1:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_40', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                                goto Event135
                              case 2:
                                goto Event493
                            }
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_Kirakira'})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_32', 'MaintainPerformanceState': 0})
                            goto Event135
                        }
                      case 2:
                        Event491:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_41', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Talk_WorkPlace_Arrival_Event23', 'Value': True, 'Index': -1})
                    EventCamera.EventTriggerCameraSavePoint()

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'PosVectorSetType': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-10.479999542236328, 115.73999786376953, 14.34000015258789], 'AtVector': [-8.0, 113.3499984741211, 13.220000267028809], 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'PosVector': [0.0, 2.5, 0.0], 'AtVector': [0.0, 2.5, 0.0], 'MoveTime': 360, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
                    } {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_15'})
                    } {
                        EventWorldManagerController[Foliage].Event_SetFoliageTurfParamForFlowchart({'Index': 2, 'IsWaitEnd': False})
                    }

                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
                    EventWorldManagerController[Foliage].Event_ResetFoliageTurfParamForFlowchart({'IsWaitEnd': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_16'})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_06', 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel1': 5, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event144
                      case 1:
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                        goto Event168
                      case 2:
                        goto Event491
                    }
                }
              case 3362507297:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_Hylia_Dampe_001_IsAfterFirstExplain', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_76', 'MaintainPerformanceState': 0})
                    goto Event92
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_07', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_Hylia_Dampe_001_IsAfterFirstExplain', 'Index': -1, 'Value': True})
                    goto Event92
                }
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_00', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_Move_Talk_Event14', 'Value': True, 'Index': -1})
        goto Event187
    }
}

void DiggingHoleTour_Drop_HeartPiece() {
    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleSimpleLottery({'RupeeGoldRate': 0.0, 'RupeePurpleRate': 12.0, 'RupeeGreenRate': 18.0, 'RupeeRedRate': 32.0, 'RupeeBlueRate': 38.0}) {
      case 0:
        goto Event125
      case 1:
        goto Event120
      case 2:
        goto Event121
      case 3:
        goto Event122
      case 4:
        goto Event231
      case 5:
        goto Event232
    }
}

void BigHitChance_ShortCut1() {

    fork {
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_44', 'MaintainPerformanceState': 0})
    } {

        call NpcCommon.NpcCommon_PlayerTalk_WaitFrame({'Frames': 30})

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': ''})
    }

    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleLottery({'LotteryHitSoil_RupeeRate': 75.0, 'LotteryHitSoil_RupeeGreenRate': 15.0, 'LotteryHitSoil_RupeeBlueRate': 45.0, 'LotteryHitSoil_RupeeRedRate': 40.0, 'LotteryHitSoil_RupeePurpleRate': 0.0, 'LotteryHitSoil_RupeeGoldRate': 0.0}) {
      case [0, 1, 2, 3, 4, 5, 8, 9]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': ''})
      case 6:
        goto Event48
      case 7:
        goto Event259
    }
}

void DiggingHoleTour_Demo_Internal() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'SceneName': 'Dm_Dampe_Dig_Camera', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Npc_Hylia_Dampe_001'})
    } {

        fork {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'DestinationAnchorNamePlayer', 'ASCommand': 'EvtWait'})
        } {
            if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsPlayerEitherSideOfLocator() {
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'IsDisguisedPlayerPos': True, 'ActorName': 'DestinationAnchor', 'Target': 3, 'InstanceName': 'DestinationAnchorNamePlayer', 'YAngle': 0.0, 'PosOffset': [-0.30000001192092896, 0.0, 0.5]})
            } else {
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'IsDisguisedPlayerPos': True, 'ActorName': 'DestinationAnchor', 'Target': 3, 'InstanceName': 'DestinationAnchorNamePlayer', 'YAngle': 0.0, 'PosOffset': [-0.20000000298023224, 0.0, 0.30000001192092896]})
            }
        }

        EventCamera.EventTriggerCameraSavePoint()
        switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
          case 0:
            Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -1.0, 0.0], 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_A'})
          case 1:
            Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -1.0, 0.0], 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_B'})
          case 2:
            Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, -1.0, 0.0], 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_Soil_C'})
        }
    } {
        Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'DestinationAnchorNameCenter', 'ClothWarpMode': -1})
    }


    fork {
        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleDigOut({'IsWaitEnd': False, 'ASName': 'Act_Dig_Danpei_Event'})
        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleWaitASTriggerDig({'IsWaitEnd': True})

        fork {
            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
              case 0:
                Dm_Locator[Dm_Locator_Soil_A].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Smoke_00', 'SLinkKey': ''})
                Dm_Locator[Dm_Locator_Soil_A].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Trail_00', 'SLinkKey': ''})
              case 1:
                Dm_Locator[Dm_Locator_Soil_B].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Smoke_00', 'SLinkKey': ''})
                Dm_Locator[Dm_Locator_Soil_B].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Trail_00', 'SLinkKey': ''})
              case 2:
                Dm_Locator[Dm_Locator_Soil_C].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Smoke_00', 'SLinkKey': ''})
                Dm_Locator[Dm_Locator_Soil_C].EventTriggerEmitXLink({'ELinkKey': 'Dm_Dampe_DigTour_Trail_00', 'SLinkKey': ''})
            }
        } {
            Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleChangeSoilState({'IsWaitEnd': True, 'SoilState': 1})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 255})
        EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'ApplyType': 0, 'Pattern': 1, 'IsRumbleController': True, 'Power': 0.30000001192092896})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtSurprise', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'TargetActorName': 'Npc_Hylia_Dampe_001', 'SceneName': 'Dm_Dampe_DigStart_Camera'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 1, 'TargetFovy': 37.0, 'AtVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'DemoLocatorName', 'PosVectorSetType': 3, 'PosVector': [0.0, 1.1399999856948853, 3.200000047683716], 'AtVector': [0.0, 0.5799999833106995, 0.699999988079071], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
    } {
        Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'DestinationAnchorNameDampe', 'ClothWarpMode': -1})
    } {
        Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 3, 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 1.100000023841858, 0.0], 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False, 'InstanceName': 'DemoLocatorName'})
    }

}

void DiggingHoleTour_Demo() {

    call Common_Camera_Pln.CameraDoF_Default()

    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
      case 0:
        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsPlayerEitherSideOfLocator() {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_A_Right', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_A_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_A_Left', 'DemoLocatorName': 'Dm_Locator_Soil_A'})

        } else {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_A_Left', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_A_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_A_Right', 'DemoLocatorName': 'Dm_Locator_Soil_A'})

        }
      case 1:
        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsPlayerEitherSideOfLocator() {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_B_Right', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_B_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_B_Left', 'DemoLocatorName': 'Dm_Locator_Soil_B'})

        } else {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_B_Left', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_B_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_B_Right', 'DemoLocatorName': 'Dm_Locator_Soil_B'})

        }
      case 2:
        if !Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleIsPlayerEitherSideOfLocator() {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_C_Right', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_C_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_C_Left', 'DemoLocatorName': 'Dm_Locator_Soil_C'})

        } else {

            call DiggingHoleTour_Demo_Internal({'DropActorName': 'DropActorName', 'DestinationAnchorNameDampe': 'Dm_Anchor_Locator_Soil_C_Left', 'DestinationAnchorNameCenter': 'Dm_Anchor_Locator_Soil_C_Center', 'DestinationAnchorNamePlayer': 'Dm_Anchor_Locator_Soil_C_Right', 'DemoLocatorName': 'Dm_Locator_Soil_C'})

        }
    }
}

void DiggingHoleTour_Demo_AfterDigging_MoveToTargetPosCamera() {
    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearDemoLocator() {
      case 0:
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 1, 'AtVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'Actor1InstanceName': 'Dm_Locator_Soil_A', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.0, 0.9399999976158142, 2.0], 'PosVector': [0.0, 1.5, 4.5], 'IsEnableRevertFast': False})
      case 1:
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 1, 'AtVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'Actor1InstanceName': 'Dm_Locator_Soil_B', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVector': [0.0, 1.5, 4.5], 'AtVector': [0.0, 0.9399999976158142, 2.0], 'IsEnableRevertFast': False})
      case 2:
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 1, 'AtVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'PosVectorSetType': 3, 'Actor1InstanceName': 'Dm_Locator_Soil_C', 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.0, 0.9399999976158142, 2.0], 'PosVector': [0.0, 1.5, 4.5], 'IsEnableRevertFast': False})
    }
}

void MiniGame_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Dampe_001_MiniGame_Talk_Event266', 'Index': -1, 'Value': False})
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_68', 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceLabel4': 17, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 16, 'ChoiceNumber': 4, 'ChoiceLabel4': 17, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_74', 'ChoiceLabel2': 14, 'ChoiceLabel1': 20, 'MaintainPerformanceState': 0})
    Event265:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleNearPoint() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_DigFromTalk'})
            goto Event177
          case 1:
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_88'})
          case 2:
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_47', 'MaintainPerformanceState': 0})
            } else {
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_46', 'MaintainPerformanceState': 0})
            }
        }
      case 1:
        UISystemActor.EventTriggerCloseRupeeDisplay()
        EventCamera.EventTriggerCameraSavePoint()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'PosVectorSetType': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'MoveTime': 1, 'PosVector': [-6.449999809265137, 104.54000091552734, 5.960000038146973], 'AtVector': [-3.940000057220459, 102.83999633789062, 8.369999885559082], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_75', 'MaintainPerformanceState': 0})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 1, 'IsRestoreDoF': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceLabel3': 16, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_84'})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_71', 'ChoiceLabel3': 16, 'ChoiceNumber': 4, 'ChoiceLabel4': 17, 'ChoiceLabel2': 14, 'ChoiceLabel1': 20, 'MaintainPerformanceState': 0})
        goto Event265
      case 2:
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        } else {
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_34', 'MaintainPerformanceState': 0})
        }
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_59', 'MaintainPerformanceState': 0})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
        Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [-2.0, 1.399999976158142, -3.799999952316284], 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case 3:
        UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_51', 'MaintainPerformanceState': 0})
    }
}

void MiniGame_PlayAreaCheck() {
    Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Hylia_Dampe_001', 'CheckDistance': 20.0}) {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 90.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_Dampe_001'}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 30, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 60, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
        }
        Event390:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_78', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 19, 'ChoiceLabel2': 18})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'ActorName': 'Npc_Hylia_Dampe_001', 'IsDoNavi': True})
        }

        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 18, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 19, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_80', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
            Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 1.399999976158142, -3.799999952316284], 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
            Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 18, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 19, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_79', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_AreaCheck_Lear'}) {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'ASCommand': 'EvtWait', 'InstanceName': 'Lear'})
            } else {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ActorName': 'StartPos', 'ASCommand': 'EvtWait', 'InstanceName': 'Front'})
            }
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.399999976158142, -3.799999952316284], 'AtVector': [0.0, 1.5, 0.0], 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GraveYard_DiggingHoleTour_AreaCheck_Lear'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'PosVector': [0.0, 1.5, 3.0], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        goto Event390
    }
}

void MinigameIconOn_WoodSignboard() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {

        call SignboardWood.Demo_LookSignboard()


        call SignboardWood.Talk_NoLookReadableOnlyFront()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_MinigameIconOn', 'Value': True})
    } else {

        call SignboardWood.ReadBackSide()

    }
}

void DiggingHole_EndAnnounce() {
    Player_Event.EventTriggerParticipateEvent()
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_TourEnd_Use_SongOfSun'}) {
        Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True, 'FaceControlType': 1})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 8.0, 'ActorNameB': 'Npc_Hylia_Dampe_001'}) {
            if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 90.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_Dampe_001'}) {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 30, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 60, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
            }
            Event405:

            call InitTalk.InitTalk_OnEvent_NoCamera({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_77', 'ActorName': 'Npc_Hylia_Dampe_001', 'InstanceName': '', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Dampe_001"), 'Arg_Turn': 1})

            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [-2.0, 1.399999976158142, -3.799999952316284], 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'PosVector': [0.0, 1.5, 3.0], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
            goto Event405
        }
    }
}

void DiggingHoleTour_Preparation() {
    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearPoint() {
      case 0:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_A', 'SoilInstanceName': 'Soil_A', 'LocatorInstanceName': 'Locator_Soil_A'})

      case 1:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_B', 'SoilInstanceName': 'Soil_B', 'LocatorInstanceName': 'Locator_Soil_B'})

      case 2:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_C', 'SoilInstanceName': 'Soil_C', 'LocatorInstanceName': 'Locator_Soil_C'})

      case 3:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_D', 'SoilInstanceName': 'Soil_D', 'LocatorInstanceName': 'Locator_Soil_D'})

      case 4:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_E', 'SoilInstanceName': 'Soil_E', 'LocatorInstanceName': 'Locator_Soil_E'})

      case 5:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_F', 'SoilInstanceName': 'Soil_F', 'LocatorInstanceName': 'Locator_Soil_F'})

      case 6:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_G', 'SoilInstanceName': 'Soil_G', 'LocatorInstanceName': 'Locator_Soil_G'})

      case 7:

        call DiggingHoleTour_Preparation_Internal({'AnchorInstanceName': 'Anchor_Soil_H', 'SoilInstanceName': 'Soil_H', 'LocatorInstanceName': 'Locator_Soil_H'})

      case 8:

        call DiggingHoleTour_Preparation_Internal({'SoilInstanceName': 'Soil_BigHit_A', 'AnchorInstanceName': 'Anchor_Soil_BigHit_A', 'LocatorInstanceName': 'Dm_Locator_Soil_A'})

      case 9:

        call DiggingHoleTour_Preparation_Internal({'SoilInstanceName': 'Soil_BigHit_B', 'AnchorInstanceName': 'Anchor_Soil_BigHit_B', 'LocatorInstanceName': 'Dm_Locator_Soil_B'})

      case 10:

        call DiggingHoleTour_Preparation_Internal({'SoilInstanceName': 'Soil_BigHit_C', 'AnchorInstanceName': 'Anchor_Soil_BigHit_C', 'LocatorInstanceName': 'Dm_Locator_Soil_C'})

    }
}

void DiggingHoleTour_Preparation_Internal() {
    switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleNearPoint() {
      case 0:
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsOffCenterCamera': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsWaitEnd': False, 'IsUseAfterPlayerTurn': True})

        fork {
            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindSafetyNearestPos({'OffsetFromPoint': 1.5}) {
              case 0:
                Player_Event.EventPlayerMoveToOffsetAnchor({'MoveSpeed': 1.0, 'IsOffsetBasedOnAnchorDir': True, 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'AnchorActorName': 'DestinationAnchor', 'ApplySlowMove': False, 'AnchorInstanceName': 'AnchorInstanceName', 'Offset': [1.7999999523162842, 0.0, 0.0]})
                Event322:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Obj_Graveyard_DiggingHoleSoil_A_01', 'InstanceName': 'SoilInstanceName', 'IsDoNavi': False})
              case 1:
                Player_Event.EventPlayerMoveToOffsetAnchor({'MoveSpeed': 1.0, 'IsOffsetBasedOnAnchorDir': True, 'Offset': [0.0, 0.0, -1.5], 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'AnchorActorName': 'DestinationAnchor', 'ApplySlowMove': False, 'AnchorInstanceName': 'AnchorInstanceName'})
                goto Event322
              case 2:
                Player_Event.EventPlayerMoveToOffsetAnchor({'MoveSpeed': 1.0, 'IsOffsetBasedOnAnchorDir': True, 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'AnchorActorName': 'DestinationAnchor', 'ApplySlowMove': False, 'AnchorInstanceName': 'AnchorInstanceName', 'Offset': [-1.7999999523162842, 0.0, 0.0]})
                goto Event322
              case 3:

                fork {
                    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, -1.5], 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'LocatorInstanceName', 'TargetActorKind': 1})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 2, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsDisguisedPlayerPos': True, 'InstanceName': 'LocatorInstanceName', 'YAngle': 0.0, 'PosOffset': [0.0, 0.0, -1.5]})
                }

                goto Event322
            }
        } {
            Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1, 'Target': 3, 'ActorName': 'Obj_Graveyard_DiggingHoleSoil_A_01', 'IsConfront': True, 'InstanceName': 'SoilInstanceName'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
            Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 3, 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Obj_Graveyard_DiggingHoleSoil_A_01', 'InstanceName': 'SoilInstanceName'})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'MoveTime': 1, 'EnableCameraAlpha': True, 'PosVector': [-3.0, 2.0, -2.5], 'EndRecelerateRate': 0.0, 'Actor1InstanceName': 'AnchorInstanceName', 'IsEnableRevertFast': False})
        }

      case 2:

        fork {
            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindNearPoint() {
              case 0:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_A_Warp', 'ClothWarpMode': -1})
                Event78:
                Npc_Hylia_Dampe_001.EventTriggerLookAtObject({'Target': 3, 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Obj_Graveyard_DiggingHoleSoil_A_01', 'InstanceName': 'SoilInstanceName'})
              case 1:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_B_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 2:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_C_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 3:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_D_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 4:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_E_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 5:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_F_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 6:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_G_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 7:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Anchor_Soil_H_Warp', 'ClothWarpMode': -1})
                goto Event78
              case 8:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Dm_Anchor_Locator_Soil_A_Center', 'ClothWarpMode': -1})
                goto Event78
              case 9:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Dm_Anchor_Locator_Soil_B_Center', 'ClothWarpMode': -1})
                goto Event78
              case 10:
                Npc_Hylia_Dampe_001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 1, 'InstanceName': 'Dm_Anchor_Locator_Soil_C_Center', 'ClothWarpMode': -1})
                goto Event78
            }
        } {
            switch Npc_Hylia_Dampe_001.EventQueryMiniGameDiggingHoleFindSafetyNearestPos({'OffsetFromPoint': 1.5}) {
              case 0:

                fork {
                    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': 'LocatorInstanceName', 'PositionOffset': [1.7999999523162842, 0.0, 0.0], 'YAngle': -90.0})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 2, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'IsDisguisedPlayerPos': True, 'InstanceName': 'LocatorInstanceName', 'YAngle': -90.0, 'PosOffset': [1.7999999523162842, 0.0, 0.0]})
                }

                Event587:
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Obj_Graveyard_DiggingHoleSoil_A_01', 'InstanceName': 'SoilInstanceName', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
              case 1:

                fork {
                    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': 'LocatorInstanceName', 'PositionOffset': [0.0, 0.0, -1.5]})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 1, 'Target': 2, 'ActorName': 'Dm_Locator', 'IsDisguisedPlayerPos': True, 'InstanceName': 'LocatorInstanceName', 'PosOffset': [0.0, 0.0, -1.5]})
                }

                goto Event587
              case 2:

                fork {
                    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': 'LocatorInstanceName', 'PositionOffset': [-1.7999999523162842, 0.0, 0.0], 'YAngle': 90.0})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'Target': 2, 'ActorName': 'Dm_Locator', 'IsDisguisedPlayerPos': True, 'InstanceName': 'LocatorInstanceName', 'YAngle': 90.0, 'PosOffset': [-1.7999999523162842, 0.0, 0.0]})
                }

                goto Event587
              case 3:

                fork {
                    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, -1.5], 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'LocatorInstanceName', 'TargetActorKind': 1})
                } {
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'WorldPos': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'Target': 2, 'IsDisguisedPlayerPos': True, 'OffsetBase': 1, 'PosOffset': [0.0, 0.0, -1.5], 'InstanceName': 'LocatorInstanceName'})
                }

                goto Event587
            }
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'MoveTime': 1, 'EnableCameraAlpha': True, 'PosVector': [-3.0, 2.0, -2.5], 'EndRecelerateRate': 0.0, 'Actor1InstanceName': 'AnchorInstanceName', 'IsEnableRevertFast': False})
        }

    }
}

void MiniGame_AskWantToDig() {
    goto Event383
}

void AllSoilDug() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 0, 'Target': 0, 'WorldPos': [9.720000267028809, 103.80999755859375, 7.860000133514404], 'ActorName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Hylia_Dampe_001', 'Target': 3, 'InstanceName': '', 'PosOffset': [0.0, 0.6000000238418579, 0.0]})
    Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Think_Wait', 'IsWaitEnd': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'PosVectorSetType': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'MoveTime': 1, 'PosVector': [-10.479999542236328, 117.73999786376953, 14.34000015258789], 'AtVector': [-8.0, 115.3499984741211, 13.220000267028809], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_86'})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 60, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'IsWaitEnd': True, 'ActorName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2, 'FaceControlType': 1})
    Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_87'})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate', 'Value': False})
    Npc_Hylia_Dampe_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0})
    Npc_Hylia_Dampe_001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'MoveTime': 1, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [-2.0, 1.399999976158142, -3.799999952316284], 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_Hylia_Dampe_001.EventMiniGameDiggingHoleResetPointPlayerSelected({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Delete_SharpFlat_Spirit() {
    if !GameSystemActor.EventQueryExistActor({'ActorName': 'Obj_Spirit_PoeSharp', 'IsCheckLife': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False}) {
        Obj_Spirit_PoeSharp.EventTriggerDeleteSelf()
    }
    if !GameSystemActor.EventQueryExistActor({'ActorName': 'Obj_Spirit_PoeFlat', 'IsCheckLife': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False}) {
        Obj_Spirit_PoeFlat.EventTriggerDeleteSelf()
    }
}

void NoMove_TombStorn() {
    Player_Event.EventTriggerPlayerEventStartWithGrab()
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Dampe_001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'ActorName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True, 'FaceControlType': 1})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 8.0, 'ActorNameB': 'Npc_Hylia_Dampe_001'}) {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 90.0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Hylia_Dampe_001'}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 30, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'MoveTime': 60, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'IsEnableRevertFast': False})
        }
        Event593:

        fork {
            switch Npc_Hylia_030_Child.EventQueryAvoidDuplicationRandomChoice3() {
              case 0:
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_89'})
              case 1:
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_90'})
              case 2:
                Npc_Hylia_Dampe_001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Dampe_001:Talk_91'})
            }
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'ActorName': 'Npc_Hylia_Dampe_001', 'IsDoNavi': True})
        }

    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'Player_Event', 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_Hylia_Dampe_001', 'PosVector': [0.0, 1.5, 3.0], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        goto Event593
    }
}
