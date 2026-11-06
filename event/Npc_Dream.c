-------- EventFlow: Npc_Dream --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventReserveBancChangeForDreamWorld', 'EventTriggerRequestAutoSave', 'EventWaitTalkCameraInterpolationEnd', 'EventTriggerEnemyMuseumUpdateDefeatedStatus', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryTalkChoice4', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWaitHeartGaugeStable', 'EventTriggerOpenLocationUI', 'EventEventFadeIn', 'EventTriggerSyncPlayerEquipmentAndPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerHealLifeMax', 'EventTriggerPlayerHealMPMax', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor', 'EventWaitCreationFinishedEquipment', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerContinueWalk', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerParticipateEvent', 'EventTriggerEmitNpcOrPlayerVoice', 'EventTriggerPlayerSetTimerInvalidDoAction', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventAS': 'Work/AS/Root/Event/Npc_Dream_FirstTalk_Player.root.as', 'UseEventModelAnime': 'Work/Model/Event/Npc_Dream_FirstTalk/Npc_Dream_FirstTalk_Player_Child/workspace.pp__ModelProject.gyml'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Dream
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToHomeMatrix', 'EventTriggerEmitXLink', 'EventTriggerLookAtObject', 'EventTriggerSoundChangeAllowEmitFootStep', 'EventTriggerSoundChangeForbidEmitFootStep', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Npc_Dream_FirstTalk/Npc_Dream_FirstTalk_Npc_U_Kaepora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Npc_Dream_FirstTalk_Npc_U_Kaepora.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventSendEventTalkSignMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundWaitForBgmLayerSetFinished', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[lightsetting]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Near() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Event29:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Dream:Near_01'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False, 'IsDisplayInTerror': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Dream:Near_00'})
    } else {
        goto Event29
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_UnopendEnemyNum', 'Value': 0}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_DefeatedEnemyNum', 'Value': 84}) {
          case 0:
            GameSystemActor.EventTriggerEnemyMuseumUpdateDefeatedStatus()
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            call Dictionary_Check()

            Event44:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_22', 'ChoiceNumber': 4, 'ChoiceLabel3': 0, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'MaintainPerformanceState': 0})
                Event34:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'ChoiceLabel3': 0, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_38', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'ChoiceLabel3': 0, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_39', 'MaintainPerformanceState': 0})
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'ChoiceLabel3': 0, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_41', 'MaintainPerformanceState': 0})
                    Event149:
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'ChoiceNumber': 4, 'ChoiceLabel3': 0, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_30'})
                    goto Event34
                  case 1:
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_48', 'MaintainPerformanceState': 0})
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_DefeatedEnemyNum', 'Value': 60}) {
                      case [0, 1]:
                        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_27', 'MaintainPerformanceState': 0})
                        goto Event149
                      case 2:
                        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'DreamWorld_TotalEnemyNum', 'GameDataB': 'DreamWorld_DefeatedEnemyNum', 'Operator': 5}) {
                            Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_29', 'MaintainPerformanceState': 0})
                        } else {
                            Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_28', 'MaintainPerformanceState': 0})
                        }
                        goto Event149
                    }
                  case 2:
                    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_06', 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Escape()

                    } else
                    Event31:
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_23', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_07', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                    }
                  case 3:
                    goto Event31
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep'}) {
                Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_14', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep', 'Value': False})
                Event48:
                Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 1, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_15', 'ChoiceLabel2': 4, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
                goto Event34
            } else {
                Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 1, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_20', 'MaintainPerformanceState': 0})
                goto Event48
            }
          case [1, 2]:
            goto Event44
        }
      case 1:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DreamWorld_DefeatedEnemyNum', 'Value': 84}) {
          case 0:
            GameSystemActor.EventTriggerEnemyMuseumUpdateDefeatedStatus()
            goto Event44
          case [1, 2]:
            goto Event44
        }
    }
}

void FirstTalk() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False, 'CommandLife': 2})
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': False, 'Length': 3})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'PlayerStatus.WeaponSwordGiantLife', 'DstGameDataName': 'DreamBossStage_WeaponSwordGiantLife'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_FirstTalk'}) {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Dream.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.350000023841858, 0.0], 'PosVector': [0.0, 1.7000000476837158, -4.0], 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.75, 0.0], 'PosVector': [0.0, 2.1500000953674316, -4.5], 'IsEnableRevertFast': False})
        }
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        SoundSystemActor.EventSoundWaitForBgmLayerSetFinished({'LayerSetName': 'DemoLayerSet', 'IsWaitEnd': True, 'TimeoutFrame': 420})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0, 'Color': 0})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 15.0})
        Event37:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        SoundSystemActor.EventSoundWaitForBgmLayerSetFinished({'LayerSetName': 'DemoLayerSet', 'IsWaitEnd': True, 'TimeoutFrame': 420})

        call FirstCamera()


        call Explain()


        call Common_Camera_Pln.CameraDoF_Default()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.Npc_Dream_FirstTalk'})
        goto Event37
    }
}

