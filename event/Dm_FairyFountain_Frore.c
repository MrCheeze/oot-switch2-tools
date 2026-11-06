-------- EventFlow: Dm_FairyFountain_Frore --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventPlayerWarpVanish']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[3]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Npc_GreatFairy_003
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTalk', 'EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Npc_U_GreatFairy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_GreatFairy_Din.root.as', 'Position': [0.0, -200.0, 0.0]}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
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
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Dm_Locator[10]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FairyFountain_Din/Dm_FairyFountain_Din_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FairyFountain_Din_Dm_Locator.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventNaviLookAtObject', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundStartAreaBgm', 'EventTriggerStartInGameBgm', 'EventSoundReleaseDucking', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
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
actions: ['Event_SetChangeWindSpeedForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[02]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Npc_GreatFairy_003[FirstTimeAnother_Frore(FairyName)]
entrypoint: FirstTimeAnother_Frore(FairyName)
actions: ['EventTalk']
queries: []
params: None

Actor: Dm_Npc_GreatFairy_003[VisitedNoAbility_Frore(FairyName)]
entrypoint: VisitedNoAbility_Frore(FairyName)
actions: ['EventTalk']
queries: []
params: None

void EntryPoint0() {

    fork {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [62.5, 104.25, 99.22000122070312], 'ClothWarpMode': -1})
    } {
        Dm_Npc_GreatFairy_003.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    fork {
        Dm_Locator[4].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'ClothWarpMode': -1, 'PositionOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[3].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.10459999740123749, -0.550000011920929, 7.202600002288818], 'ActorName': 'Dm_Locator', 'YAngle': 180.0, 'ClothWarpMode': -1})
    } {
        Dm_Locator[0].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'PositionOffset': [-1.600000023841858, 5.400000095367432, 6.0], 'ClothWarpMode': -1})
    } {
        Dm_Locator[10].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.10459999740123749, -0.550000011920929, 7.202600002288818], 'ActorName': 'Dm_Locator', 'YAngle': 180.0, 'ClothWarpMode': -1})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_FairyFountain_Frore'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FaroreWind'}) {

            call Dm_FairyFountain_Din.RecoverSequence({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

        } else {

            call Dm_FairyFountain_Din.VisitedNoAbility({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})


            call VisitedNoAbility_Frore({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

        }
    } else {

        call Dm_FairyFountain_Din.FirstTimeAnother({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})


        call FirstTimeAnother_Frore({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

    }
}

void FirstTimeAnother_Frore() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        Dm_Npc_GreatFairy_003[FirstTimeAnother_Frore(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0011', 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    Event51:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Meet_GreatFairy_02', 'Value': True})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 100}) {

            call Dm_FairyFountain_Din.Pay({'Value': -100})

            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 2, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
            EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

            call Dm_FairyFountain_Din.GreatFairy_Appear({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})


            call Dm_FairyFountain_Frore()


            call TriForcePoint.RemainNumber()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GreatFairy_AlreadyAppeared'})

            call Dm_FairyFountain_Din.GreatFairy_Disappear({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

        } else {

            call Dm_FairyFountain_Din.DontPay2({'SpecialAbility': 3, 'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

        }
    } else {

        call Dm_FairyFountain_Din.DontPay1({'FairyName': ActorIdentifier(name="Dm_Npc_GreatFairy_003")})

    }
}

void VisitedNoAbility_Frore() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C04', 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Dm_Npc_GreatFairy_003[VisitedNoAbility_Frore(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0306_01', 'MaintainPerformanceState': 0})
          case 1:
            Dm_Npc_GreatFairy_003[VisitedNoAbility_Frore(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0306_02', 'MaintainPerformanceState': 0})
          case 2:
            Dm_Npc_GreatFairy_003[VisitedNoAbility_Frore(FairyName)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ASName': 'C01', 'IsAnonymous': True, 'NotPlayLipSyncAnim': True, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Din:Dm_FairyFountain_0306_03', 'MaintainPerformanceState': 0})
        }
    }

    goto Event51
}

void Dm_FairyFountain_Frore() {
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'FadeInType': 0})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            call C10-1()

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
        }


        call C11()


        call C12()


        call C13()


        call C13-1()


        call C14()


        call C15()


        call C15-01()


        call C16()

    } else {

        call C10()


        call C11()


        call C12()


        call C13()


        call C13-1()


        call C14()


        call C15()


        call C15-01()


        call C16()

    }
}

void C10() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C10'})

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C10'})
    } {
        Dm_Npc_GreatFairy_003.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ASName': 'C10', 'IsAllSlot': True})
        Dm_Npc_GreatFairy_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Frore:Dm_FairyFountain_Frore_0002_01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C10', 'IsWaitEnd': True})
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'Frames': 0})
    }

}

