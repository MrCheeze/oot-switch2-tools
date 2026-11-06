-------- EventFlow: SageOfFire --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAIScheduleIsArrived', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventRemoveProjectiles', 'EventTriggerAddPreComputedCullingBasePos', 'EventTriggerAddPreComputedCullingBasePosAtCamera']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsDreamWorld']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Goron_DaruniaJr_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerSetHaveTalked', 'EventTalkIgnoreSameTalkAS', 'EventPlayAS', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleOverWriteActionType']
queries: ['EventQueryAIScheduleIsArrived', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerWarpToStarterLinkAnchor', 'EventGoOffstageForUser', 'EventDoNothing', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerWait']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsChild', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_DungeonBoss_Volvagia
entrypoint: None()
actions: ['EventTriggerDeathSignal', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventGoOffstageForUser', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventWarpToTargetPosAndRot', 'EventWarpToTargetActor', 'EventNaviWarpToPlayerHomePosition', 'EventNaviLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventTriggerSoundControlBGM', 'EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Goron_DaruniaJr_Adult[demo1]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Goron_DaruniaJr_Adult[demo2]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'Position': [0.0, 0.0, 0.0]}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorClose', 'EventTriggerDoorSetModelVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventRequestPreloadBakeResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_VisibleOff)]
entrypoint: SageOfFire_CityIn_01(NpcActor_VisibleOff)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_Active)]
entrypoint: SageOfFire_CityIn_01(NpcActor_Active)
actions: ['EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_02(NpcActor)]
entrypoint: SageOfFire_CityIn_02(NpcActor)
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleMoveToAnchor']
queries: []
params: None

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_04(NpcActor)]
entrypoint: SageOfFire_CityIn_04(NpcActor)
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_CrackWall_01(NpcActor_VisibleOff)]
entrypoint: SageOfFire_CityIn_CrackWall_01(NpcActor_VisibleOff)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_CrackWall_01(NpcActor_Active)]
entrypoint: SageOfFire_CityIn_CrackWall_01(NpcActor_Active)
actions: ['EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: []
params: None

void Ready_Npc_Goron_DaruniaJr_Adult_Talk() {
    if !Npc_Goron_DaruniaJr_Adult.EventQueryAIScheduleIsArrived() {

        call Npc_Goron_009_Child.InitTalk_Rolling({'Arg_Turn': 4, 'CheckDistance': 3.0})


        call Step01_Npc_Goron_DaruniaJr_Adult_BombHit()

    } else {

        call Npc_Goron_009_Child.LookTarget_Rolling({'PositionOffset': [0.0, 0.6000000238418579, 0.20000000298023224]})

        Npc_Goron_DaruniaJr_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ball_Talk_Child'})

        call Npc_Goron_009_Child.InitTalk_Rolling({'CheckDistance': 2.5999999046325684, 'Arg_Turn': 4})


        call Ready_Talk()

    }
}

void Ready_Npc_Goron_DaruniaJr_Adult_Near() {
    if Npc_EventStarter.EventQueryAIScheduleIsArrived() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/SageOfFire:Near_0003'})
    }
}

void Step01_Npc_Goron_DaruniaJr_Adult_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_HavePlayedStepOneNear'})
    && Npc_EventStarter.EventQueryAIScheduleIsArrived() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/SageOfFire:Near_0003'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_HavePlayedStepOneNear', 'Value': True})
    }
}

