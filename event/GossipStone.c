-------- EventFlow: GossipStone --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventExecuteSetTimeStruct', 'EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryMelodyTypeForNormal', 'EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerBackMoveForAnchor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerHealMPMax', 'EventTriggerHealLife', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSetTimerInvalidAttentionLockOn']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventNaviFollowPlayer', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GossipStone_FairyGenerator
entrypoint: None()
actions: ['EventGameDataSetIsBlewOcarinaToGossipStone']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventStartRecoverOrAddHeartGauge', 'EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_GossipStone_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Obj_FairySpirit
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

void Talk() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Child_Mask_Truth', 'Num': 1}) {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Child_Mask_Truth', 'ArmorSlot': 0}) {

            call InitTalk.InitTalk_GossipStone()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_MaskTruth_GossipStone'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_12', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
                Event18:
                Npc_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'GossipStone', 'IsWaitEnd': True, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'IsCloseDialog': True, 'EndDialogOption': 0})
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:GOSSIP_RumorCommon_01', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:GOSSIP_RumorCommon_02', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
                }
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_MaskTruth_GossipStone'}) {
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 232})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_MaskTruth_GossipStone'})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MessageId': 'EventFlowMsg/GossipStone:Talk_03', 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_10', 'IsOverrideStyle': True, 'OverrideStyle': 8, 'ASName': 'TalkMonolog', 'MaintainPerformanceState': 0})
                goto Event18
            }
        } else {

            call InitTalk.InitTalk_GossipStone_NaviTalk()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_MaskTruth_GossipStone'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event77', 'Index': -1}) {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_09', 'MaintainPerformanceState': 0})
                    Event65:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event3', 'Value': True, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GossipStone_NaviTalk_Temporary'})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event77', 'Value': True, 'Index': -1})
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_30', 'MaintainPerformanceState': 0})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event26', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_NaviTalk_Temporary'}) {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_19', 'MaintainPerformanceState': 0})
                } else {
                    Event88:
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_22', 'MaintainPerformanceState': 0})
                    Event86:
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_15', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event26', 'Value': True, 'Index': -1})
                    goto Event65
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event3', 'Index': -1}) {
                goto Event88
            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_13', 'MaintainPerformanceState': 0})
            }
            goto Event86
        }
    } else {

        call InitTalk.InitTalk_GossipStone_NaviTalk()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.GossipStone_Talk_Event3', 'Index': -1}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_05', 'MaintainPerformanceState': 0})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_00', 'MaintainPerformanceState': 0})
            goto Event65
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_13', 'MaintainPerformanceState': 0})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Talk_00', 'MaintainPerformanceState': 0})
            goto Event65
        }
    }
}

void ReceiveSwordDamageByPlayer() {
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call InitTalk.InitTalk_GossipStone_TimeZone()

    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': False, 'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    GameDataActor.EventExecuteSetTimeStruct({'GameDataName': 'Npc_TimeSignal', 'IsWaitEnd': True})

    call CheckTimeZone()

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 1, 'CollisionInterpolateSkip': True, 'MoveFrame': 30, 'IsRestoreDoF': False})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GossipStone_ReceiveSwordDamageByPlayer_Chain', 'Value': 3}) {
      case 0:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedNaviBalloonMessage.type212'}) {
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 212})
        }
        Event270:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'GossipStone_ReceiveSwordDamageByPlayer_Chain', 'Value': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'GossipStone_PlayingEvent'})
      case [1, 2]:
        goto Event270
    }
}

