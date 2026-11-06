-------- EventFlow: Minigame_FindOutCucco --------

Actor: Npc_Hylia_Talon_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSelectSchedule', 'EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventTriggerNPCChangePosture', 'EventTriggerParticipateEvent', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerSetModelLodManual']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryGameDataIntBranch', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventReserveBancChange', 'EventTriggerRequestAutoSave', 'EventWait', 'EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe', 'EventQueryIsAnyBottleEmpty', 'EventQueryHasAnyBottle']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventOpenNumDisplayForShop', 'EventOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerSetting', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI', 'EventExecuteProgressChallengeStep', 'EventTriggerMiniGameTimerStop', 'EventExecuteRollbackChallengeStep', 'EventTriggerProgressChallengeStep', 'EventTriggerUnshowTimerUI']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestFallLiftActor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerHealLife', 'EventPlayerDie', 'EventPlayerPlayASForFlowchart', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerSetTimerInvalidDoAction']
queries: ['EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Animal_SuperCucco[Animal_SuperCucco_01]
entrypoint: None()
actions: ['EventCuccoJumpToAnchor', 'EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventSuperCuccoStopJumpLoop', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_SuperCucco[Animal_SuperCucco_02]
entrypoint: None()
actions: ['EventCuccoJumpToAnchor', 'EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventSuperCuccoStopJumpLoop', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_SuperCucco[Animal_SuperCucco_03]
entrypoint: None()
actions: ['EventCuccoJumpToAnchor', 'EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventSuperCuccoStopJumpLoop', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerAIScheduleSetAwaken']
queries: ['EventQueryIsOnMaskTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Obj_LonLon_Door_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_01]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_02]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_03]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_04]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_05]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_06]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_07]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_08]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_09]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cucco_FindOutCucco[Animal_Cucco_10]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerParticipateEvent', 'EventCuccoForceInitializeBrain', 'EventCuccoSleepShotFlockCucco', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventTriggerStartInGameBgm', 'EventTriggerSoundStopBGM', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Minigame_FindOutCucco_Hit() {

    fork {
        EventCamera.EventTriggerCameraSavePoint()
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_Hylia_Talon_Child.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Target': 2, 'Direction': 30.0, 'ResetArriveTransformFixed': False})

    fork {
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Minigame_FindOutCucco_Counter'}) {
          case 0:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_48', 'MaintainPerformanceState': 0})
          case 1:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_49', 'MaintainPerformanceState': 0})
          case 2:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_50', 'MaintainPerformanceState': 0})
        }
    } {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': False})
    }


    fork {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_Hylia_Talon_Child', 'TargetOffset': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 1.0, 'ToleranceDistance': 1.0})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Minigame_FindOutCucco_Counter'}) {
      case 0:
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_04', 'ASName': 'Act_Cuccogame_Success', 'MaintainPerformanceState': 0})
        Event4:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Minigame_FindOutCucco_Counter', 'Value': 1, 'Index': -1})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Minigame_FindOutCucco_Counter_Navi'})

        fork {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }


        call Sub_Minigame_Cucco_TimerAndUI_Start()

      case 1:
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_05', 'ASName': 'Act_Cuccogame_Success', 'MaintainPerformanceState': 0})
        goto Event4
      case 2:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_06', 'ASName': 'Act_Cuccogame_Success', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Minigame_FindOutCucco_Counter_Navi'})

        call Finish_Npc_Hylia_Talon_Child_StepStart()

    }
}