void Step01_Npc_Goron_DaruniaJr_Adult_Talk() {
    if !Npc_Goron_DaruniaJr_Adult.EventQueryAIScheduleIsArrived() {

        call Npc_Goron_009_Child.InitTalk_Rolling({'Arg_Turn': 4, 'CheckDistance': 3.0})


        call Step01_Npc_Goron_DaruniaJr_Adult_BombHit()

    } else
    if !Npc_Goron_DaruniaJr_Adult.EventQueryIsPlayingSameAS({'ASName': 'Run_GoronRoll_Stop', 'Partial': ''}) {
        Npc_Goron_DaruniaJr_Adult.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'GoronRoll_To_Talk_Child', 'IsWaitEnd': True, 'IsAnimeDriven': True})
    }

    call Npc_Goron_009_Child.LookTarget_Rolling({'PositionOffset': [0.0, 0.6000000238418579, 0.20000000298023224]})

    Npc_Goron_DaruniaJr_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Ball_Talk_Child'})

    call Npc_Goron_009_Child.InitTalk_Rolling({'CheckDistance': 2.5999999046325684, 'Arg_Turn': 4})

    Event10:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_HaveTalked_Rolling'}) {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Goron_DaruniaJr_Adult.EventTalkIgnoreSameTalkAS({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'ASName': 'Ball_Talk_Child', 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0030', 'MaintainPerformanceState': 0})
        } else {
            Npc_Goron_DaruniaJr_Adult.EventTalkIgnoreSameTalkAS({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'ASName': 'Ball_Talk_Child', 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0031', 'MaintainPerformanceState': 0})
        }
        Event59:
        Npc_Goron_DaruniaJr_Adult.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_DaruniaJr_HaveTalked_Rolling'})
        Npc_Goron_DaruniaJr_Adult.EventTalkIgnoreSameTalkAS({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0001', 'IsAnonymous': True, 'ASName': 'Ball_Talk_Child', 'MaintainPerformanceState': 0})
        goto Event59
    }
}

void Step02_Npc_Goron_DaruniaJr_Adult_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Step02_DaruniaJr_FirstTalked', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/SageOfFire:Near_0004'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'MessageID': 'EventFlowMsg/SageOfFire:Near_0002', 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Step02_Npc_Goron_DaruniaJr_Adult_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    Event320:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfFire_Step02_DaruniaJr_FirstTalked', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Step02_TalkFireTemple'}) {
            Event309:
            Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0004', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'Act_Talk_Cry', 'MaintainPerformanceState': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfFire_Step02_Npc_Goron_DaruniaJr_Adult_Talk_Event311', 'Index': -1}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 0, 'ChoiceLabel1': 9, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0002', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
                Event317:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                    Event310:
                    Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0024', 'MaintainPerformanceState': 0, 'EndDialogOption': 1, 'IsCloseDialog': False, 'ASName': 'Act_Talk_Cry_Ed'})

                    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult")})

                    GameSystemActor.EventTriggerAddPreComputedCullingBasePosAtCamera()
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0028', 'MaintainPerformanceState': 0})

                    fork {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0028_2', 'IsOverrideStyle': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'Handover_Child', 'MaintainPerformanceState': 0})
                    } {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
                    }


                    call Dm_SY_GetInEvent.GetInEvent_NotTurn({'ActorName': 'Obj_Armor_Goron', 'ASName': 'Wait', 'Npc_EventStarter': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult"), 'Target': 3, 'NpcActorName': 'Npc_EventStarter', 'NpcInstanceName': ''})

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0008', 'MaintainPerformanceState': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.029999999329447746, 102.3499984741211, 0.8199999928474426], 'EndPos': [0.029999999329447746, 102.3499984741211, 0.8199999928474426]})

                    fork {
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
                    } {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnimeDriven': False, 'ASName': 'Act_Decisivepose', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0006', 'MaintainPerformanceState': 0, 'EndDialogOption': 2})
                    }

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})

                    call Step02_DoorOpen()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Step02_TalkedSchedule_Cry', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_IsCrying', 'Value': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Step02_DaruniaJr_FirstTalked'})
                } else {
                    Event321:
                    Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0004', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'Act_Talk_Cry', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_DaruniaJr_IsCrying'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Step02_DaruniaJr_FirstTalked'})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_Step02_TalkedSchedule'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Step02_TalkedSchedule_Cry'})
                        Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                        Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SageOfFire_Step02_Npc_Goron_DaruniaJr_Adult_Talk_Event311', 'Value': True, 'Index': -1})
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 0, 'ChoiceLabel1': 9, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0023', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
                goto Event317
            }
        } else {
            Event308:
            Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0004', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'Act_Talk_Cry', 'MaintainPerformanceState': 0})
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/SageOfFire:Talk_0005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 8, 'ChoiceLabel3': 0, 'ChoiceLabel2': 9, 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Step02_TalkFireTemple'})
                Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0026', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': '', 'MaintainPerformanceState': 0})

                call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult")})

                Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0027', 'ASName': '', 'MaintainPerformanceState': 0})
                Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ASName': 'Act_Talk_Cry', 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0007', 'MaintainPerformanceState': 0})
                goto Event309
              case 1:
                Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                goto Event310
              case 2:
                goto Event321
            }
        }
    } else {
        Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0013', 'ASName': '', 'MaintainPerformanceState': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Goron_DaruniaJr_Adult.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/SageOfFire:Talk_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': -1, 'ChoiceLabel2': -1, 'ChoiceLabel3': -1, 'ChoiceLabel4': -1, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0029', 'MaintainPerformanceState': 0})
        Npc_Goron_DaruniaJr_Adult.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 0})
        goto Event308
    }
}

