-------- EventFlow: MelodyGet_Sun_SubEvent --------

Actor: Obj_Spirit_PoeSharp
entrypoint: None()
actions: ['EventTriggerDeleteSelf', 'EventPoeSpiritTalk', 'EventTriggerBecomeSpeaker', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Obj_Spirit_PoeFlat
entrypoint: None()
actions: ['EventTriggerDeleteSelf', 'EventPoeSpiritTalk', 'EventTriggerBecomeSpeaker', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitTalkCameraInterpolationEnd', 'EventWaitForActorPresence']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerBackMoveForAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel', 'EventTriggerBecomeSpeaker', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkSignMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Poe_Flat
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: Enemy_Poe_Sharp
entrypoint: None()
actions: []
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryTombStoneFlatExistsSpiritActor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryTombStoneSharpExistsSpiritActor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeFlat_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventSpiritPoeTurnToTarget', 'EventSpiritPoeAppearTurnToTarget', 'EventPoeSpiritTalk', 'EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeSharp_Event
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventSpiritPoeTurnToTarget', 'EventSpiritPoeAppearTurnToTarget', 'EventPoeSpiritTalk', 'EventTriggerSetModelLodManual', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[SystemActor2]
entrypoint: None()
actions: ['EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[SystemActor3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)]
entrypoint: PoeAppear(Enemy_Poe)
actions: ['EventTriggerParticipateEvent', 'EventPoeAppear', 'EventPlayAS', 'EventPoeDisappear']
queries: []
params: None

void FlatSpiritTalkEvent() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Obj_Spirit_PoeFlat.EventTriggerSetModelLodManual({'LodLevel': 0})
    Obj_Spirit_PoeFlat.EventTriggerBecomeSpeaker()
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': '', 'ActorName': 'Obj_Spirit_PoeFlat', 'IsDoNavi': False})

    call NaviEventCommon.Sub_InitTalkNavi_NPC({'LookAtInstanceName': '', 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Obj_Spirit_PoeFlat'})


    fork {
        Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_46', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
    } {

        call InitTalk.SetTalkCamera_DependingDistance({'InstanceNameA': '', 'ActorNameA': 'Obj_Spirit_PoeFlat'})

    }

    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 1, 'FadeType': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'SharpFlatSpiritTalk2_EraseObject'})
}

void SharpSpiritTalkEvent() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Obj_Spirit_PoeSharp.EventTriggerSetModelLodManual({'LodLevel': 0})
    Obj_Spirit_PoeSharp.EventTriggerBecomeSpeaker()
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Obj_Spirit_PoeSharp', 'InstanceName': '', 'IsDoNavi': False})

    call NaviEventCommon.Sub_InitTalkNavi_NPC({'LookAtInstanceName': '', 'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Obj_Spirit_PoeSharp'})


    fork {
        Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_39', 'MaintainPerformanceState': 0})
    } {

        call InitTalk.SetTalkCamera_DependingDistance({'InstanceNameA': '', 'ActorNameA': 'Obj_Spirit_PoeSharp'})

    }

    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 1, 'FadeType': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'SharpFlatSpiritTalk_EraseObject'})
}

void MelodyGet_Sun_ListenTips_Sharp() {
    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_90'})
    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_65'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Value': True, 'Index': -1})

    call Spirit_Sharp_Off()

}

void MelodyGet_Sun_ListenTips_Flat() {
    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_90'})
    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_67'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Value': True, 'Index': -1})

    call SpiritFlat_Off()

}

