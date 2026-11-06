-------- EventFlow: Dm_Awake_Shadow_Get --------

Actor: Npc_Hylia_Impa_Child
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_Awake_Shadow_Get/Dm_Awake_Shadow_Get_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Awake_Shadow_Get_Player_Adult.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Awake_Shadow_Get/Dm_Awake_Shadow_Get/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_Awake_Shadow_Get/Dm_Awake_Shadow_Get_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Awake_Shadow_Get_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Awake_Shadow_Get/Dm_Awake_Shadow_Get_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Awake_Shadow_Get_Npc_Navi.root.as'}

Actor: Item_Medal_Shadow
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_SageRoom_Base_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Player_Event.EventTriggerPlayerTemporaryBootsChange({'BootsType': 0})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'UseDemoWait': True, 'Position': [0.0, 100.1500015258789, 0.0], 'IsWaitEnd': True, 'YAngle': 240.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': False, 'InstanceName': '', 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'YAngle': -40.0, 'ClothWarpMode': -1, 'PositionOffset': [0.75, 1.399999976158142, -0.20000000298023224]})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Hylia_Impa_Child.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4.230000019073486, 100.1500015258789, -2.430000066757202], 'YAngle': 63.0, 'ClothWarpMode': -1})
        Npc_Hylia_Impa_Child.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 100.19999694824219, 0.0], 'YAngle': 30.0, 'ClothWarpMode': -1})
        Item_Medal_Shadow.EventTriggerSetModelLodManual({'LodLevel': 0})
        Item_Medal_Shadow.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Awake_Shadow_Get_C01', 'CurrDemoPaletteName': 'Dm_Awake_Shadow_Get_C01'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01'})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartFNumber': 36.0, 'EndFNumber': 36.0, 'StartDistance': 12.0, 'EndDistance': 12.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        Land_SageRoom_Base_A_01.EventPlayAS({'ASName': 'CavityOn', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_MedalGet_White_00', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_MedalGet_MV_00', 'IsIgnoreDucking': False})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C02-0'})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02', 'ClothWarpMode': 0, 'UseAnmDriven': True, 'IsAllSlot': True})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'StartBluarLevel': 2.0, 'EndBluarLevel': 2.0, 'StartDistance': 5.0, 'EndDistance': 3.0, 'StartFNumber': 80.0, 'EndFNumber': 80.0, 'RequiredFrame': 180, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
    } {
        Item_Medal_Shadow.EventTriggerEmitXLink({'ELinkKey': 'Dm_Awake_Shadow_Get_Glitter_00', 'SLinkKey': ''})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_Awake_Shadow_Get_Shaft_00', 'SLinkKey': ''})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_MedalGet', 'CommandLife': 2, 'IsReleaseDucking': True})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Awake_Shadow_Get_C02', 'CurrDemoPaletteName': 'Dm_Awake_Shadow_Get_C02'})
    } {
        Land_SageRoom_Base_A_01.EventPlayAS({'ASName': 'CavityOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_MedalGet_MV_02', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'SE_MedalGet_Shine_Loop', 'IsIgnoreDucking': False})
    }


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Medal_Shadow'})

    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'SE_MedalGet_Shine_Loop', 'GroupName': '', 'FadeFrame': -1})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    Player_Event.EventTriggerPlayerRestoreBootsChange()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Hylia_Impa_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_Awake_Shadow_Get:Dm_Awake_Shadow_Get_Text_000_b', 'IsOverrideStyle': True, 'IsCloseDialog': False, 'EndDialogOption': 2, 'OverrideStyle': 7, 'MaintainPerformanceState': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
}