void Step02_DoorOpen() {

    fork {
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'GoronCity_01', 'IsWaitEnd': True, 'Position': [0.5199999809265137, 99.01000213623047, -6.039999961853027]})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:BgmInsideWorldミュート(KokiriForest_Kokiri_011_StopInFrontOfShop_00用)', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName3': ''})
        EventCamera.EventTriggerCameraSavePoint()

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [2.5, 102.38999938964844, 6.289999961853027], 'AtVector': [1.090000033378601, 101.3499984741211, 0.28999999165534973], 'TargetFovy': 50.0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'FovySetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.20000000298023224, 'StartAccelerateRate': 0.10000000149011612, 'MoveTime': 120, 'PosVector': [0.7900000214576721, 99.4800033569336, -15.079999923706055], 'AtVector': [-4.349999904632568, 100.18000030517578, -23.270000457763672], 'TargetFovy': 50.0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 120})

        }

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_Step02_DoorOpen', 'Index': -1, 'Value': True})
    }


    fork {
        Npc_Goron_DaruniaJr_Adult.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 285})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 11, 'ApplyType': 0, 'LoopEndCount': 6, 'Power': 0.029999999329447746, 'IsRumbleController': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 134})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 0.20000000298023224})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 0.30000001192092896})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }


    fork {
        TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'GoronCity_01', 'IsWaitEnd': True, 'Position': [13.050000190734863, 109.58000183105469, 12.239999771118164]})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }


    call Step02_Npc_Goron_DaruniaJr_Adult_AfterTalk()

}

void Step02_Npc_Goron_DaruniaJr_Adult_AfterTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0009', 'MaintainPerformanceState': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'MoveStatue'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'SageOfFire'})
}

void Step01_Npc_Goron_DaruniaJr_Adult_BombHit() {
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
    if !Npc_EventStarter.EventNPCQueryCheckFrontToTarget({'AngleThreshold': 45.0, 'Target': 2, 'ActorName': '', 'InstanceName': ''}) {
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
    Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0012', 'ASName': '', 'IsAnonymous': True, 'MaintainPerformanceState': 0})

    call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/SageOfFire:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/SageOfFire:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/SageOfFire:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/SageOfFire:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/SageOfFire:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/SageOfFire:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/SageOfFire:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/SageOfFire:Mask_08', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/SageOfFire:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/SageOfFire:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/SageOfFire:Mask_103'})

    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0021', 'MaintainPerformanceState': 0})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Goron_DaruniaJr_Adult', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.019999999552965164, 0.6899999976158142, 0.38999998569488525], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-0.05000000074505806, 1.3799999952316284, 1.4199999570846558], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    Npc_Goron_DaruniaJr_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0019', 'IsAnonymous': True, 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_Step01_DaruniaJr_BombHit'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'TalkDaruniaJr'})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventDoNothing({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }


    call Step02_DaruniaJr_FirstTalk()

}

void Step02_DaruniaJr_FirstTalk() {
    goto Event320
}

void SageOfFire_MelodyGetFire() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_MelodyGet_Fire'})
}

void SageOfFire_NaviScorching() {
    if !Player_Event.EventQueryPlayerIsChild() {
        Event206:
        Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/SageOfFire:NaviScorching_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Goron', 'Num': 1}) {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_Goron', 'ArmorSlot': 1}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:NaviScorching_01', 'MaintainPerformanceState': 0})
        } else {
            Event48:
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/SageOfFire:NaviScorching_02', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_NaviCraterTalk', 'Value': True})
    } else {
        goto Event206
    }
}

