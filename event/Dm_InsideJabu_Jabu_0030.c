-------- EventFlow: Dm_InsideJabu_Jabu_0030 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog', 'EventTriggerControllerRumble', 'EventTriggerZeldaNotesRequestSendDailyScreenShot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventDoNothing', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Player_Child.root.as'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventWarpToTargetPosAndRot', 'EventNaviLookAtObject', 'EventGoOffstageForUser', 'EventDoNothing', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerSetModelAlpha']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Npc_Navi.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventTalk', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Npc_Zora_ZU_Ruto_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Npc_Zora_ZU_Ruto_Child.root.as'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideJabu_Jabu_Stone_Water_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerModelUnbind', 'EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Item_Stone_Water/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Item_Stone_Water.root.as', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0]}

Actor: Dm_Locator[Lift]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Dm_Locator.root.as'}

Actor: Obj_InsideJabu_Jabu_ElevatorLift_A_01[ElevatedFloor1]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Stone]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Dm_Locator.root.as', 'Position': [0.0, 0.0, 0.0]}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True}

Actor: EventSystemActor[DOF]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartBossBgm', 'EventTriggerStartBgmSimple', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[BGM]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[EF]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[HV]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Enemy_MiddleBoss_BigOcto[MiddleBoss]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventGoOffstageForUser', 'EventDungeonBossSetConsiderBattlePresentation', 'EventSetBattlePresentationOnPreState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_InsideJabu_Jabu_0030/Dm_InsideJabu_Jabu_0030_Enemy_MiddleBoss_BigOcto/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_InsideJabu_Jabu_0030_Enemy_MiddleBoss_BigOcto.root.as'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Controller]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[light]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsWorld': True, 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()


    call C09()


    call C10()


    call C11()


    call C12()


    call C14()

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}

void C10() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C10', 'Text3': '', 'Text4': '', 'Text5': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C10-0', 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableNear': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 58.0, 'ClothWarpMode': -1, 'Position': [-32.39899826049805, 120.0, -93.30000305175781]})
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Omen', 'IsIgnoreDucking': False})
    }


    fork {
        Dm_Locator[Lift].EventPlayAS({'ASName': 'C11', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Dm_Locator[Stone].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C11B', 'ForceFadeInFrame': 30.0, 'IsWaitEnd': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Insidejaubjabu_Room06_OffRigLight', 'Index': -1, 'Value': True})
    } {
        Obj_InsideJabu_Jabu_ElevatorLift_A_01[ElevatedFloor1].EventTriggerEmitXLink({'SLinkKey': 'Lift_Up', 'ELinkKey': ''})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 4.199999809265137})
    }

    EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_InsideJabu_Jabu_ElevatorLift_A_01', 'ELinkKeyName': 'Dm_InsideJabu_Jabu_0030_C11_WaterSplash', 'InstanceName': 'ElevatedFloor1', 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C11() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C11', 'Text2': '', 'Text3': '', 'Text4': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C11-1', 'RootType': 1, 'TargetActorName': ''})
    } {
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Navi.EventPlayAS({'ASName': 'EvtTalk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'StartDistance': 3.5, 'StartFNumber': 16.0, 'StartBluarLevel': 1.5, 'RequiredFrame': 190, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'EndDistance': 6.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_InsideJabu_Jabu_0030_0016_Sp_00'})
    } {
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'demo_light01', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [1.899999976158142, 0.7099999785423279, 0.15000000596046448], 'Intensity': 0.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Zora_Ruto_Child_001[Step1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-29.790000915527344, 102.0, -99.51000213623047], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0017', 'EndDialogOption': 3, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})

        fork {
            Npc_Zora_Ruto_Child_001[Step1].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C11', 'Text2': '', 'Text3': ''})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'C11', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    }

    Obj_InsideJabu_Jabu_Stone_Water_A_01.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': True, 'ELinkKey': 'Dm_InsideJabu_Jabu_0030_Wait'})
}

void C12() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text5': '', 'Text1': 'C12', 'Text3': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C12-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-38.4630012512207, 84.88999938964844, -90.4469985961914], 'YAngle': 25.12969970703125})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_gimic_midboss_doorlock', 'Value': True, 'Index': -1})
    } {
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'C12', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'EndDistance': 2.799999952316284, 'StartDistance': 2.799999952316284, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    } {
        EventSystemActor[DOF].EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ELinkKeyName': 'Dm_InsideJabu_Jabu_0030_C12_WaterSplash', 'ActorName': 'Dm_Locator', 'InstanceName': 'Stone'})
    } {
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
    } {
        GameSystemActor.EventWait({'Frames': 35, 'IsWaitEnd': True})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Splash', 'IsIgnoreDucking': False})
    }

}

