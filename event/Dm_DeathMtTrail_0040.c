-------- EventFlow: Dm_DeathMtTrail_0040 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Goron_Biggoron_Adult
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0040/Dm_DeathMtTrail_0040_Npc_Goron_GOU_Biggoron/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_DeathMtTrail_0040_BigGoron.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_DeathMtTrail_0040/Dm_DeathMtTrail_0040/workspace.pp__ModelProject.gyml', 'IsWorld': False}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'UseEventModelAnime': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call C01()


    call C02()

}

void C01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [24.25, 200.4600067138672, -128.5], 'ClothWarpMode': -1})
    Npc_Goron_Biggoron_Adult.EventTriggerRequestLookAtTheFront()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-24.280000686645508, 12.729999542236328, -6.860000133514404], 'AtVector': [-23.170000076293945, 13.109999656677246, -6.659999847412109], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_Biggoron_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01-02', 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'Frames': 551, 'IsWaitEnd': True})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_DeathMtTrail_0040', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'Frames': 74, 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'position', 'PositionOffset': [-18.610000610351562, 7.400000095367432, -4.429999828338623], 'OffsetBase': 0, 'YAngle': 90.0, 'ASCommand': 'EvtTalk'})
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Goron_Biggoron_Adult', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'PosOffset': [0.0, 2.0, 0.0], 'SlowTurn': True, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'IsHomePosition': True, 'IsOffCenterCamera': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': True, 'Text3': '', 'Text2': ''})
    } {
        EventSystemActor[2].EventWait({'Frames': 115, 'IsWaitEnd': True})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Npc_Equipment_022', 'IsWaitEnd': False, 'InstanceName': '', 'ELinkKeyName': 'Dm_DeathMtTrail_0040_Spark'})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 125})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Npc_Equipment_022', 'IsWaitEnd': False, 'InstanceName': '', 'ELinkKeyName': 'Dm_DeathMtTrail_0040_Spark'})
    } {
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 113})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle', 'Length': 0.0})
        } {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 4, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 4.0})
        }

        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 126})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle', 'Length': 0.0})
        } {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 4, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 4.0})
        }

    } {
        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'PrevDemoPaletteName': 'Dm_DeathMtTrail_0040_C01', 'CurrDemoPaletteName': 'Dm_DeathMtTrail_0040_C01', 'IsWaitEnd': False, 'Frames': 0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C02-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'Text3': '', 'IsWaitEnd': True, 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'BgAlignH': 0, 'BgAlignW': 0, 'Text2': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 155})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 165})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
    } {
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
    }

    Npc_Goron_Biggoron_Adult.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0})
}