void SageOfFire_CityIn() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [0.0, 102.0, 0.0], 'EndPos': [0.0, 102.0, 0.0]})
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromLostWood'}) {
        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

        call SageOfFire_CityIn_01({'FromLostWood': True, 'NpcActor_VisibleOff': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo1"), 'NpcActor_Active': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo2")})

        Event53:

        call SageOfFire_CityIn_02({'AnchorInstanceName': 'demo2_anchor', 'Actor1ActorName': 'DestinationAnchor', 'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo2"), 'Actor1InstanceName': 'demo2_posForCam'})


        call SageOfFire_CityIn_03()


        call SageOfFire_CityIn_04({'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo2")})


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.140000104904175, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromLostWood', 'Value': False})
        Event421:
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 111})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.SageOfFire_CityIn', 'Index': -1, 'Value': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'StopDaruniaJr', 'IsWaitEnd': True})
    } else {

        call SageOfFire_CityIn_01({'FromLostWood': False, 'NpcActor_VisibleOff': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo2"), 'NpcActor_Active': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo1")})


        call SageOfFire_CityIn_02({'AnchorInstanceName': 'demo1_anchor', 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'demo1_posForCam', 'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo1")})


        call SageOfFire_CityIn_03()


        call SageOfFire_CityIn_04({'NpcActor': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo1")})

        goto Event421
    }
}

void Ready_Talk() {
    goto Event10
}

void SageOfFire_DefeatBoss() {

    call Get_StoneOfForest.InitDefeatBoss()

    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDreamWorld() {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DreamWorld_BossRush'}) {

            call SubEvent_AllBossBattle.BossRushBossStageExitSuccessVolvagia()

        } else {
            Enemy_DungeonBoss_Volvagia.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_FireTemple_BossOut', 'FadeInTypeEventEnd': 2})

            call SubEvent_AllBossBattle.BossStageExitProcess()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Volvagia_TemporaryDelete'})
        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        Enemy_DungeonBoss_Volvagia.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_FireTemple_BossOut', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FireTemple_BossGroundChange'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_DungeonBoss_Volvagia_BossAppear', 'Value': False})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'StartPos', 'NotChangeRot': False, 'InstanceName': 'BossDefeat', 'ASCommand': 'EvtWait'})
        Enemy_DungeonBoss_Volvagia.EventTriggerDeathSignal()
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'IsWaitEnd': True, 'PositionOffset': [-0.4099999964237213, 0.20000000298023224, -0.17000000178813934]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': False, 'IsNearOffset': True, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})

        call Common_Camera_Pln.Camera_PlayableAfterBoss()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfFire', 'StepName': 'GoToWarpPoint'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    }
}

void SageOfFire_BossAppear() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    if Player_Event.EventQueryCheckPlayerState({'State': 21}) {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    }
    if !GameSystemActor.EventQueryIsDreamWorld() {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 3})
        ChallengeSystemActor.EventTriggerShowTimerUI()

        call DreamBossStage.Rematch_Start_Common()

        Event488:
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Enemy_DungeonBoss_Volvagia'})
        Enemy_DungeonBoss_Volvagia.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-80.62922668457031, 93.33000183105469, 16.305999755859375], 'ClothWarpMode': -1})
        Enemy_DungeonBoss_Volvagia.EventDoNothing({'IsWaitEnd': True})

        fork {
            Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': -90.0, 'Position': [-64.33000183105469, 104.0999984741211, -0.4099999964237213]})
        } {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'ASCommand': 'LockOnWait', 'Position': [-64.5, 102.5, 0.0], 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -90.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-60.189998626708984, 104.33000183105469, 0.029999999329447746], 'AtVector': [-64.58999633789062, 103.94000244140625, 0.029999999329447746], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
        }

        GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_FireTemple_BossIn', 'FadeInTypeEventEnd': 2})
        Enemy_DungeonBoss_Volvagia.EventSetBattlePresentationOnPreState()
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DungeonBoss_Volvagia', 'CommandLife': 2, 'IsReleaseDucking': False})
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 0})

            call Get_StoneOfForest.BossAppearSkip_Valvagia()

            Event246:
            if !GameSystemActor.EventQueryIsDreamWorld() {
                ChallengeSystemActor.EventTriggerMiniGameTimerStart()
            }
        } else
        goto Event246
    } else {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Enemy_DungeonBoss_Volvagia_BossAppear'})
        goto Event488
    }
}

void SageOfFire_CityInFromDeathMt() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_SageOfFireClearTalked'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_FromDeathMt', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromCrater', 'Value': False})
    }
}