void NoGetMelodySun_Sharp() {
    Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp].EventTriggerParticipateEvent()

    call GraveLook({'Anchor': 'SharpGrave_Anchor'})

    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'SignboardWood', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Dead'}) {
        if Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp].EventQueryTombStoneSharpExistsSpiritActor() {

            call FlatSharp_Appearance({'isSharp': True})


            call FlatSharp_TalkCameraChange_roop()


            call FlatSharp_Appearance_LastPart({'isSharp': True})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Talked'}) {
                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_94', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                Event99:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event213', 'Index': -1, 'Value': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215', 'Index': -1, 'Value': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event124:
                if !Player_Event.EventQueryPlayerIsChild() {
                    Event216:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215', 'Index': -1}) {
                        Event71:
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_89', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        Event129:
                        Obj_Spirit_PoeSharp_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        Obj_Spirit_PoeSharp_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': True})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
                        Obj_Spirit_PoeSharp_Event.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -133.0, 'ClothWarpMode': -1, 'Position': [41.854549407958984, 90.25, 6.425726890563965]})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_BrothersSoul_Appears', 'Value': False})
                    } else {
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215'})
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_92', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 201, 'ChoiceLabel2': 204, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Event76:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event84', 'Index': -1}) {
                                    Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_85', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                                    Event214:
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215', 'Value': True, 'Index': -1})
                                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                                    goto Event124
                                } else {
                                    Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_59', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event84', 'Value': True, 'Index': -1})
                                    goto Event214
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event77', 'Index': -1}) {
                                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_61', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                                goto Event214
                            } else {
                                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_57', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event77', 'Value': True, 'Index': -1})
                                goto Event214
                            }
                        } else {
                            Event215:
                            Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_93', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event213', 'Index': -1, 'Value': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215', 'Index': -1, 'Value': False})
                            goto Event129
                        }
                    }
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
                    goto Event216
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event213', 'Index': -1})
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215', 'Index': -1}) {
                    goto Event71
                } else {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData2': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event213', 'ChoiceExcludeGameData1': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event215'})
                    Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_92', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 204, 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event76
                      case 1:
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_74', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_76', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_77', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event213', 'Value': True, 'Index': -1})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        goto Event124
                      case 2:
                        goto Event215
                    }
                }
            } else {
                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_91', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Talked'})
                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_48', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                goto Event99
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_SharpTomb_Check'})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Spawn'}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'GraveYard_PoeAppear_Sharp', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        }
    }
}

void GetMelodySun_Sharp() {
    Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp].EventTriggerParticipateEvent()

    call GraveLook({'Anchor': 'SharpGrave_Anchor'})

    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'SignboardWood', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Dead'}) {
        if Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp].EventQueryTombStoneSharpExistsSpiritActor() {

            call FlatSharp_Appearance({'isSharp': True})


            call FlatSharp_TalkCameraChange_roop()


            call FlatSharp_Appearance_LastPart({'isSharp': True})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Talked'}) {
                Event86:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MelodyGet_Sun_Sharp_GotTalkEventTlakd'}) {
                        Event167:
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_66', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        goto Event129
                    } else {
                        Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_86', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MelodyGet_Sun_Sharp_GotTalkEventTlakd'})
                        goto Event167
                    }
                } else {
                    Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_65', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Value': True, 'Index': -1})
                    goto Event129
                }
            } else {
                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_91', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Talked'})
                Obj_Spirit_PoeSharp_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_90', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                goto Event86
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_SharpTomb_Check'})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Spawn'}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'GraveYard_PoeAppear_Sharp', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        }
    }
}

void NoGetMelodySun_Flat() {
    Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat].EventTriggerParticipateEvent()

    call GraveLook({'Anchor': 'FlatGrave_Anchor'})

    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'SignboardWood', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Dead'}) {
        if Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat].EventQueryTombStoneFlatExistsSpiritActor() {

            call FlatSharp_Appearance({'isSharp': False})


            call FlatSharp_TalkCameraChange_roop()


            call FlatSharp_Appearance_LastPart({'isSharp': False})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Talked'}) {
                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_102', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                Event142:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event323'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event314:
                if !Player_Event.EventQueryPlayerIsChild() {
                    Event153:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296'}) {
                        Event157:
                        Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_89', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        Event131:
                        Obj_Spirit_PoeFlat_Event.EventTriggerEmitXLink({'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                        Obj_Spirit_PoeFlat_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsSleepXLink': True})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
                        Obj_Spirit_PoeFlat_Event.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -133.0, 'ClothWarpMode': -1, 'Position': [41.854549407958984, 90.25, 6.425726890563965]})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_BrothersSoul_Appears_Flat', 'Value': False})
                    } else {
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296'})
                        Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_92', 'ChoiceNumber': 2, 'ChoiceLabel1': 201, 'ChoiceLabel2': 204, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Event277:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_64', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                            } else {
                                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_110', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                            }
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296', 'Value': True, 'Index': -1})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                            goto Event314
                        } else {
                            Event318:
                            Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_116', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event323', 'Index': -1, 'Value': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296', 'Index': -1, 'Value': False})
                            goto Event131
                        }
                    }
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
                    goto Event153
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event323'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296'}) {
                    goto Event157
                } else {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData2': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event323', 'ChoiceExcludeGameData1': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event296'})
                    Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_92', 'ChoiceNumber': 3, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 204, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event277
                      case 1:
                        Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_112', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Flat_Event323', 'Value': True, 'Index': -1})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        goto Event314
                      case 2:
                        goto Event318
                    }
                }
            } else {
                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_126', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Talked'})
                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_48', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                goto Event142
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_FlatTomb_Check'})
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_Field_Flat_Spawn', 'Index': -1}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'GraveYard_PoeAppear_Flat', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        }
    }
}