void Minigame_FindOutCucco_Start() {
    if !PouchSystemActor.EventQueryHasAnyBottle() {
        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 3, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
    } else {
        UISystemActor.EventOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True, 'IsWaitEnd': True, 'IsWaitOpenAnim': False})
    }
    Event325:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsClear_Minigame_FindOutCucco', 'Index': -1}) {
        if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
            Event14:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_18', 'ChoiceNumber': 3, 'ChoiceLabel2': 14, 'ChoiceLabel3': 2, 'MaintainPerformanceState': 1})
            Event6:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                if !PouchSystemActor.EventQueryHasRuppe({'Value': 10}) {

                    call NpcCommon.NpcCommon_HandOver_PlayerToNpc({'PaidRupee': -10, 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'NpcReceiveASName': 'Receive'})

                    Event262:
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_33', 'MaintainPerformanceState': 0})

                    call FindOutCucco_Navi_Reset()

                    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
                    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_45', 'MaintainPerformanceState': 0})
                    Obj_LonLon_Door_A_01.EventDoorClose({'IsWaitEnd': True})

                    call Sub_Minigame_Cucco_InitializeCuccoPos()

                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Minigame_FindOutCucco', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetReady'})
                    Npc_Hylia_Talon_Child.EventTriggerAIScheduleSelectSchedule()
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    Npc_Hylia_Talon_Child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Npc_Hylia_Talon_Child.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
                    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Minigame_FindOutCucco_Player_Pos', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
                    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Minigame_FindOutCucco_Player_Pos', 'IsDisguisedPlayerPos': True, 'Target': 3})

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'TargetFovy': 55.0, 'PosVector': [-55.05421829223633, 151.62530517578125, 197.89759826660156], 'AtVector': [-53.28947067260742, 151.62179565429688, 198.27760314941406], 'IsEnableRevertFast': False})
                    } {
                        PostProcessingActor.EventNorifyCutChangeForGraphics()
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    fork {
                        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_02', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                    } {
                        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1800})
                        ChallengeSystemActor.EventTriggerShowTimerUI()
                    }

                    Npc_Hylia_Talon_Child.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_59', 'IsWaitEnd': False, 'MaintainPerformanceState': 0, 'IsCloseDialog': False, 'EndDialogOption': 1, 'ASName': 'Act_Cuccogame_Start'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_MiniGame', 'CommandLife': 2, 'IsReleaseDucking': True})

                    fork {
                        Animal_SuperCucco[Animal_SuperCucco_01].EventCuccoJumpToAnchor({'InstanceName': '', 'AnchorType': 0, 'IsWaitEnd': False})
                    } {
                        Animal_SuperCucco[Animal_SuperCucco_02].EventCuccoJumpToAnchor({'InstanceName': '', 'AnchorType': 0, 'IsWaitEnd': False})
                    } {
                        Animal_SuperCucco[Animal_SuperCucco_03].EventCuccoJumpToAnchor({'InstanceName': '', 'AnchorType': 0, 'IsWaitEnd': False})
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                    fork {
                        Animal_SuperCucco[Animal_SuperCucco_01].EventSuperCuccoStopJumpLoop({'IsWaitEnd': False})
                    } {
                        Animal_SuperCucco[Animal_SuperCucco_02].EventSuperCuccoStopJumpLoop({'IsWaitEnd': False})
                    } {
                        Animal_SuperCucco[Animal_SuperCucco_03].EventSuperCuccoStopJumpLoop({'IsWaitEnd': False})
                    }

                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Minigame_FindOutCucco', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Playing'})
                } else {
                    Event12:
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_17', 'MaintainPerformanceState': 0})
                    Event13:
                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                    call Sub_Minigame_Cucco_Reset()

                }
              case 1:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_ListenPlayGuide'}) {
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_52', 'MaintainPerformanceState': 0})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_ListenPlayGuide', 'Value': True})
                }
                Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_42', 'MaintainPerformanceState': 0})
                Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_43', 'MaintainPerformanceState': 0})
                Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_29'})
                if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsClear_Minigame_FindOutCucco', 'Index': -1}) {
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_30'})
                }
                goto Event325
              case 2:
                Event101:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_16', 'MaintainPerformanceState': 0})
                SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
                goto Event13
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_ListenPlayGuide'}) {
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel2': 14, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_55', 'MaintainPerformanceState': 0})
        } else {
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel2': 14, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_54', 'MaintainPerformanceState': 0})
        }
        goto Event6
    } else {
        goto Event14
    }
}

void Sub_Minigame_Cucco_Quit() {
    goto Event101
}

void Sub_Minigame_Cucco_RupeeShortage() {
    goto Event12
}

void Sub_Minigame_Cucco_Start() {
    goto Event262
}