void SageOfFire_CityInFromCrater() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_DaruniaJr_SageOfFireClearTalked'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromCrater', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfFire_FromDeathMt', 'Index': -1, 'Value': False})
    }
}

void SageOfFire_NaviCraterTalk() {
    goto Event48
}

void SageOfFire_MeetBoss() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'MeetBoss'})
}

void SageOfFire_CityIn_01() {
    Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_VisibleOff)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'FromLostWood'}) {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'DestinationAnchor', 'InstanceName': 'startPos_meetSon01', 'NotChangeRot': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'destPos_meetSon01', 'PosVector': [0.9599999785423279, 2.140000104904175, -4.369999885559082], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }


        fork {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'IsWaitEnd': False, 'AnchorInstanceName': 'destPos_meetSon01'})
        } {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HoverBoot'}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
            } else {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})
            }

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'Actor1InstanceName': 'CamPos_meetSon10', 'Actor2InstanceName': 'TargetPos_meetSon_10', 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

        }


        fork {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'destPos_meetSon04', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'IsWaitEnd': True, 'AnchorInstanceName': 'destPos_meetSon04'})
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'MoveTime': 300, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': 'CamPos_meetSon11', 'Actor2InstanceName': 'TargetPos_meetSon_11', 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 300})

            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_Active)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 0, 'InstanceName': 'demo2_startDestPos', 'ClothWarpMode': -1})
            Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_Active)].EventNPCTurnToTarget({'Target': 2, 'InstanceName': '', 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True, 'IsWaitEnd': True})
        }

    } else {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'startPos_meetSon02'})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.9599999785423279, 2.140000104904175, -4.369999885559082], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'destPos_meetSon02', 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }


        fork {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'IsWaitEnd': False, 'AnchorInstanceName': 'destPos_meetSon02'})
        } {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HoverBoot'}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 145})
            } else {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})
            }
            PostProcessingActor.EventRequestPreloadBakeResource({'Position': [2.0, 109.0, 5.0], 'IsWaitEnd': True})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CamPos_meetSon04', 'Actor2InstanceName': 'TargetPos_meetSon_02', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

        }


        fork {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorName': 'Armor_Adult_HeavyBoot', 'ArmorSlot': 2}) {
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'destPos_meetSon03', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 220})
                Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'AnchorInstanceName': 'destPos_meetSon03', 'IsWaitEnd': True})
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }
        } {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'CamPos_meetSon03', 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor2InstanceName': 'TargetPos_meetSon_05', 'MoveTime': 400, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 400})

            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_Active)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 0, 'InstanceName': 'demo1_startDestPos', 'ClothWarpMode': -1})
            Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_01(NpcActor_Active)].EventNPCTurnToTarget({'Target': 2, 'InstanceName': '', 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True, 'IsWaitEnd': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }
}

void SageOfFire_CityIn_02() {

    fork {
        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_02(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'ASName': '', 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0022', 'MaintainPerformanceState': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromLostWood'}) {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'AtVector': [0.03999999910593033, 0.5400000214576721, 0.009999999776482582], 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'Actor1InstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player_Event', 'MoveTotargetPosType': 1, 'PosVectorSetType': 4, 'PosVector': [-2.0, 1.399999976158142, 0.5], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'AtVector': [0.03999999910593033, 0.5400000214576721, 0.009999999776482582], 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player_Event', 'MoveTotargetPosType': 1, 'PosVectorSetType': 4, 'Actor1ActorName': 'Actor1ActorName', 'Actor1InstanceName': 'Actor1InstanceName', 'PosVector': [-1.5, 1.600000023841858, 1.5], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerStartInGameBgm({'WithPlayableEvent': False, 'ResumeDelay': 0, 'IsFadeIn': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': 'Actor1InstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Actor1ActorName', 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Player_Event', 'MoveTotargetPosType': 1, 'PosVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 0.75, -1.0], 'PosVector': [0.0, 0.75, 1.0], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_02(NpcActor)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'ASName': '', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0025'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0, 'IsWaitEnd': True})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtWait'})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_DaruniaJr_Adult', 'InstanceName': 'demo1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtSurprise', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_Navi.EventNaviLookAtObject({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'ActorName': 'Npc_Goron_DaruniaJr_Adult', 'InstanceName': 'demo1'})
        }

    }


    fork {
        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_02(NpcActor)].EventNPCTurnToTarget({'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AnchorInstanceName', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_02(NpcActor)].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'ASName': 'Run_GoronRoll_02', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsWaitEnd': False, 'InstanceName': 'AnchorInstanceName'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}

void SageOfFire_CityIn_03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-0.41999998688697815, 0.75, 2.9700000286102295], 'AtVector': [-0.05999999865889549, 0.9300000071525574, 0.5699999928474426], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0010', 'MaintainPerformanceState': 0, 'IsNotBecomeSpeaker': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfFire_GenerateDaruniaJr'})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True, 'ActorName': 'Npc_Goron_DaruniaJr_Adult'})
    Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleOverWriteActionType({'ASName': 'Act_Normal_Wait', 'ActionType': 12})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_Goron_DaruniaJr_Adult.EventTriggerAIScheduleOverWriteActionType({'ASName': 'Run_GoronRoll_02', 'ActionType': 12})
}