void C14() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C14', 'Text2': '', 'Text3': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C14-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-24.790000915527344, 86.53299713134766, -88.60199737548828], 'AtVector': [-28.128000259399414, 85.94400024414062, -90.41600036621094], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 200, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C14-001', 'IsWaitEnd': True})
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 20.0, 'IsAnimeDriven': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'Position': [-27.09000015258789, 84.88999938964844, -89.8499984741211], 'IsWaitEnd': True, 'ASCommand': 'DemoWaitHalf', 'YAngle': -80.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'Wait'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})

        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {
            Npc_Navi.EventDoNothing({'IsWaitEnd': True})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'IsWaitEnd': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        }

    } {
        Obj_InsideJabu_Jabu_ElevatorLift_A_01[ElevatedFloor1].EventTriggerEmitXLink({'SLinkKey': 'Lift_Down', 'ELinkKey': ''})
        Dm_Locator[Lift].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C14'})
    } {
        EventSystemActor[BGM].EventWait({'IsWaitEnd': True, 'Frames': 210})
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventSetBattlePresentationOnPreState()
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_BigOcto[MiddleBoss].EventDungeonBossSetConsiderBattlePresentation()
    } {
        GameSystemActor[EF].EventWait({'IsWaitEnd': True, 'Frames': 256})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_InsideJabu_Jabu_ElevatorLift_A_01', 'InstanceName': 'ElevatedFloor1', 'IsWaitEnd': False, 'ELinkKeyName': 'Dm_InsideJabu_Jabu_0030_C14_WaterSplash'})
        GameSystemActor[EF].EventWait({'IsWaitEnd': True, 'Frames': 150})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Enemy_MiddleBoss_BigOcto', 'ELinkKeyName': 'Dm_InsideJabu_Jabu_0030_C14_BigOcto_Land', 'IsWaitEnd': False, 'InstanceName': 'MiddleBoss'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 250, 'StartDistance': 5.5, 'StartFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'EndFNumber': 16.0, 'EndDistance': 3.700000047683716, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[DOF].EventWait({'IsWaitEnd': True, 'Frames': 110})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartBluarLevel': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'RequiredFrame': 20, 'IsEnableNear': False, 'StartDistance': 3.700000047683716, 'StartFNumber': 16.0, 'EndDistance': 3.8499999046325684, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[DOF].EventWait({'IsWaitEnd': True, 'Frames': 195})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 170, 'StartFNumber': 16.0, 'StartBluarLevel': 2.0, 'IsEnableNear': False, 'EndBluarLevel': 0.75, 'EndFNumber': 16.0, 'EndDistance': 4.400000095367432, 'StartDistance': 3.8499999046325684, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 40})

    } {
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 32})
        GameSystemActor.EventTriggerControllerRumble({'Length': 4.0, 'RumbleCall': 'Demo_Middle_GoroGoro'})
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 238})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 155})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
    }


    fork {
        Obj_InsideJabu_Jabu_ElevatorLift_A_01[ElevatedFloor1].EventTriggerModelUnbind()
    } {
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventTriggerModelUnbind()
    }

}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'Text3': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': True})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'C01_Ruto'})
    } {
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_Stone_Water'})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 3})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_001', 'InstanceName': 'Step1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Dm_Locator[Stone].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_Dm_Locator'})
    } {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_InsideJabu_Jabu_0030_Wait'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 1.100000023841858, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'EndDistance': 1.100000023841858, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        EventSystemActor[DOF].EventWait({'IsWaitEnd': True, 'Frames': 50})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'StartDistance': 1.100000023841858, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'EndDistance': 1.5, 'RequiredFrame': 40, 'StartBluarLevel': 2.0, 'EndBluarLevel': 1.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C01', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C01'})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'demo_light01', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [1.899999976158142, 0.7099999785423279, 0.15000000596046448], 'Intensity': 0.0})
    } {
        EventSystemActor[HV].EventWait({'Frames': 50, 'IsWaitEnd': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_InsideJabu_Jabu_0030_0021_Sp_00'})
        EventSystemActor[HV].EventWait({'IsWaitEnd': True, 'Frames': 155})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_InsideJabu_Jabu_0030_0020_Sp_00'})
    }

}

void Ready() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'YAngle': -90.0, 'Position': [-27.09000015258789, 84.88999938964844, -89.8499984741211], 'IsWaitEnd': True, 'ASCommand': 'DemoWaitHalf', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-27.030000686645508, 85.98999786376953, -89.41000366210938], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'PassThrough': -1.0, 'IsWaitEnd': True, 'IsHomePosition': True, 'IsOffCenterCamera': False, 'IsNearOffset': True, 'offset': [-0.6000000238418579, 0.10000000149011612, 0.5], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-30.66900062561035, 86.5739974975586, -92.23500061035156], 'YAngle': -122.5, 'ClothWarpMode': -1})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Dm_Locator[Lift].EventWarpToTargetPosAndRot({'Position': [-32.36000061035156, 83.0, -93.30999755859375], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Obj_InsideJabu_Jabu_ElevatorLift_A_01[ElevatedFloor1].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'Lift', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[Stone].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-27.09000015258789, 84.88999938964844, -89.8499984741211], 'ClothWarpMode': -1})
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventTriggerModelBind({'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'Stone', 'BoneName': 'Dm_Locator', 'RotOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_Locator[light].EventDoNothing({'IsWaitEnd': True})
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'LightHash': 'demo_light01', 'LightType': 0, 'OffsetBase': 0, 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'light', 'PositionOffset': [-27.700000762939453, 87.5, -93.66000366210938]})
    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text3': '', 'Text2': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C02-0'})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsWaitEnd': False, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        Dm_Locator[Stone].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': False, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartDistance': 1.0, 'RequiredFrame': 60, 'EndDistance': 1.350000023841858, 'EndBluarLevel': 1.5, 'StartBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_001', 'InstanceName': 'Step1', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False})
        Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 0.0})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C02', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C02'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Npc_Zora_Ruto_Child_001[Step1].EventTriggerEmitXLink({'ELinkKey': 'Dm_InsideJabu_Jabu_0030_GetDemo', 'SLinkKey': ''})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_ItemGet_Large', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameSystemActor.EventTriggerZeldaNotesRequestSendDailyScreenShot({'TypeID': 'get_item', 'TargetID': 'Item_Stone_Water', 'Frame': 30})

    call GetPouchContent.DisplayRutoGetByActorName({'ActorName': 'Item_Stone_Water'})

    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0003', 'EndDialogOption': 3, 'OverrideStyle': 4, 'MaintainPerformanceState': 0})
    GameSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'Text3': '', 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05999999865889549, 0.7699999809265137, -1.4500000476837158], 'AtVector': [-0.30000001192092896, 1.0299999713897705, -0.07000000029802322], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'IsWaitEnd': True, 'ASName': 'C03-001', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0004', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'IsAnimeDriven': True, 'ASName': 'C03-002', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    } {
        Dm_Locator[Stone].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C03'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 16.0, 'StartDistance': 3.0, 'EndDistance': 3.0, 'EndFNumber': 16.0, 'StartBluarLevel': 0.800000011920929, 'EndBluarLevel': 0.800000011920929, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0, 'IsEnableNear': False})
    } {
        Obj_InsideJabu_Jabu_Stone_Water_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C03_Stone_Water'})
    } {
        Npc_Navi.EventTriggerSetModelAlpha({'Alpha': 1.0})
    } {
        Player_Event.EventDoNothing({'IsWaitEnd': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03'})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'demo_light01', 'LocationalLightCreateType': 0, 'EditColor': True, 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.10000000149011612, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'Color': [1.899999976158142, 0.7099999785423279, 0.15000000596046448], 'Intensity': 10.0})
    } {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_InsideJabu_Jabu_0030_GetDemo', 'IsKill': True, 'SLinkKey': ''})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C04', 'Text2': '', 'Text3': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Npc_Zora_Ruto_Child_001', 'Actor1InstanceName': 'Step1', 'PosVector': [1.2599999904632568, 0.30000001192092896, 1.5399999618530273], 'AtVector': [0.12999999523162842, 0.7599999904632568, 0.28999999165534973], 'TargetFovy': 18.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 600, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsLinearMove': False, 'Actor1ActorName': 'Npc_Zora_Ruto_Child_001', 'Actor1InstanceName': 'Step1', 'PosVector': [1.1699999570846558, 0.3400000035762787, 1.440000057220459], 'AtVector': [0.12999999523162842, 0.7599999904632568, 0.28999999165534973], 'TargetFovy': 18.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'ASName': 'C04-01', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'WorldPos': [-29.581100463867188, 87.39939880371094, -91.54650115966797]})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0005', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0006', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0007', 'EndDialogOption': 3, 'IsCloseDialog': True, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        Dm_Locator[Stone].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04', 'ForceFadeInFrame': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartDistance': 2.0999999046325684, 'EndDistance': 2.0999999046325684, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C04', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C04'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C05() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05', 'Text2': '', 'Text3': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 12.300000190734863, 'PosVector': [-28.317800521850586, 87.489501953125, -90.71109771728516], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [-29.440500259399414, 87.27519989013672, -91.44889831542969], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0008', 'EndDialogOption': 3, 'IsCloseDialog': True, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartBluarLevel': 2.5, 'EndBluarLevel': 2.5, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartDistance': 1.899999976158142, 'EndDistance': 1.899999976158142, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C06_Loop', 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'Text2': '', 'BgAlignH': 0, 'BgAlignW': 0, 'IsWaitEnd': False, 'Text1': 'C06'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Zora_Ruto_Child_001', 'Actor1InstanceName': 'Step1', 'PosVector': [0.6499999761581421, 1.5499999523162842, -0.8799999952316284], 'AtVector': [0.47999998927116394, 1.2300000190734863, -0.4699999988079071], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0009', 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0010', 'EndDialogOption': 3, 'IsCloseDialog': True, 'ASName': 'C04-02', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'ASName': 'C06', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsEnableNear': False, 'StartDistance': 3.200000047683716, 'EndDistance': 3.200000047683716, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C06', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C06'})
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C07'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.559999942779541, 2.4100000858306885, 1.7999999523162842], 'AtVector': [-0.3799999952316284, 1.0800000429153442, 0.49000000953674316], 'TargetFovy': 26.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 400, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.309999942779541, 2.119999885559082, 1.5199999809265137], 'AtVector': [-0.3799999952316284, 1.0800000429153442, 0.49000000953674316], 'TargetFovy': 26.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsWaitEnd': False, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsCloseDialog': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0011', 'ASName': 'C08-Loop', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsWaitEnd': False, 'RequiredFrame': 0, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'IsEnableNear': False, 'StartDistance': 2.3499999046325684, 'EndDistance': 2.3499999046325684, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C08() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C08'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-28.739999771118164, 87.16000366210938, -91.69999694824219], 'AtVector': [-29.059999465942383, 87.22000122070312, -91.6500015258789], 'TargetFovy': 40.599998474121094, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0012', 'EndDialogOption': 3, 'IsCloseDialog': True, 'ASName': 'C08-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndFNumber': 32.0, 'StartFNumber': 32.0, 'StartDistance': 1.0, 'IsEnableNear': False, 'EndDistance': 1.0, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Zora_Ruto_Child_001', 'InstanceName': 'Step1', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': False})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C04', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C04'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C09() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text3': '', 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C09'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C09-0', 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False})
    } {
        Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_InsideJabu_Jabu_0030:Dm_InsideJabu_Jabu_0030_0013', 'EndDialogOption': 3, 'IsCloseDialog': True, 'ASName': 'C08-Loop', 'MaintainPerformanceState': 0, 'IsAnimeDriven': True})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsWaitEnd': True, 'StartDistance': 2.4000000953674316, 'EndDistance': 2.4000000953674316, 'StartFNumber': 32.0, 'EndFNumber': 32.0, 'StartBluarLevel': 1.0, 'EndBluarLevel': 1.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03', 'CurrDemoPaletteName': 'Dm_InsideJabu_Jabu_0030_C03'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C09-1', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'OverwriteStartFrame': -1.0, 'InterpolateFrame': 5.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_InsideJabu_Jabu_0030_0014_Sp_00'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C09', 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        } {
            Npc_Zora_Ruto_Child_001[Step1].EventPlayAS({'Partial': '', 'ASName': 'C09', 'IsWaitEnd': False, 'ForceFadeInFrame': 15.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
        } {
            Dm_Locator[Stone].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09'})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Navi.EventPlayAS({'ASName': 'C09', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    } {
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        GameSystemActor[Controller].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 7.300000190734863, 'RumbleCall': 'Demo_Middle_GataGata'})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Shake', 'IsIgnoreDucking': False})
    }

}