void Retry_Npc_Hylia_Talon_Child_StepStart() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Hylia_Talon_Child.EventTriggerParticipateEvent()
    Npc_Hylia_Talon_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'TargetFovy': 55.0, 'Actor1ActorName': '', 'AtVector': [-54.13808059692383, 151.99209594726562, 199.0019989013672], 'PosVector': [-54.75775909423828, 152.10809326171875, 198.8592987060547], 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Npc_Hylia_Talon_Child.EventNPCTurnToTarget({'ActorName': 'Player_Event', 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2, 'IsConfront': False, 'IsWaitEnd': True})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_03', 'MaintainPerformanceState': 0})

    call Sub_Minigame_Cucco_Initialize()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': False, 'IsFadeIn': False, 'ResumeDelay': 0})
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_07', 'MaintainPerformanceState': 0})
    if !PouchSystemActor.EventQueryHasAnyBottle() {
        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 3, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
    } else {
        UISystemActor.EventOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True, 'IsWaitEnd': True, 'IsWaitOpenAnim': False})
    }
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_19', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'MaintainPerformanceState': 1})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 5}) {

            call NpcCommon.NpcCommon_HandOver_PlayerToNpc({'NpcReceiveASName': 'Receive', 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'PaidRupee': -5})

            Npc_Hylia_Talon_Child.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Normal_Wait'})

            call Sub_Minigame_Cucco_Reset()


            call Sub_Minigame_Cucco_Start()

        } else {

            call Sub_Minigame_Cucco_RupeeShortage()

        }
    } else {

        call Sub_Minigame_Cucco_Quit()

    }
}

void Playing_Npc_Hylia_Talon_Child_EachFrame() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Minigame_FindOutCucco_IsPlaying'}) {
        Event37:
        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Minigame_FindOutCucco', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Retry'})
        } else {
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event37
        }
    }
}

void Finish_Npc_Hylia_Talon_Child_StepStart() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Minigame_FindOutCucco', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Finish'})
    Npc_Hylia_Talon_Child.EventTriggerSetModelLodManual({'LodLevel': 0})

    call Sub_Minigame_Cucco_Initialize()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsClear_Minigame_FindOutCucco', 'Index': -1}) {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_10', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
        if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_11', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': 'Handover', 'MaintainPerformanceState': 0})

            call NpcCommon.NpcCommon_HandOver_NpcToPlayer_EmptyBottle({'Item': 10, 'ReceiveItem': 'Item_Bottle_Milk', 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'NPCActorName': 'Npc_Hylia_Talon_Child'})

            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_16', 'MaintainPerformanceState': 0})
            Event76:

            call Sub_Minigame_Cucco_Reset()

        } else {
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_56', 'MaintainPerformanceState': 0})
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_58', 'MaintainPerformanceState': 0})
            goto Event76
        }
    } else {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_08', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
        }
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_09', 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_09_2', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

        call NpcCommon.NpcCommon_HandOver_NpcToPlayer_NoDisplay({'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'ReveiveItem': 'Item_Bottle_Milk', 'NpcActorName': 'Npc_Hylia_Talon_Child', 'ASName': 'Wait', 'NpcInstanceName': ''})

        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_28', 'MaintainPerformanceState': 0})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_16', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsClear_Minigame_FindOutCucco', 'Index': -1, 'Value': True})
        goto Event76
    }
}

