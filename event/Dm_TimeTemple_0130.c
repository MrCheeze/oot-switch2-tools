-------- EventFlow: Dm_TimeTemple_0130 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0130/Dm_TimeTemple_0130_Player_Adult/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0130_Player_Adult.root.as'}

Actor: Npc_Hylia_Zelda_Adult
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[01]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Arrow_Light
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventPlayAS', 'EventTriggerSetModelLodManual']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[arrow]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_TimeTemple_0130/Dm_TimeTemple_0130_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_TimeTemple_0130_Npc_Navi.root.as'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem', 'EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    call Ready()


    fork {

        call C01()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01'})
    }

    UISystemActor.EventEventFadeOut({'Length': 1, 'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': True})
    EventEffectEmitter.EventEffectStopGetItem()
}

void Ready() {

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -90.0, 'ASCommand': 'EvtWait', 'Position': [81.55999755859375, 103.93000030517578, -34.0], 'ClothWarpMode': 0, 'EnableInAir': False})
        Npc_Navi.EventWarpToTargetActor({'InstanceName': '', 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'YAngle': -40.0, 'IsWaitEnd': False, 'ClothWarpMode': -1, 'PositionOffset': [0.75, 1.399999976158142, -0.20000000298023224]})
    } {
        Npc_Hylia_Zelda_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 90.0, 'Position': [79.20999908447266, 103.95999908447266, -34.0], 'ClothWarpMode': -1})
        Npc_Hylia_Zelda_Adult.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Dm_Locator[arrow].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, -5.0, 0.0], 'ClothWarpMode': -1})
        Item_Arrow_Light.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'arrow', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator'})
    } {
        Dm_Locator[01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [84.94000244140625, 103.95999908447266, -34.0], 'ClothWarpMode': -1})
    } {
        UISystemActor.EventEventFadeIn({'Color': 1, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
    }

}

void C01() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01', 'ClothWarpMode': 0, 'IsAllSlot': True})
    } {
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'PosVector': [0.03999999910593033, 2.7899999618530273, 1.940000057220459], 'AtVector': [0.0, 1.6200000047683716, -0.15000000596046448], 'TargetFovy': 31.889999389648438, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[arrow].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'ClothWarpMode': -1, 'PositionOffset': [0.15000000596046448, 1.9800000190734863, 0.0]})
        Item_Arrow_Light.EventTriggerSetModelLodManual({'LodLevel': 0})
        Item_Arrow_Light.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Rotate_GetDemo'})
    } {
        SoundSystemActor.EventTriggerSoundStartFanfare({'IsEnableIntro': False, 'GameDataName': '', 'ActorName': 'Item_Arrow_Light'})
    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_TimeTemple_0130_c01', 'CurrDemoPaletteName': 'Dm_TimeTemple_0130_c01', 'IsWaitEnd': False, 'Frames': 0})
    }

    EventEffectEmitter.EventEffectStartGetItem({'ActorName': 'Item_Arrow_Light', 'GameDataName': '', 'IsBottleDemo': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_Arrow_Light'})

}
