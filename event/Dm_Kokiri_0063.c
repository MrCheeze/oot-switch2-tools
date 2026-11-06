-------- EventFlow: Dm_Kokiri_0063 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch', 'EventTriggerPlayerEquipDynamicEquipmentFromPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0063/Dm_Kokiri_0063_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0063_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventCreateLocationalLightToTargetActor', 'EventEditLocationalLight']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_Kokiri_0063/Dm_Kokiri_0063_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Kokiri_0063_Npc_Navi.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[1]
entrypoint: None()
actions: ['Event_SetDemoPaletteTransitionForTimeline']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[22]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()

}

void C01() {
    SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': True, 'SLinkKey': 'KokiriSword_Get'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'Position': [-82.0, 122.30000305175781, 33.650001525878906], 'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 40.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerRequestCreateDynamicEquipmentNoRelationPouch({'DynamicEquipmentState': 1, 'EquipmentActorName': 'Weapon_Sword_Kokiri'})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 520})
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerEquipDynamicEquipmentFromPouch({'CreateActorType': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Player_Event'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
    } {
        Npc_Navi.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-81.75, 123.80000305175781, 33.279998779296875], 'ClothWarpMode': -1})
        Npc_Navi.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'PrevDemoPaletteName': 'Dm_Kokiri_0063_C01', 'CurrDemoPaletteName': 'Dm_Kokiri_0063_C01'})
    } {
        PostProcessingActor.EventCreateLocationalLightToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'LightHash': 'lighttest0002', 'OffsetBase': 1, 'LightType': 0, 'InstanceName': '', 'Direction': [0.0, -1.0, 0.0], 'InnerAngle': 15.0, 'OuterAngle': 45.0, 'PositionOffset': [0.0, 1.5, 0.5]})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'lighttest0002', 'LocationalLightCreateType': 0, 'EditColor': True, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'EditSourceRadius': True, 'IsFrameTransition': False, 'FrameTransitionCount': 30, 'SourceRadius': 0.009999999776482582, 'Intensity': 500.0})
        GameSystemActor[22].EventWait({'IsWaitEnd': True, 'Frames': 120})
        PostProcessingActor.EventEditLocationalLight({'LightHash': 'lighttest0002', 'LocationalLightCreateType': 0, 'EditColor': True, 'Color': [1.0, 1.0, 1.0], 'EditIntensity': True, 'EditSourceRadius': True, 'SourceRadius': 0.009999999776482582, 'Intensity': 0.0, 'FrameTransitionCount': 180, 'IsFrameTransition': True})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.07999999821186066, 1.690000057220459, 3.7799999713897705], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 50.0, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventWorldManagerController[1].Event_SetDemoPaletteTransitionForTimeline({'RateFrame': 0.0, 'IsWaitEnd': False, 'RateStart': 0.0, 'RateEnd': 1.0, 'CurrDemoPaletteName': 'Dm_Kokiri_0063_C02', 'PrevDemoPaletteName': 'Dm_Kokiri_0063_C02'})
    }

}