void Explain() {

    fork {
        Npc_Dream.EventTriggerSoundChangeForbidEmitFootStep()
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_01'})
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_08', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.6545640230178833, 1.6446609497070312, 0.34845200181007385], 'AtVector': [3.664742946624756, 2.595196008682251, -2.4143800735473633], 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Npc_Dream', 'InstanceName': '', 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Dream.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Npc_Dream.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_31', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'TransitionFrame': 0, 'IsWaitEnd': False})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [8.334551811218262, 1.6296119689941406, -3.757067918777466], 'AtVector': [11.578390121459961, 2.0, -3.5483310222625732], 'IsPosVectorReferenceActorPosOnce': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 600, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [7.182660102844238, 2.07185697555542, -6.050300121307373], 'AtVector': [8.852142333984375, 2.0706019401550293, -9.982694625854492], 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_32', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [22.181499481201172, 4.9974517822265625, -12.413220405578613], 'AtVector': [27.04882049560547, 6.796741008758545, -15.623330116271973], 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'IsWaitEnd': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [27.04882049560547, 6.796741008758545, -15.623330116271973], 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [22.38360023498535, 5.149600028991699, -12.560400009155273], 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 350, 'IsEnableRevertFast': False})
    }

    Npc_Dream.EventTriggerSoundChangeAllowEmitFootStep()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_37'})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-24.07229995727539, 13.648599624633789, 15.825300216674805], 'AtVector': [1.9729609489440918, 2.4095299243927, -0.4600529968738556], 'MoveTime': 0, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [1.9729609489440918, 2.4095299243927, -0.4600529968738556], 'PosVector': [-25.66010093688965, 14.333800315856934, 16.81839942932129], 'MoveTime': 400, 'IsEnableRevertFast': False})
    }

    Npc_Dream.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
    PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'TargetFovy': 40.0, 'IsWaitEnd': True, 'PosVector': [-0.6562619805335999, 0.9883700013160706, 3.4270598888397217], 'AtVector': [1.6559120416641235, 1.6525150537490845, -0.9560890197753906], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsWaitEnd': True, 'TargetFovy': 40.0, 'IsAtVectorReferenceActorPosOnce': False, 'PosVector': [-0.6481810212135315, 1.2517999410629272, 3.4227499961853027], 'AtVector': [1.663925051689148, 1.915181040763855, -0.9604960083961487], 'IsEnableRevertFast': False})
    }

    call InitTalk.InitTalk_OnEvent_SetTalkCamera({'Arg_Turn': 4, 'ActorName': 'Npc_Dream', 'InstanceName': '', 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Dream:Talk_40', 'Arg_Actor': ActorIdentifier(name="Npc_Dream")})

}

void FirstCamera() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'FaceDown', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'AtVector': [0.0, 0.8500000238418579, 0.0], 'PosVector': [0.0, 0.949999988079071, 0.8999999761581421], 'IsEnableRevertFast': False})
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Npc_Dream_FirstTalk_Child', 'CurrDemoPaletteName': 'Npc_Dream_FirstTalk_Child', 'Frames': 0})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'MoveTime': 0, 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'TargetFovy': 50.0, 'PosVector': [0.0, 1.4500000476837158, 0.949999988079071], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'IsEnableRevertFast': False})
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Npc_Dream_FirstTalk_Adult', 'CurrDemoPaletteName': 'Npc_Dream_FirstTalk_Adult', 'IsWaitEnd': False, 'Frames': 0})
        }
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'IsHomePosition': True, 'OffsetType': -1})
    } {
        PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': False, 'TransitionFrame': 0})
    }

    Npc_Dream.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_Dream.EventPlayAS({'IsWaitEnd': True, 'ASName': 'pose-Npc_U_Kaepora-A-0-', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

    fork {
        if !Player_Event.EventQueryPlayerIsChild() {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'C01-Player_Child-A-0', 'IsAllSlot': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'ASCommand': 'C01-Player_Adult-A-0', 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})

            fork {
                if !Player_Event.EventQueryPlayerIsChild() {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                    Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Npc_Dream_FirstTalk_L_00'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
                    Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Npc_Dream_FirstTalk_L_01'})
                } else {
                    Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Npc_Dream_FirstTalk_L_01'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    Player_Event.EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Vo_PlAdult_Npc_Dream_FirstTalk_L_00'})
                    Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
                }
            } {
                PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
            }

        } {
            if !Player_Event.EventQueryPlayerIsChild() {
                EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.5, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'AtVector': [0.0, 1.2000000476837158, 0.0], 'PosVector': [2.0, 1.2000000476837158, 0.0], 'StartAccelerateRate': 0.0, 'MoveTime': 300, 'TargetFovy': 45.0, 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.5, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'StartAccelerateRate': 0.0, 'MoveTime': 300, 'TargetFovy': 45.0, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [2.0, 1.5, 0.0], 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': False, 'IsEnableRevertFast': False})
            }
            EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'StartAccelerateRate': 0.5, 'MoveTime': 300, 'AtVector': [0.0, 1.7000000476837158, 0.0], 'PosVector': [0.0, 1.7000000476837158, -3.5], 'TargetFovy': 40.0, 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    } {
        GameSystemActor[lightsetting].EventWait({'IsWaitEnd': True, 'Frames': 460})
        if !Player_Event.EventQueryPlayerIsChild() {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Npc_Dream_FirstTalk_Child', 'CurrDemoPaletteName': 'Npc_Dream_FirstTalk_Child_2', 'Frames': 180})
        } else {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Npc_Dream_FirstTalk_Adult', 'IsWaitEnd': False, 'CurrDemoPaletteName': 'Npc_Dream_FirstTalk_Adult_2', 'Frames': 180})
        }
    }


    fork {
        UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/DreamWorld.game__location__Location.gyml'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 460})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 120.0, 'ClothWarpMode': 0})
    }


    fork {
        Npc_Dream.EventPlayAS({'ASName': 'C01-Npc_U_Kaepora-A-0', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Dream', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_Dream.EventTriggerEmitXLink({'ELinkKey': 'Npc_Dream_FirstTalk_Feather', 'SLinkKey': ''})
    }

    PostProcessingActor.EventNorifyCutChangeForGraphics()
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
}

void BossRush() {
    Npc_Dream.EventTriggerParticipateEvent()
    Npc_EventStarter.EventTriggerBecomeSpeaker()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Npc_Dream.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': True})
    } {
        EventCamera.EventSendEventTalkSignMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Dream', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Dream'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Dream.EventTriggerBecomeSpeaker()
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'ActorNameB': 'Npc_Dream', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 3.0}) {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
            } else {
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
            }
        }

    } {
        Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 8, 'ChoiceLabel1': 7, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_04', 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Dream_BossRush_First', 'Index': -1, 'Value': True})
    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsWaitEnd': False})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'ActorName': 'Npc_EventStarter', 'Target': 1, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
}

