-------- EventFlow: Dm_FairyFountain_Din --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEmitXLink']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Player_Child/workspace.pp__ModelProject.gyml'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSendErrorToEventResource', 'EventTriggerControllerRumble']
queries: ['EventQueryTalkChoice2', 'EventQueryFairyFountainSelectSpecialAbility', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee']
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventNaviRequestBallonMessage', 'EventNaviRequestLookAtTheFront', 'EventNaviWarpToTargetActorUnitY', 'EventNaviWarpToPlayerHomePosition', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Npc_Navi/workspace.pp__ModelProject.gyml', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_GreatFairy_002
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Npc_U_GreatFairy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_GreatFairy_Din.root.as', 'EventMemberCreateMethod': 1, 'Position': [0.0, -200.0, 0.0]}

Actor: Dm_Locator[3]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[5]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Locator[4]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Locator[10]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartInGameBgm', 'EventTriggerSoundStartAreaBgm', 'EventSoundReleaseDucking', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[WM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[WM01]
entrypoint: None()
actions: ['Event_SetChangeWindSpeedForFlowchart', 'Event_ResetChangeWindSpeedForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[02]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_GreatFairy_002[DontPay1(FairyName)]
entrypoint: DontPay1(FairyName)
actions: ['EventWarpToTargetActor', 'EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)]
entrypoint: FirstTimeAnother(FairyName)
actions: ['EventWarpToTargetActor', 'EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)]
entrypoint: VisitedNoAbility(FairyName)
actions: ['EventWarpToTargetActor', 'EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[RecoverSequence(FairyName)]
entrypoint: RecoverSequence(FairyName)
actions: []
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[DontPay2(FairyName)]
entrypoint: DontPay2(FairyName)
actions: ['EventWarpToTargetActor', 'EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[FirstTime_Din(FairyName)]
entrypoint: FirstTime_Din(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[VisitedNoAbility_Din(FairyName)]
entrypoint: VisitedNoAbility_Din(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[GreatFairy_Appear(FairyName)]
entrypoint: GreatFairy_Appear(FairyName)
actions: []
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)]
entrypoint: GreatFairy_Disappear(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C01(FairyName)]
entrypoint: C01(FairyName)
actions: ['EventWarpToTargetActor', 'EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C02(FairyName)]
entrypoint: C02(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C03(FairyName)]
entrypoint: C03(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C06(FairyName)]
entrypoint: C06(FairyName)
actions: []
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C07(FairyName)]
entrypoint: C07(FairyName)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C08(FairyName)]
entrypoint: C08(FairyName)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C09(FairyName)]
entrypoint: C09(FairyName)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C17(FairyName)]
entrypoint: C17(FairyName)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[FirstTime(FairyName)]
entrypoint: FirstTime(FairyName)
actions: []
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[GreatFairy_RestCheck(FairyName)]
entrypoint: GreatFairy_RestCheck(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_002[C10-1(FairyName)]
entrypoint: C10-1(FairyName)
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTalk']
queries: []
params: None

void EntryPoint0() {

    fork {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 200.0, 'Position': [-34.0, 211.22000122070312, -189.17999267578125], 'ClothWarpMode': -1})
    } {
        Dm_Npc_GreatFairy_002.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        Dm_Locator[3].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.10459999740123749, -0.550000011920929, 7.202600002288818], 'ActorName': 'Dm_Locator', 'YAngle': 180.0, 'ClothWarpMode': -1})
    } {
        Dm_Locator[0].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'PositionOffset': [-1.600000023841858, 5.400000095367432, 6.0], 'ClothWarpMode': -1})
    } {
        Dm_Locator[4].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'ClothWarpMode': -1, 'PositionOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[10].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.10459999740123749, -0.550000011920929, 7.202600002288818], 'YAngle': 180.0, 'ClothWarpMode': -1})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_MeetFirst'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_DinFire', 'Index': -1}) {

            call RecoverSequence({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

        } else {

            call VisitedNoAbility({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})


            call VisitedNoAbility_Din({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

        }
    } else {

        call FirstTime({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})


        call FirstTime_Din({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

    }
}

void DontPay1() {
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, -200.0, 0.0], 'ClothWarpMode': -1})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0500_03', 'MaintainPerformanceState': 0})
        Event408:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0501_03', 'MaintainPerformanceState': 0})
            Event133:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GreatFairy_MeetFirst', 'Index': -1}) {
                Event526:
                SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 95})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GreatFairy_MeetFirst', 'Index': -1, 'Value': True})
                goto Event526
            }
          case 1:
            Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0501_01', 'MaintainPerformanceState': 0})
            goto Event133
          case 2:
            Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0501_02', 'MaintainPerformanceState': 0})
            goto Event133
        }
      case 1:
        Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0500_01', 'MaintainPerformanceState': 0})
        goto Event408
      case 2:
        Dm_Npc_GreatFairy_002[DontPay1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0500_02', 'MaintainPerformanceState': 0})
        goto Event408
    }
}

