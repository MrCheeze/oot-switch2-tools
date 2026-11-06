-------- EventFlow: Dm_LakeHrl_0030 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0030/Dm_LakeHrl_0030/workspace.pp__ModelProject.gyml'}

Actor: Dm_Locator[firearrowP]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0030/Dm_LakeHrl_0030_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0030_Dm_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Arrow]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Arrow_Fire[Item]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerModelUnbind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 2, 'Position': [0.0, 0.0, 0.0]}

void EntryPoint0() {

    call C01()


    call C02-03()

}

void C01() {
    Player_Event.EventTriggerParticipateEvent()
    EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_Sun_A_01', 'ELinkKeyName': 'Dm_LakeHrl_0030_Sun', 'InstanceName': '', 'IsWaitEnd': False})
    SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Light'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C02-03() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_Sun_A_01', 'TargetFovy': 24.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'LookAtDis': 5.0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.0, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'PosVector': [-175.8699951171875, 139.9199981689453, 519.5700073242188], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Dm_Locator[firearrowP].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': 0.0, 'ActorName': 'EventCamera', 'InstanceName': '', 'PositionOffset': [0.0, -0.20000000298023224, -8.0], 'ClothWarpMode': -1})

    fork {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C02', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 69})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Obj_Sun_A_01', 'TargetFovy': 24.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'LookAtDis': 5.0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'PosVector': [-175.8699951171875, 139.9199981689453, 519.5700073242188], 'AtVector': [0.0, -1550.0, 0.0], 'MoveTime': 183, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1})
    } {
        Dm_Locator[firearrowP].EventPlayAS({'ASName': 'C02', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Dm_Locator[firearrowP].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-158.1300048828125, 134.60000610351562, 523.3599853515625], 'ClothWarpMode': -1, 'IsWaitEnd': False})
        Dm_Locator[firearrowP].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        Dm_Locator[firearrowP].EventTriggerEmitXLink({'ELinkKey': 'Dm_LakeHrl_0030_ArrowFire_Loop', 'SLinkKey': ''})
    } {
        Obj_Arrow_Fire[Item].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor[Arrow].EventWait({'IsWaitEnd': True, 'Frames': 455})
        Obj_Arrow_Fire[Item].EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': 'firearrowP', 'RotOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator', 'TransOffset': [0.0, -0.004999999888241291, 0.0]})
        Obj_Arrow_Fire[Item].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Rotate_Obj'})
        Obj_Arrow_Fire[Item].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0030_Arrow_Fire_Wait'})
    }

    Obj_Arrow_Fire[Item].EventTriggerModelUnbind()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 1.5})
}