void SageOfFire_CityIn_04() {

    fork {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-8.829999923706055, 113.62000274658203, 8.0], 'AtVector': [-11.460000038146973, 112.1500015258789, 2.930000066757202], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4.420000076293945, 119.9000015258789, 28.770000457763672], 'AtVector': [-9.4399995803833, 112.13999938964844, 2.140000104904175], 'TargetFovy': 50.0, 'MoveTime': 600, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 600})

        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_04(NpcActor)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'ASName': '', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/SageOfFire:Talk_0020', 'MaintainPerformanceState': 0})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    }

    Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_04(NpcActor)].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'YAngle': 0.0, 'Position': [-8.760000228881836, 98.55999755859375, -19.559999465942383]})
    Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_04(NpcActor)].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
}

void SageOfFire_CityIn_CrackWall() {
    Player_Event.EventTriggerParticipateEvent()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfFire_FromLostWood', 'Value': True})

    call SageOfFire_CityIn_CrackWall_01({'NpcActor_VisibleOff': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo1"), 'NpcActor_Active': ActorIdentifier(name="Npc_Goron_DaruniaJr_Adult", sub_name="demo2")})

    goto Event53
}

void SageOfFire_CityIn_CrackWall_01() {
    Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_CrackWall_01(NpcActor_VisibleOff)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [19.579999923706055, 104.94000244140625, -2.4800000190734863], 'YAngle': -72.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [20.0, 106.7699966430664, -1.2899999618530273], 'AtVector': [15.529999732971191, 106.37999725341797, -1.4800000190734863], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'IsWaitEnd': False, 'AnchorInstanceName': 'destPos_meetSon01'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

    fork {
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 0.5, 'IsWaitEnd': True, 'AnchorInstanceName': 'destPos_meetSon04'})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'Actor1InstanceName': 'CamPos_meetSon10', 'Actor2InstanceName': 'TargetPos_meetSon_10', 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'MoveTime': 300, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'CamPos_meetSon11', 'Actor2InstanceName': 'TargetPos_meetSon_11', 'PosVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 300})

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_CrackWall_01(NpcActor_Active)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 23, 'ForceGetUpDuringSleep': True, 'ArrivalState': 0, 'InstanceName': 'demo2_startDestPos', 'ClothWarpMode': -1})
        Npc_Goron_DaruniaJr_Adult[SageOfFire_CityIn_CrackWall_01(NpcActor_Active)].EventNPCTurnToTarget({'Target': 2, 'InstanceName': '', 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True, 'IsWaitEnd': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void FireTemple_DaruniaDemo() {
    Player_Event.EventTriggerParticipateEvent()

    call Common_Dungeon_OpenDungeonDoorSingleMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_FireTemple_0010', 'Index': -1}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
        DoorShutter_EventStarter.EventTriggerDoorSetModelVisible({'IsVisible': True})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Dm_FireTemple_0000_EffectFlag', 'Value': False, 'Index': -1})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_FireTemple_HammerDropPillar_A_01', 'KeyName': 'Falling_Debris'})
        EventSystemActor.EventTransition({'EventName': 'Dm_FireTemple_0000', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        EventSystemActor.EventTransition({'EventName': 'Dm_FireTemple_0010', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'GetBossKey'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfFire', 'IsFirstStep': False})
    }
}