void FirstTimeAnother() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator'})
    } {
        Npc_Navi.EventNaviWarpToTargetActorUnitY({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.5, 1.0, -1.0], 'InstanceName': '4'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.4000000059604645, 0.0, -0.25]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'C01-01', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, -0.15000000596046448]})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-01', 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 60.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, -200.0, 0.0], 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0201', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MaintainPerformanceState': 0})
            Event343:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
          case 1:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0201_01', 'MaintainPerformanceState': 0})
            goto Event343
          case 2:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0201_02', 'MaintainPerformanceState': 0})
            goto Event343
        }
    } {

        call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C03', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 13.0, 'EndDistance': 13.0, 'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0204_00', 'MaintainPerformanceState': 0})
            Event107:
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0205_00', 'MaintainPerformanceState': 0})
                Event335:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
              case 1:
                Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0205_01', 'MaintainPerformanceState': 0})
                goto Event335
              case 2:
                Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0205_02', 'MaintainPerformanceState': 0})
                goto Event335
            }
          case 1:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0204_01', 'MaintainPerformanceState': 0})
            goto Event107
          case 2:
            Dm_Npc_GreatFairy_002[FirstTimeAnother(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0204_02', 'MaintainPerformanceState': 0})
            goto Event107
        }
    }

}

void VisitedNoAbility() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator'})
    } {
        Npc_Navi.EventNaviWarpToTargetActorUnitY({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.5, 1.0, -1.0], 'InstanceName': '4'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.4000000059604645, 0.0, -0.25]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'C01-01', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, -0.15000000596046448]})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-01', 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 60.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, -200.0, 0.0], 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0301_03', 'MaintainPerformanceState': 0})
            Event584:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
          case 1:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0301_01', 'MaintainPerformanceState': 0})
            goto Event584
          case 2:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0301_02', 'MaintainPerformanceState': 0})
            goto Event584
        }
    } {

        call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C03', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 13.0, 'EndDistance': 13.0, 'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0302_03', 'MaintainPerformanceState': 0})
            Event390:
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0303_03', 'MaintainPerformanceState': 0})
                Event587:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
              case 1:
                Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0303_01', 'MaintainPerformanceState': 0})
                goto Event587
              case 2:
                Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0303_02', 'MaintainPerformanceState': 0})
                goto Event587
            }
          case 1:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0302_01', 'MaintainPerformanceState': 0})
            goto Event390
          case 2:
            Dm_Npc_GreatFairy_002[VisitedNoAbility(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0302_02', 'MaintainPerformanceState': 0})
            goto Event390
        }
    }

}

void RecoverSequence() {
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'WaitingResumeInGameBgm': False})

    fork {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'C01-01', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 10.0, 'ASCommand': 'C01-01', 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C06', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Navi.EventNaviWarpToTargetActorUnitY({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': '4', 'PositionOffset': [0.5, 1.0, -0.25]})
        } else {
            Npc_Navi.EventNaviWarpToTargetActorUnitY({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'InstanceName': '4', 'PositionOffset': [0.5, 1.5, -0.25]})
        }
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 8.0, 'EndDistance': 8.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Bubble'})
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01'})
    } {

        fork {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 16})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 61})
            GameSystemActor[02].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 5.300000190734863})
        }

    } {
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    }


    call C07({'FairyName': 'FairyName'})


    call C08({'FairyName': 'FairyName'})


    call C09({'FairyName': 'FairyName'})

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'FadeInType': 0})

    call C10-1({'FairyName': 'FairyName'})


    call C17({'FairyName': 'FairyName'})

}