void BlewOcarinaByPlayer() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_FairySpiritAppearOk', 'Value': True})
    GossipStone_FairyGenerator.EventGameDataSetIsBlewOcarinaToGossipStone({'IsBlewOcarina': False, 'IsWaitEnd': True})
    EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})

    call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 0, 'HasRecommendedMelody': False})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 3, 4, 5] {
        GossipStone_FairyGenerator.EventGameDataSetIsBlewOcarinaToGossipStone({'IsBlewOcarina': True, 'IsWaitEnd': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_FairySpiritAppearOk'}) {
            Obj_GossipStone_A_01.EventTriggerParticipateEvent()
            Obj_FairySpirit.EventTriggerParticipateEvent()
            PostProcessingActor.EventResetToInGameParametersDoF({'TransitionFrame': 0, 'IsWaitEnd': False})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'TargetFovy': 55.0, 'IsWaitEnd': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PlayerPos', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'FairySpirit_AppearPoint', 'AtVectorSetType': 4, 'PosVector': [0.0, 1.75, 0.17499999701976776], 'AtVector': [0.0, 0.25, 0.0], 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos'})

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

            fork {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GossipStone_FairySpiritEventCheck', 'Index': -1, 'Value': True})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.25}) {
                    Player_Event.EventPlayerBackMoveForAnchor({'AnchorInstanceName': 'FairySpirit_AppearPoint', 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 0.5})
                    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                    Event94:
                    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
                } else {
                    goto Event94
                }
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'PosOffset': [0.0, 1.25, 0.0]})
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [-1.5, 1.25, -0.6000000238418579]}) {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.5, 1.25, -0.6000000238418579]}) {
                    if !Player_Event.EventQueryPlayerIsChild() {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'MoveTime': 60, 'AtVector': [0.0, 0.6000000238418579, 0.0], 'IsEnableRevertFast': False})
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 1.25, 0.0], 'MoveTime': 60, 'IsEnableRevertFast': False})
                    }
                    Event96:
                    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})

                    fork {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': True, 'Index': -1})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
                        UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
                        Player_Event.EventTriggerHealLife({'Value': 32})
                        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
                        Player_Event.EventTriggerPlayerHealMPMax()
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': False, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GossipStone_FairySpiritEventCheck', 'Value': False, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_BancChangeCheck', 'Value': True})
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 498})
                    Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 90.0})
                } else
                if !Player_Event.EventQueryPlayerIsChild() {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 0.6000000238418579, 0.5], 'PosVector': [1.25, 1.25, -0.6000000238418579], 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 1.0, 0.5], 'PosVector': [1.5, 1.25, -0.6000000238418579], 'IsEnableRevertFast': False})
                }
                goto Event96
            } else
            if !Player_Event.EventQueryPlayerIsChild() {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 0.6000000238418579, 0.5], 'PosVector': [-1.25, 1.25, -0.6000000238418579], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 1.0, 0.5], 'PosVector': [-1.5, 1.25, -0.6000000238418579], 'IsEnableRevertFast': False})
            }
            goto Event96
        }
    }
}

void CheckTimeZone() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HrlField_isFirstNightTime_Adult', 'Index': -1}) {

            call Check_TimeZone_FirstMarket_Adult()

            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/GossipStone:Reaction_10'})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/GossipStone:Reaction_12'})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GossipStone_FirstMarketStone_TimeCheck', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'GossipStone_FirstMarketStone_TimeCheck', 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/GossipStone:Reaction_11'})
            }
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 12, 'GameDataName': 'Npc_TimeSignal.Hour', 'Index': -1}) {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/GossipStone:Reaction_38'})
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/GossipStone:Reaction_39'})
        }
    } else {

        call Check_TimeZone_BeforeMeetZelda()

    }
}

void Check_TimeZoneBranch() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_02'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_03'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_04'}) {
                    switch GameSystemActor.EventQueryRandomChoice3() {
                      case 0:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'TimeZone_2'})
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'TimeZone_3'})
                      case 2:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'TimeZone_4'})
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Reaction_Common_04', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_04'})
                    Event11:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'TimeZone_1'})
                    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_01'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_01'})
                    }
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Reaction_Common_03', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_03'})
                goto Event11
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Reaction_Common_02', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GossipStone_CheckTimeZone_02'})
            goto Event11
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Reaction_Common_01', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
        goto Event11
    }
}

void Check_TimeZone_BeforeMeetZelda() {
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 59, 'Hour': 2}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_08'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'Hour': 3, 'CompareOparator': 5, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_01'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 8, 'Minute': 59}) {

        call Check_TimeZoneBranch({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_02', 'TimeZone_2': 'EventFlowMsg/GossipStone:Reaction_18', 'TimeZone_3': 'EventFlowMsg/GossipStone:Reaction_17', 'TimeZone_4': 'EventFlowMsg/GossipStone:Reaction_16'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 9, 'Minute': 59}) {

        call Check_TimeZoneBranch({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_03', 'TimeZone_2': 'EventFlowMsg/GossipStone:Reaction_21', 'TimeZone_3': 'EventFlowMsg/GossipStone:Reaction_20', 'TimeZone_4': 'EventFlowMsg/GossipStone:Reaction_19'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 15, 'Minute': 59}) {

        call Check_TimeZoneBranch({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_04', 'TimeZone_2': 'EventFlowMsg/GossipStone:Reaction_25', 'TimeZone_3': 'EventFlowMsg/GossipStone:Reaction_24', 'TimeZone_4': 'EventFlowMsg/GossipStone:Reaction_23'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 16, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_05'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 19, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_06'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 20, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_07'})

    } else {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_08'})

    }
}

void Check_TimeZone_FirstMarket_Adult() {
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 59, 'Hour': 2}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_08'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'Hour': 3, 'CompareOparator': 5, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_01'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 8, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_02'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 9, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_03'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 15, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_04'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 16, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_05'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 19, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_06'})

    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 20, 'Minute': 59}) {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_07'})

    } else {

        call Check_TimeZoneBranch_FirstMarket_Adult({'TimeZone_1': 'EventFlowMsg/GossipStone:Reaction_08'})

    }
}

void Check_TimeZoneBranch_FirstMarket_Adult() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/GossipStone:Reaction_Common_01', 'MaintainPerformanceState': 0, 'ASName': 'Talk'})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Talk', 'MessageId': 'TimeZone_1'})
}