void C11() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C11', 'Text2': ''})

    fork {
        Dm_Npc_GreatFairy_003.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C11', 'IsWaitEnd': True, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C11'})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C11', 'IsWaitEnd': True, 'ClothWarpMode': -1})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 5.0, 'EndDistance': 5.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C11'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsLookAtObject': True, 'LookAtTarget': 2, 'LookAtActorName': 'Player_Event', 'MoveSpeed': 0.0, 'DecSpeedDistance': 1.0, 'IsUseAfterPlayerTurn': True, 'offset': [1.100000023841858, 0.0, -0.75]})
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Dm_Npc_GreatFairy_003.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Frore_Particle'})
        Dm_Npc_GreatFairy_003.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Frore_Emblem'})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 140})
        GameSystemActor[02].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Bofuhn', 'Length': 0.0})
    } {
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 5.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C11', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C11', 'Frames': 0})
    }

}

void C12() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C12', 'Text2': '', 'Text3': ''})

    fork {
        Dm_Npc_GreatFairy_003.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'SceneName': 'C12', 'IsWaitEnd': False})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event', 'IsWaitEnd': False, 'SceneName': 'C12-1'})
        }
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C12', 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 2.0, 'EndDistance': 1.5, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
    } {
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        Dm_Npc_GreatFairy_003.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_FairyFountain_Frore_Particle'})
        if !Player_Event.EventQueryPlayerIsChild() {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Frore_Up_Child'})
        } else {
            Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_FairyFountain_Frore_Up_Adult'})
        }
    } {
        EventSystemActor[WM].EventWait({'IsWaitEnd': True, 'Frames': 250})
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    }

}

void C13() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C13', 'Text2': ''})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'ASCommand': 'C13-1-Frore', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C13-Frore'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C13-Frore-1'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'StartDistance': 2.4000000953674316, 'EndDistance': 2.4000000953674316, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_FairyFountain_Frore_00', 'SLinkKey': ''})
    }

}

void C14() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C14', 'Text2': ''})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C13-3-Frore', 'IsAllSlot': True, 'ClothWarpMode': 0, 'IsWaitEnd': False})

        fork {
            Player_Event.EventPlayerWarpVanish({'IsFarore': True, 'IsWaitEnd': True, 'IsReverse': True, 'Frame': 50.0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_FairyFountain_Frore_02', 'SLinkKey': ''})
        } {
            EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor[02].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Bofuhn'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C14-Frore'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C14-Frore-1'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 1.7999999523162842, 'EndDistance': 1.7999999523162842, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C15() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C15'})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ASCommand': 'C14-Frore', 'IsAllSlot': True, 'ClothWarpMode': -1})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C16', 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '4'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C16-1', 'IsWaitEnd': False, 'TargetActorInstanceName': '4', 'TargetActorName': 'Dm_Locator'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 50.0, 'EndFNumber': 50.0, 'StartDistance': 2.0, 'EndDistance': 2.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [63.400001525878906, 105.37000274658203, 98.9000015258789], 'YAngle': -50.0})
        Npc_Navi.EventNaviLookAtObject({'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
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
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Locator[5].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.0, -100.0, 0.0], 'ActorName': 'Dm_Locator', 'ClothWarpMode': -1})
    } {
        Dm_Npc_GreatFairy_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Frore:Dm_FairyFountain_Frore_0004_01', 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Meet_GreatFairy_02', 'Value': False})
}

void C13-1() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C13-1', 'Text2': ''})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C13-2-Frore', 'IsAllSlot': True, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerWarpVanish({'IsFarore': True, 'IsWaitEnd': True, 'IsReverse': False, 'Frame': 100.0})
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C13-1-Frore'})
        } else {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '', 'SceneName': 'C13-1-Frore-1'})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'EndDistance': 2.0, 'RequiredFrame': 40, 'IsEnableNear': True, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'StartDistance': 0.5799999833106995, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0})
    } {
        EventSystemActor[02].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
    }

}

void C15-01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C15-01'})

    call Dm_SY_GetInEvent.GetInEvent_Demo_NotLookatObjectEntry({'ActorName': 'Item_FaroreWind'})

}

void C10-1() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'BgAlignH': 0, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'DispTime': 3, 'IsWaitEnd': False, 'Text2': '', 'Text1': 'C10-1'})

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 10.0, 'EndDistance': 10.0, 'StartFNumber': 30.0, 'EndFNumber': 30.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-1.690000057220459, 0.7599999904632568, -2.009999990463257], 'PosVector': [-2.009999990463257, 0.3100000023841858, -3.190000057220459], 'TargetFovy': 32.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Npc_GreatFairy_003.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': '3', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Dm_Npc_GreatFairy_003.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'C01', 'IsAllSlot': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Dm_Npc_GreatFairy_003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C01', 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Frore:Dm_FairyFountain_Frore_0002_01', 'MaintainPerformanceState': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': -1})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        Dm_Locator[10].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C01'})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsHomePosition': False, 'IsNearOffset': False, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'offset': [0.5, 0.0, -0.25]})
        Npc_Navi.EventNaviLookAtObject({'Target': 3, 'OffsetBase': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'ActorName': 'Dm_Locator', 'InstanceName': '0'})
    } {
        EventWorldManagerController[WM01].Event_SetChangeWindSpeedForFlowchart({'IsWaitEnd': False, 'Speed': 3.5})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'PrevDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'CurrDemoPaletteName': 'Dm_FairyFountain_Din_C01', 'Frames': 0})
    }

}
