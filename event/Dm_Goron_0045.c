-------- EventFlow: Dm_Goron_0045 --------

Actor: Obj_GoronCity_LargePot_A_01
entrypoint: None()
actions: ['EventGoronLargePotDropPrize']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Heart_Piece
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerRemoveAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_Goron_0040_Obj_Heart_Piece.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_Goron_0040/Dm_Goron_0040_Obj_Heart_Piece/workspace.pp__ModelProject.gyml'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {

    call Common.AirStartUp()


    call Dm_Goron_0040.RoulettePot()


    fork {
        Obj_GoronCity_LargePot_A_01.EventGoronLargePotDropPrize({'IsWaitEnd': True})
    } {
        Dm_Locator[camera].EventWarpToTargetPosAndRot({'Position': [0.0, 100.0, 0.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
    }

    Obj_Heart_Piece.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.0, 99.0, 4.5], 'YAngle': 0.0, 'ClothWarpMode': -1})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Obj_Heart_Piece', 'KeyName': 'Wait'})

    fork {
        Obj_Heart_Piece.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C01', 'IsAnimeDriven': True, 'ForceFadeInFrame': 0.0})
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Obj_Heart_Piece', 'KeyName': 'Wait'})
        Obj_Heart_Piece.EventPlayAS({'ASName': 'Rotate_Obj', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 37})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'IsIgnoreRootRot': True, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'camera'})
    }


    call Dm_Goron_0040.AfterDrop()

    Obj_Heart_Piece.EventTriggerRemoveAS()
}