void DontPay2() {
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, -200.0, 0.0], 'ClothWarpMode': -1})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0600_01', 'MaintainPerformanceState': 0})
        Event153:
        switch GameSystemActor.EventQueryFairyFountainSelectSpecialAbility({'SpecialAbility': 'SpecialAbility'}) {
          case 0:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '想定していない特殊能力に分岐した'})
          case 1:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0602', 'MaintainPerformanceState': 0})
            Event437:
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0607_01', 'MaintainPerformanceState': 0})
                goto Event133
              case 1:
                Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0607_02', 'MaintainPerformanceState': 0})
                goto Event133
              case 2:
                Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0607_03', 'MaintainPerformanceState': 0})
                goto Event133
            }
          case 2:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'NotPlayLipSyncAnim': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0601', 'MaintainPerformanceState': 0})
            goto Event437
          case 3:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0603', 'MaintainPerformanceState': 0})
            goto Event437
          case 4:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': True, 'IsAnonymous': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0604', 'MaintainPerformanceState': 0})
            goto Event437
          case 5:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'NotPlayLipSyncAnim': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0605', 'MaintainPerformanceState': 0})
            goto Event437
          case 6:
            Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0606', 'MaintainPerformanceState': 0})
            goto Event437
        }
      case 1:
        Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0600_02', 'MaintainPerformanceState': 0})
        goto Event153
      case 2:
        Dm_Npc_GreatFairy_002[DontPay2(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0600_03', 'MaintainPerformanceState': 0})
        goto Event153
    }
}

void Pay() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C05', 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [-3.8499999046325684, 0.7599999904632568, -8.119999885559082], 'AtVector': [0.4399999976158142, 1.399999976158142, 2.8399999141693115], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'C05', 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})

        fork {
            PouchSystemActor.EventTriggerIncreaseRupee({'Value': 'Value'})
            GameSystemActor[02].EventWait({'Frames': 120, 'IsWaitEnd': True})
            UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        } {
            Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Drop'})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        }

    }

}

void Dm_FairyFountain_Din() {

    call C10()


    call C11()


    call C12()


    call C13()


    call C14()


    call C15()


    call C15-01()


    call C16()

}