void Ready_Npc_Hylia_Talon_Child_Talk() {
    Obj_LonLon_Door_A_01.EventTriggerParticipateEvent()
    if !EventWorldManagerController.EventQueryTimeDivision() {
        Event420:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_FindOutCucco_GameOver', 'Index': -1}) {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_69'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_GameOver', 'Value': False})
            Event84:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsClear_Minigame_FindOutCucco', 'Index': -1}) {
                if !Npc_Hylia_Talon_Child.EventQueryIsOnRecentTalkFlag() {

                    call Mask_Taron()

                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_14', 'MaintainPerformanceState': 0})
                    Event52:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        UISystemActor.EventOpenNumDisplayForShop({'ShopType': 3, 'IsWaitEnd': True, 'IsNeedMaxNum': False})
                        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_20', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MaintainPerformanceState': 1})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkYes', 'ClothWarpMode': 0})
                            if !PouchSystemActor.EventQueryHasRuppe({'Value': 30}) {
                                if !PouchSystemActor.EventQueryIsAnyBottleEmpty() {

                                    call NpcCommon.NpcCommon_HandOver_PlayerToNpc({'NpcReceiveASName': 'Receive', 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'PaidRupee': -30})

                                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_12', 'ASName': '', 'MaintainPerformanceState': 0})

                                    call Dm_SY_GetInEvent.GetInEventInBottle({'ActorName': 'Item_Bottle_Milk', 'BottleItem': 10, 'IsTalkCamera': True})

                                    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                                    Event65:
                                    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Value': False, 'Index': -1})
                                } else {
                                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_57', 'MaintainPerformanceState': 0})
                                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_58', 'MaintainPerformanceState': 0})
                                    goto Event65
                                }
                            } else {
                                Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_17', 'MaintainPerformanceState': 0})
                                goto Event65
                            }
                        } else {
                            Event373:
                            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkNo', 'ClothWarpMode': 0})
                            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_16', 'MaintainPerformanceState': 0})
                            goto Event65
                        }
                      case 1:
                        Event68:

                        call Minigame_FindOutCucco_Start()

                      case 2:
                        goto Event373
                    }
                } else
                if !Player_Event.EventQueryPlayerIsEquipMask() {

                    call Mask_Taron()

                    Event188:
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_13', 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'MaintainPerformanceState': 0})
                    goto Event52
                } else {
                    Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})

                    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hylia_Talon_Child_FocedWakeUp'}) {
                        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_00', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                    }
                    goto Event188
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Minigame_FindOutCucco_Ready_Npc_Hylia_Talon_Child_Talk_Event48', 'Index': -1}) {

                call Mask_Taron()

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hylia_Talon_Child_FocedWakeUp'}) {
                    Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_01', 'MaintainPerformanceState': 0})
                    Event223:
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_42', 'MaintainPerformanceState': 0})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_43', 'MaintainPerformanceState': 0})
                    Event124:
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_29', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_ListenPlayGuide', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MiniGame_Unlock_FindOutCucco'})
                    if !Npc_Hylia_Talon_Child.EventQueryIsOnRecentTalkFlag() {
                        goto Event68
                    } else {

                        call NpcCommon.SuggestCamera_Start_NPCLookOnly({'TurnTarget': 3, 'TurnTargetActorName': 'Item_OrnamentalBottle_Milk', 'TurnTargetInstanceName': 'LonLon_Milk', 'CameraAtVector': [-51.47999954223633, 151.72999572753906, 198.1199951171875], 'CameraTargetActorName': 'DestinationAnchor', 'CameraTargetInstanceName': 'suggest_LonLonMilk_CameraPos', 'MoveTotargetPosType': 0, 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child")})

                        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_30', 'MaintainPerformanceState': 0})

                        call NpcCommon.SuggestCamera_Reset_NPCLookOnly({'TurnTargetActorName': 'Npc_Hylia_Talon_Child', 'NpcActor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'TurnTargetInstanceName': ''})

                        goto Event68
                    }
                } else {
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_68'})
                    goto Event223
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Minigame_FindOutCucco_Ready_Npc_Hylia_Talon_Child_Talk_Event48', 'Value': True, 'Index': -1})
                if !Player_Event.EventQueryPlayerIsEquipMask() {

                    call Mask_Taron()

                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_51', 'MaintainPerformanceState': 0})
                    Event67:
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_42', 'MaintainPerformanceState': 0})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_43', 'MaintainPerformanceState': 0})
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_27', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Minigame_FindOutCucco_Ready_Npc_Hylia_Talon_Child_Talk_Event66', 'Value': True, 'Index': -1})
                    goto Event124
                } else {
                    Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})

                    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hylia_Talon_Child_FocedWakeUp'}) {
                        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_00', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
                    }
                    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_15', 'MaintainPerformanceState': 0})
                    goto Event67
                }
            }
        } else
        if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
            switchcall NpcCommon.CheckEquipmentMask() {
              case [3745441359, 1844135360, 3362507297]:

                call SleepTalk()

                goto Event84
              case 488279774:
                goto Event84
            }
        } else
        goto Event84
    } else
    if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


        call NpcCommon.Mask_Truth({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_05', 'ASName': 'Rest_Sleep'})

        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_26', 'ASName': '', 'MaintainPerformanceState': 0})
          case 1:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_21', 'ASName': '', 'MaintainPerformanceState': 0})
          case 2:
            Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_22', 'ASName': '', 'MaintainPerformanceState': 0})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 0})

        goto Event420
    }
}