void Escape() {
    Npc_Dream.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 1, 'ChoiceLabel3': 1, 'MessageId': 'EventFlowMsg/Npc_Dream:Talk_03', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 3, 'WaitingResumeInGameBgm': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    UISystemActor.EventEventFadeOut({'Length': 0, 'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_EnterFirst', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'LinkBed_DeepSleep', 'Value': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

    fork {
        UISystemActor.EventTriggerSyncPlayerEquipmentAndPouch()
        Player_Event.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    } {
        Player_Event.EventTriggerHealLifeMax()
        Player_Event.EventTriggerPlayerHealMPMax()
        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsDisablePouchSyncEquipment', 'Value': False, 'Index': -1})
    GameSystemActor.EventReserveBancChangeForDreamWorld({'IsWaitEnd': True, 'BootEventName': 'BedBootEvent_Alive'})
}

void OutOfFirld() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()

    fork {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVector': [0.0, 1.75, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 20, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerContinueWalk({'ASCommand': 'EvtWait', 'IsWaitEnd': True})
    }

    Npc_Dream.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'IsWaitEnd': True, 'InstanceName': '', 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    Npc_Dream.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.350000023841858, 0.0], 'PosVector': [0.0, 1.7000000476837158, -4.0], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 2.1500000953674316, -4.5], 'AtVector': [0.0, 1.75, 0.0], 'IsEnableRevertFast': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_SurvivalTalk'}) {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 205})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'ForceFadeFrame': 25.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.Npc_Dream_SurvivalTalk'})
    }
}

void OutOfFirld_Intervalroom() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()

    fork {
        UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True, 'Length': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVectorSetType': 1, 'AtVector': [0.0, 1.75, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 20, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerContinueWalk({'ASCommand': 'EvtWait', 'IsWaitEnd': True})
    }

    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'IsWaitEnd': True, 'InstanceName': '', 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DreamWorld_ResetPositionDekuSeed'})
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.350000023841858, 0.0], 'PosVector': [0.0, 1.7000000476837158, -4.0], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'PosVector': [0.0, 2.1500000953674316, -4.5], 'AtVector': [0.0, 1.75, 0.0], 'IsEnableRevertFast': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DreamWorld_ResetPositionDekuSeed'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Move', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Npc_Dream_SurvivalTalk'}) {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 205})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'ForceFadeFrame': 25.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.Npc_Dream_SurvivalTalk'})
    }
}

void Dictionary_Check() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'DreamWorld_TotalEnemyNum', 'DstGameDataName': 'DreamWorld_UnopendEnemyNum', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'DreamWorld_UnopendEnemyNum', 'GameDataB': 'DreamWorld_DefeatedEnemyNum'})
}

void ReturnFromBossRush() {
    UISystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'Color': 0, 'IsWaitEnd': False, 'Length': 3})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Npc_Dream.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.350000023841858, 0.0], 'PosVector': [0.0, 1.7000000476837158, -4.0], 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player_Event', 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'TargetFovy': 50.0, 'AtVector': [0.0, 1.75, 0.0], 'PosVector': [0.0, 2.1500000953674316, -4.5], 'IsEnableRevertFast': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0, 'Color': 0})
    Player_Event.EventTriggerPlayerSetTimerInvalidDoAction({'Frame': 15.0})
}