void FirstTime_Din() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C04'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_GreatFairy_002[FirstTime_Din(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'C01', 'NotPlayLipSyncAnim': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0009_01', 'MaintainPerformanceState': 0})
    }

    Event68:
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 25}) {

            call Pay({'Value': -25})

            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'FadeType': 0, 'WaitingResumeInGameBgm': False})

            call GreatFairy_Appear({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'PlayerStatus.MPMax', 'Value': 0}) {
              case [0, 1]:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GreatFairy_HasNoMPOnDinDemo'})
                Event122:

                call Dm_FairyFountain_Din()


                call TriForcePoint.RemainNumber()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GreatFairy_AlreadyAppeared'})

                call GreatFairy_Disappear({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

              case 2:
                goto Event122
            }
        } else {

            call DontPay2({'SpecialAbility': 2, 'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

        }
    } else {

        call DontPay1({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_002")})

    }
}

void VisitedNoAbility_Din() {

    fork {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[VisitedNoAbility_Din(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0304_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
          case 1:
            Dm_Npc_GreatFairy_002[VisitedNoAbility_Din(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0304_02', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MaintainPerformanceState': 0})
          case 2:
            Dm_Npc_GreatFairy_002[VisitedNoAbility_Din(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0304_03', 'MaintainPerformanceState': 0})
        }
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    goto Event68
}

void GreatFairy_Appear() {

    call C06({'FairyName': 'FairyName'})


    call C07({'FairyName': 'FairyName'})


    call C08({'FairyName': 'FairyName'})


    call C09({'FairyName': 'FairyName'})

}

void GreatFairy_Disappear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FairyBless_MP'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FaroreWind', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_MPDouble', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_NayruLove', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_DefenseDouble', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Meet_GreatFairy_CompleteMessage'}) {
                            Event65:

                            fork {

                                call TriForcePoint.Recover()

                                GameSystemActor[02].EventWait({'Frames': 60, 'IsWaitEnd': True})
                            } {
                                EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 60})
                                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
                            }

                            switch GameSystemActor.EventQueryRandomChoice3() {
                              case 0:
                                Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_01', 'MaintainPerformanceState': 0})
                                Event304:
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                                call C17({'FairyName': 'FairyName'})

                              case 1:
                                Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_02', 'MaintainPerformanceState': 0})
                                goto Event304
                              case 2:
                                Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_03', 'MaintainPerformanceState': 0})
                                goto Event304
                            }
                        } else {
                            Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0018', 'MaintainPerformanceState': 0})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Meet_GreatFairy_CompleteMessage', 'Value': True, 'Index': -1})
                            Npc_Navi.EventNaviRequestBallonMessage({'Index': 485})
                            goto Event65
                        }
                    } else {

                        call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                        if !Player_Event.EventQueryPlayerIsChild() {
                            Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0019', 'MaintainPerformanceState': 0})
                        } else {
                            Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0012', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0})
                        }
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Meet_GreatFairy_05'})
                        goto Event65
                    }
                } else {

                    call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                    Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0011', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Meet_GreatFairy_04'})
                    goto Event65
                }
            } else {

                call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0010', 'ASName': 'C01', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Meet_GreatFairy_03'})
                goto Event65
            }
        } else {

            call GreatFairy_RestCheck({'FairyName': 'FairyName'})

            Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0009', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Meet_GreatFairy_02'})
            goto Event65
        }
    } else {

        call GreatFairy_RestCheck({'FairyName': 'FairyName'})

        Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0008', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0})
        if Player_Event.EventQueryPlayerIsChild() {
            Dm_Npc_GreatFairy_002[GreatFairy_Disappear(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0020', 'MaintainPerformanceState': 0})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Meet_GreatFairy_01'})
        goto Event65
    }
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator'})
    } {
        Npc_Navi.EventNaviWarpToTargetActorUnitY({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.5, 1.0, -1.0], 'InstanceName': '4'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.4000000059604645, 0.0, -0.25]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'C01-01', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, -0.15000000596046448]})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-01', 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ForceFadeFrame': 60.0, 'ClothWarpMode': 0})
    } {
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Npc_GreatFairy_002[C01(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '', 'PositionOffset': [0.0, -200.0, 0.0], 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
        Dm_Npc_GreatFairy_002[C01(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0001', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': True, 'ASName': 'C01', 'IsAnonymous': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        Dm_Npc_GreatFairy_002[C01(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0002', 'NotPlayLipSyncAnim': True, 'IsNotBecomeSpeaker': True, 'IsAnonymous': True, 'ASName': 'C01', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'Text1': 'C02', 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C02', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 13.0, 'EndDistance': 13.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        Dm_Npc_GreatFairy_002[C02(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': True, 'IsNotBecomeSpeaker': False, 'ASName': 'C01', 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0004_01', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C03', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 13.0, 'EndDistance': 13.0, 'EndBluarLevel': 2.0, 'StartBluarLevel': 2.0, 'IsEnableNear': True, 'StartFNumber': 52.0, 'EndFNumber': 52.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        Dm_Npc_GreatFairy_002[C03(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'NotPlayLipSyncAnim': True, 'IsAnonymous': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0007_01', 'MaintainPerformanceState': 0})
        Dm_Npc_GreatFairy_002[C03(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0008_01', 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': True})
    }

}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C06', 'Text2': ''})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C06', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.4000000059604645, 0.0, -0.25]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 250})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 8.0, 'EndDistance': 8.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Bubble'})
    } {

        fork {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 16})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Piton', 'Length': 0.0})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 61})
            GameSystemActor[02].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 5.300000190734863})
        }

    } {
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    }

}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C07', 'Text2': ''})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            fork {
                Dm_Npc_GreatFairy_002[C07(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, -200.0, 0.0]})
                Dm_Npc_GreatFairy_002[C07(FairyName)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C07-1F', 'IsAnimeDriven': False, 'IsWaitEnd': True})
            } {
                Dm_Locator[10].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1})
            }

            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 5})

            fork {
                Dm_Npc_GreatFairy_002[C07(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Npc_GreatFairy_002[C07(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'C07', 'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsAllSlot': True})
            } {
                Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C07', 'IsAnimeDriven': True, 'IsWaitEnd': True})
            }

        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C07', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '3'})
        } {
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 249})

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C07', 'ForceFadeFrame': 10.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
            } {
                Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Splash'})
            }

        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartBluarLevel': 1.25, 'EndBluarLevel': 1.25, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'IsEnableNear': True, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
            Npc_Navi.EventNaviRequestLookAtTheFront({'IsWaitEnd': True})
        } {
            Dm_Locator[3].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water', 'IsKill': True})
            Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GoGoGo', 'Length': 4.300000190734863})
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 270})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
        } {
            EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 7.5})
        }

    }
}