void Sub_Minigame_Cucco_Reset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LiftUp_SuperCucco1', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'LiftUp_SuperCucco2', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'LiftUp_SuperCucco3', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Minigame_FindOutCucco_Counter', 'Index': -1, 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_ListenPlayGuide', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Value': False, 'Index': -1})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Minigame_FindOutCucco', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': True})

    call Minigame_FindOutCucco_AutoSave()

}

void Sub_Minigame_Cucco_TimerAndUI_Stop() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
}

void Sub_Minigame_Cucco_Initialize() {
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_46', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerPlayerRequestFallLiftActor()

    call Sub_Minigame_Cucco_InitializeCuccoPos()

    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Npc_Hylia_Talon_Child'})
    Player_Event.EventTriggerParticipateEvent()

    fork {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'Minigame_FindOutCucco_Player_Pos', 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Hylia_Talon_Child', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsDisguisedPlayerPos': False, 'Target': 0})
    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.190000057220459, 0.8100000023841858, -1.4299999475479126], 'AtVector': [0.019999999552965164, 0.8899999856948853, 0.8500000238418579], 'TargetFovy': 37.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

        Npc_Hylia_Talon_Child.EventTriggerBecomeSpeaker()

        fork {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    Npc_Hylia_Talon_Child.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Ready_Npc_Hylia_Talon_Child_Near() {
    if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
        if !EventWorldManagerController.EventQueryTimeDivision() {
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Hylia_Talon_Child:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Talon_Child:Near_01'})
        }
    }
}

void Sub_Minigame_Cucco_InitializeCuccoPos() {

    fork {
        Animal_SuperCucco[Animal_SuperCucco_01].EventTriggerParticipateEvent()
        Animal_SuperCucco[Animal_SuperCucco_01].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_01].EventSuperCuccoStopJumpLoop({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_01].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_SuperCucco[Animal_SuperCucco_02].EventTriggerParticipateEvent()
        Animal_SuperCucco[Animal_SuperCucco_02].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_02].EventSuperCuccoStopJumpLoop({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_02].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_SuperCucco[Animal_SuperCucco_03].EventTriggerParticipateEvent()
        Animal_SuperCucco[Animal_SuperCucco_03].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_03].EventSuperCuccoStopJumpLoop({'IsWaitEnd': True})
        Animal_SuperCucco[Animal_SuperCucco_03].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }


    fork {
        Animal_Cucco_FindOutCucco[Animal_Cucco_01].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_01].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_01].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_01].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_01].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_02].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_02].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_02].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_02].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_02].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_03].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_03].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_03].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_03].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_03].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_04].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_04].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_04].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_04].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_04].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_05].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_05].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_05].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_05].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_05].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_06].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_06].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_06].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_06].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_06].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_07].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_07].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_07].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_07].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_07].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_08].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_08].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_08].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_08].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_08].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_09].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_09].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_09].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_09].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_09].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Animal_Cucco_FindOutCucco[Animal_Cucco_10].EventTriggerParticipateEvent()
        Animal_Cucco_FindOutCucco[Animal_Cucco_10].EventCuccoForceInitializeBrain({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_10].EventCuccoSleepShotFlockCucco({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_10].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Animal_Cucco_FindOutCucco[Animal_Cucco_10].EventPlayAS({'ASName': 'Wait_ModelOnlyLOD', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void Minigame_FindOutCucco_GameOver() {
    Player_Event.EventPlayerDie({'IsWaitEnd': True, 'SkipResetDebugMode': True})

    call Sub_Minigame_Cucco_TimerAndUI_Stop()

    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_MiniGame'})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_34', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerHealLife({'Value': 4})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': '', 'IsStartOnEvent': False, 'NextBanc': 'HyruleField_Child', 'NextStartPos': 'FindCuccoStartPos', 'EventStarterName': '', 'FadePattern': 3, 'IsItemWarp': False})

    call Sub_Minigame_Cucco_Reset()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_FindOutCucco_GameOver', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void FindOutCucco_Navi_Reset() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Minigame_FindOutCucco_Counter_Navi'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Minigame_FindOutCucco_HasPlayed_Navi'})
}

void Playing_Npc_Hylia_Talon_Child_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_40', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})

    call Sub_Minigame_Cucco_TimerAndUI_Start()

}

void Minigame_FindOutCucco_CheckDoor() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call InitTalk.InitTalk_OnEvent_NoCamera({'Arg_Turn': 4, 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_47', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Talon_Child"), 'ActorName': 'Npc_Hylia_Talon_Child', 'InstanceName': ''})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    } {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-0.09000000357627869, 0.9300000071525574, 1.4600000381469727], 'AtVector': [-0.07999999821186066, 0.9399999976158142, 2.059999942779541], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_37', 'ChoiceLabel1': 13, 'ChoiceLabel2': 12, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_MiniGame', 'IsUseSuspendFade': False})
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_39', 'MaintainPerformanceState': 0})

        fork {

            call Sub_Minigame_Cucco_InitializeCuccoPos()


            call Sub_Minigame_Cucco_Reset()


            call Sub_Minigame_Cucco_TimerAndUI_Stop()

        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.17000000178813934, 1.100000023841858, 2.4800000190734863], 'AtVector': [-0.12999999523162842, 0.9100000262260437, 0.009999999776482582], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

    } else {
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_40', 'MaintainPerformanceState': 0})

        fork {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Minigame_FindOutCucco_WalkLoopCount'})
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'AnchorInstanceName': 'Minigame_BackToFindOutCucco', 'MoveSpeed': 0.5, 'DecSpeedDistance': 1.0, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False})
        Event403:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_FindOutCucco_PlayerInside'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Minigame_FindOutCucco_WalkLoopCount', 'Value': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Minigame_FindOutCucco_WalkLoopCount', 'Value': 2}) {
              case 0:
                goto Event403
              case [1, 2]:
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'Minigame_BackToFindOutCucco'})
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsDisguisedPlayerPos': True, 'Target': 3, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Minigame_BackToFindOutCucco'})

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.2999999523162842, -2.5], 'AtVector': [0.0, 0.699999988079071, 1.0], 'IsEnableRevertFast': False})
                } {
                    PostProcessingActor.EventNorifyCutChangeForGraphics()
                }

                GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Event220:

                call Sub_Minigame_Cucco_TimerAndUI_Start()

                Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 30.0})
            }
        } else {
            goto Event220
        }
    }
}