void GetMelodySun_Flat() {
    Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat].EventTriggerParticipateEvent()

    call GraveLook({'Anchor': 'FlatGrave_Anchor'})

    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'SignboardWood', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Dead'}) {
        if Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat].EventQueryTombStoneFlatExistsSpiritActor() {

            call FlatSharp_Appearance({'isSharp': False})


            call FlatSharp_TalkCameraChange_roop()


            call FlatSharp_Appearance_LastPart({'isSharp': False})

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Talked'}) {
                Event290:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MelodyGet_Sun_Flat_GotTalkEventTlakd'}) {
                        Event294:
                        Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_68', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        goto Event131
                    } else {
                        Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_86', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'MelodyGet_Sun_Flat_GotTalkEventTlakd'})
                        goto Event294
                    }
                } else {
                    Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_67', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.MelodyGet_Sun_SubEvent_Sporn_MusicianBros_Sharp_Event88', 'Value': True, 'Index': -1})
                    goto Event131
                }
            } else {
                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_126', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Talked'})
                Obj_Spirit_PoeFlat_Event.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_90', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                goto Event290
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_FlatTomb_Check'})
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_Field_Flat_Spawn', 'Index': -1}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'GraveYard_PoeAppear_Flat', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        }
    }
}

void SpiritFlat_Off() {
    Obj_Spirit_PoeFlat.EventTriggerEmitXLink({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
    Obj_Spirit_PoeFlat.EventTriggerDeleteSelf()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Spirit_Sharp_Off() {
    Obj_Spirit_PoeSharp.EventTriggerEmitXLink({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
    Obj_Spirit_PoeSharp.EventTriggerDeleteSelf()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void PoeAppear() {
    GameSystemActor.EventWaitForActorPresence({'IsActorCreateRequest': True, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'ActorName'})
    Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)].EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': 'PosVector_00', 'AtVector': 'AtVector_00', 'Actor1ActorName': 'ActorName', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)].EventPoeAppear({'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'TurnFaceControlType': 0, 'SlowTurn': True, 'Target': 3, 'InstanceName': '', 'Direction': 0.0, 'ActorName': 'ActorName', 'KeepTalkWait': False, 'IsDoNavi': False})
    } {
        Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': 'PosVector_01', 'AtVector': 'AtVector_01', 'Actor1ActorName': 'ActorName', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'EvtSurprise', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)].EventPoeDisappear({'IsWaitEnd': True})
        Enemy_Poe_Sharp[PoeAppear(Enemy_Poe)].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void PoeAppear_Sharp() {

    fork {

        call PoeAppear({'ActorName': 'Enemy_Poe_Sharp', 'Enemy_Poe': ActorIdentifier(name="Enemy_Poe_Sharp"), 'PosVector_00': [1.9700000286102295, 1.0399999618530273, -2.190000057220459], 'AtVector_00': [-0.6600000262260437, 1.5800000429153442, 2.0199999809265137], 'PosVector_01': [2.0799999237060547, 1.409999966621399, 4.5], 'AtVector_01': [-1.0800000429153442, 0.7099999785423279, 0.6899999976158142]})

    } {
        Obj_Graveyard_Tombstone_A_01[GraveYard_TombSharp].EventTriggerParticipateEvent()
        SignBoard_EventStarter.EventTriggerParticipateEvent()

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void PoeAppear_Flat() {

    fork {

        call PoeAppear({'Enemy_Poe': ActorIdentifier(name="Enemy_Poe_Flat"), 'ActorName': 'Enemy_Poe_Flat', 'PosVector_00': [-1.9700000286102295, 1.0399999618530273, -2.190000057220459], 'AtVector_00': [0.6600000262260437, 1.5800000429153442, 2.0199999809265137], 'PosVector_01': [-2.0799999237060547, 1.409999966621399, 4.5], 'AtVector_01': [1.0800000429153442, 0.7099999785423279, 0.6899999976158142]})

    } {
        Obj_Graveyard_Tombstone_A_02[GraveYard_TombFlat].EventTriggerParticipateEvent()
        SignBoard_EventStarter.EventTriggerParticipateEvent()

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void FlatSharp_Appearance() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'isSharp'}) {
        Obj_Spirit_PoeSharp.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_BrothersSoul_Appears'})
        GameSystemActor[SystemActor2].EventWaitForActorPresence({'IsActorCreateRequest': True, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Obj_Spirit_PoeSharp_Event'})
        Obj_Spirit_PoeSharp_Event.EventTriggerSetModelLodManual({'LodLevel': 0})
        Obj_Spirit_PoeSharp_Event.EventSpiritPoeAppearTurnToTarget({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'IsConfront': True, 'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'AppearDelayFrame': 10.0, 'WorldPos': [0.0, 0.0, 0.0]})
        Obj_Spirit_PoeSharp_Event.EventTriggerParticipateEvent()
        Obj_Spirit_PoeSharp_Event.EventTriggerBecomeSpeaker()
    } else {
        Obj_Spirit_PoeFlat.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_BrothersSoul_Appears_Flat'})
        GameSystemActor[SystemActor2].EventWaitForActorPresence({'IsActorCreateRequest': True, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Obj_Spirit_PoeFlat_Event'})
        Obj_Spirit_PoeFlat_Event.EventTriggerSetModelLodManual({'LodLevel': 0})
        Obj_Spirit_PoeFlat_Event.EventSpiritPoeAppearTurnToTarget({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'IsConfront': True, 'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'AppearDelayFrame': 10.0, 'WorldPos': [0.0, 0.0, 0.0]})
        Obj_Spirit_PoeFlat_Event.EventTriggerParticipateEvent()
        Obj_Spirit_PoeFlat_Event.EventTriggerBecomeSpeaker()
    }
}

void GraveLook() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerBackMoveForAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'AnchorInstanceName': 'Anchor', 'OffsetDist': 0.4000000059604645})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        EventCamera.EventSendEventTalkSignMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void FlatSharp_TalkCameraChange_roop() {

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

}

void FlatSharp_Appearance_LastPart() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'isSharp'}) {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Obj_Spirit_PoeSharp_Event', 'LookAtInstanceName': ''})


        fork {
            GameSystemActor[SystemActor3].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Obj_Spirit_PoeSharp_Event.EventTriggerParticipateEvent()
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Obj_Spirit_PoeSharp_Event', 'InstanceName': '', 'KeepTalkWait': True, 'IsDoNavi': False})
        } {
            Obj_Spirit_PoeSharp_Event.EventSpiritPoeTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'Target': 2, 'IsConfront': True})
        }

        Event190:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'KeepOneTimeAnm': True})
    } else {

        call NaviEventCommon.Sub_InitTalkNavi_NPC({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Obj_Spirit_PoeFlat_Event', 'LookAtInstanceName': ''})


        fork {
            Obj_Spirit_PoeFlat_Event.EventSpiritPoeTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True})
        } {
            GameSystemActor[SystemActor3].EventWait({'IsWaitEnd': True, 'Frames': 15})
            Obj_Spirit_PoeFlat_Event.EventTriggerParticipateEvent()
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'ActorName': 'Obj_Spirit_PoeFlat_Event', 'InstanceName': '', 'IsDoNavi': False})
        }

        goto Event190
    }
}