void C08() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C08', 'Text2': ''})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            Dm_Npc_GreatFairy_002[C08(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'C08', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C08'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C08', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 5.0, 'EndDistance': 10.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Dm_Locator[3].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Bubble', 'IsKill': False})
            Dm_Locator[10].EventTriggerEmitXLink({'ELinkKey': 'Dm_FairyFountain_Courage_Wind', 'SLinkKey': ''})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
            Dm_Locator[10].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Impact'})
        } {
            Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C08', 'IsWaitEnd': True})
        } {
            Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'PosOffset': [0.0, 8.0, 0.0]})
        } {
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False, 'IsImmediately': True})
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
            SoundSystemActor.EventTriggerSoundStartAreaBgm({'BgmName': 'BGM_GreatFairyFountain'})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 140})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C08', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C08'})
        }

    }
}

void C09() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C09'})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            Dm_Npc_GreatFairy_002[C09(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'C09', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'SceneName': 'C09-01', 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '3'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 10.0, 'EndDistance': 5.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C09', 'IsWaitEnd': True})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0', 'PosOffset': [-1.600000023841858, 3.0, 0.0]})
        } {
            EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C09', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C09'})
        }

    }
}

void C11() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C11', 'Text2': ''})

    fork {
        Dm_Npc_GreatFairy_002.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'C11', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C11'})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C11', 'IsWaitEnd': True, 'ClothWarpMode': 2})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C11', 'IsWaitEnd': True})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsLookAtObject': True, 'LookAtTarget': 2, 'LookAtActorName': 'Player_Event', 'offset': [1.0, 0.0, -0.699999988079071], 'MoveSpeed': 0.0, 'DecSpeedDistance': 1.0, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Dm_Npc_GreatFairy_002.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_Particle'})
        Dm_Npc_GreatFairy_002.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_Emblem'})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 140})
        GameSystemActor[02].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Bofuhn', 'Length': 0.0})
    } {
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 5.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C11', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C11'})
    }

}

void C12() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C12', 'Text3': '', 'Text2': ''})

    fork {
        Dm_Npc_GreatFairy_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'ASName': 'C01', 'IsWaitEnd': False, 'IsAnimeDriven': False})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C12', 'IsWaitEnd': False})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': False, 'SceneName': 'C12-1'})
        }
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C12', 'IsWaitEnd': True, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 2.0, 'EndDistance': 1.5, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        Dm_Npc_GreatFairy_002.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FairyFountain_Din_Particle'})
        if !Player_Event.EventQueryPlayerIsChild() {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_Up_Child'})
        } else {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_Up_Adult'})
        }
    } {
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 250})
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    }

}

void C13() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C13'})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C13-2', 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C14', 'IsWaitEnd': False})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': False, 'SceneName': 'C14-1'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 40})
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_00'})
    }

}

void C14() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C14'})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C13-3', 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C15', 'IsWaitEnd': False})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': False, 'SceneName': 'C15-1'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'IsEnableNear': True, 'StartFNumber': 52.0, 'EndFNumber': 52.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Din_01'})
        GameSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 46})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_DinFire'})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 46})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

}

void C15() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C15'})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C14', 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C16', 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '4'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C16-1', 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '4'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}

void C16() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C16'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-1.690000057220459, 0.7599999904632568, -2.009999990463257], 'PosVector': [-2.009999990463257, 0.3100000023841858, -3.190000057220459], 'TargetFovy': 32.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': -1})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        Dm_Npc_GreatFairy_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0006_01', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[5].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.0, -100.0, 0.0], 'ActorName': 'Dm_Locator', 'ClothWarpMode': -1})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25], 'ArrivedASCommand': 'EvtWait'})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}