void Sub_Minigame_Cucco_TimerAndUI_Start() {
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void Minigame_FindOutCucco_AutoSave() {
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Mask_Taron() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Talon_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Talon_Child_GlassTruth'})
            if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
                Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Index': -1, 'Value': True})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_11', 'MaintainPerformanceState': 0})
                Event286:
                Npc_Hylia_Talon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:GlassTruth', 'MaintainPerformanceState': 0})
            } else {
                goto Event286
            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'})
    && !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
        if Npc_EventStarter.EventQueryIsOnMaskTalkFlag() {
            Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        }
        Event247:
        switchcall NpcCommon.Truth_MaskOnly_Talk_Common_With_InitTalk({'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_05', 'ASName': '', 'Arg_Turn_For_IgnoreMaskTalk': 4}) {
          case 457761688:
            if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
                Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Index': -1, 'Value': True})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_11', 'MaintainPerformanceState': 0})
                Event306:
                Npc_Hylia_Talon_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            } else {
                goto Event306
            }
          case 508094545:
            if !Npc_Hylia_Talon_Child.EventQueryIsPlayingSameAS({'ASName': 'Rest_Sleep', 'Partial': ''}) {
                Npc_Hylia_Talon_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Index': -1, 'Value': True})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_11', 'MaintainPerformanceState': 0})
                Event297:

                call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Talon_Child:Mask_103', 'ASName': 'TalkMonolog'})

            } else {
                goto Event297
            }
        }
    } else {
        goto Event247
    }
}

void SleepTalk() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_26', 'MaintainPerformanceState': 0, 'ASName': 'Rest_Sleep'})
        Event327:
        Npc_EventStarter.EventTriggerAIScheduleSetAwaken({'Bool': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hylia_Talon_Child_FocedWakeUp', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case 1:
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_21', 'MaintainPerformanceState': 0, 'ASName': 'Rest_Sleep'})
        goto Event327
      case 2:
        Npc_Hylia_Talon_Child.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Talon_Child:Talk_22', 'MaintainPerformanceState': 0, 'ASName': 'Rest_Sleep'})
        goto Event327
    }
}