void C17() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C17', 'Text2': ''})

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        Dm_Npc_GreatFairy_002[C17(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'C15', 'IsAnimeDriven': False, 'IsWaitEnd': True, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C18'})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C15', 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 92})
        Dm_Locator[3].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Splash_Last'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Dm_Locator[3].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FairyFountain_Courage_Water'})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C15', 'IsWaitEnd': True})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 110})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': True, 'LookAtTarget': 2, 'LookAtActorName': 'Player_Event', 'IsHomePosition': True, 'IsNearOffset': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 100})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtTarget': 2, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'IsLookAtObject': False, 'IsNearOffset': False, 'IsUseAfterPlayerTurn': True, 'LookAtActorName': '', 'IsHomePosition': True, 'OffsetType': -1})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 96})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Dooon'})
    } {
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 7.5})
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 180})
        EventWorldManagerController[WM01].Event_ResetChangeWindSpeedForFlowchart({'IsWaitEnd': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C10() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C10'})

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C10'})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C10', 'IsWaitEnd': True})
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        Dm_Npc_GreatFairy_002.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'ASName': 'C10', 'IsAnimeDriven': False, 'IsAllSlot': True})
        Dm_Npc_GreatFairy_002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0001_01', 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01'})
    }

}

void FirstTime() {

    call C01({'FairyName': 'FairyName'})


    call C02({'FairyName': 'FairyName'})


    call C03({'FairyName': 'FairyName'})

}

void C15-01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C15-01'})

    call Dm_SY_GetInEvent.GetInEvent_GreatFairyDin({'ActorName': 'Item_DinFire'})

}

void GreatFairy_RestCheck() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Meet_GreatFairy_RemainNumber', 'Value': 2}) {
      case 0:
        Dm_Npc_GreatFairy_002[GreatFairy_RestCheck(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0021', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Dm_Npc_GreatFairy_002[GreatFairy_RestCheck(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0022', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Dm_Npc_GreatFairy_002[GreatFairy_RestCheck(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0007', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void C10-1() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C10-1'})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            fork {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-1.690000057220459, 0.7599999904632568, -2.009999990463257], 'PosVector': [-2.009999990463257, 0.3100000023841858, -3.190000057220459], 'TargetFovy': 32.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1})
                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAllSlot': False, 'ASName': 'C01', 'IsAnimeDriven': True, 'IsWaitEnd': False})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': -1})
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
            } {
                Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
            } {
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
                Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
            }

        } {
            Dm_Locator[3].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Splash', 'IsKill': False})
            Dm_Locator[3].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Bubble', 'IsKill': False})
            Dm_Locator[10].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_FairyFountain_Courage_Wind', 'SLinkKey': '', 'IsKill': False})
            Dm_Locator[10].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Courage_Impact', 'IsKill': False})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 5})
        } {
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False, 'IsImmediately': False})
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
            SoundSystemActor.EventTriggerSoundStartAreaBgm({'BgmName': 'BGM_GreatFairyFountain'})
        } {
            EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
        }

    } else {

        fork {
            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C10', 'IsWaitEnd': True, 'IsAllSlot': True})
        } {
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'ASCommand': 'EvtWait', 'InstanceName': '4', 'PositionOffset': [0.0, 0.0, 0.0]})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': -1})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C10'})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
            Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C10', 'IsWaitEnd': True})
        } {
            SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False, 'IsImmediately': True})
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
            SoundSystemActor.EventTriggerSoundStartAreaBgm({'BgmName': 'BGM_GreatFairyFountain'})
        } {
            EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
        }

    }

    fork {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0401_01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0401_02', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0401_03', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
    }

    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0405_01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event82:

        fork {

            call TriForcePoint.Recover()

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameSystemActor[02].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FairyBless_MP'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FaroreWind', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_MPDouble', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_NayruLove', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_DefenseDouble', 'Index': -1}) {
                            Event110:
                            switch GameSystemActor.EventQueryRandomChoice3() {
                              case 0:
                                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                Event140:
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GreatFairy_AlreadyAppeared'})
                              case 1:
                                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_02', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event140
                              case 2:
                                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0403_03', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event140
                            }
                        } else {

                            call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0012', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event110
                        }
                    } else {

                        call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                        Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0011', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event110
                    }
                } else {

                    call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                    Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0010', 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event110
                }
            } else {

                call GreatFairy_RestCheck({'FairyName': 'FairyName'})

                Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0009', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event110
            }
        } else {

            call GreatFairy_RestCheck({'FairyName': 'FairyName'})

            Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_Din_0008', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event110
        }
      case 1:
        Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0405_02', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event82
      case 2:
        Dm_Npc_GreatFairy_002[C10-1(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0405_03', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event82
    }
}
