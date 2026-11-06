-------- EventFlow: Dm_LakeHrl_0003 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerMove', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_LakeHrl_0003/Dm_LakeHrl_0003_Player_Child/workspace.pp__ModelProject.gyml', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventAS': 'Work/AS/Root/Event/Dm_LakeHrl_0003_Player.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
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

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopBgmInWaterFilter', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event[voice]
entrypoint: None()
actions: ['EventTriggerEmitNpcOrPlayerVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    SoundSystemActor.EventTriggerStopBgmInWaterFilter({'CommandLife': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kaepora_LakeHrl_Appeared_FromValley', 'Index': -1, 'Value': True})
    TerrainSystemActor.EventTerrainCalcCenter({'SceneName': 'HyruleField_02', 'IsWaitEnd': True, 'Position': [-248.00100708007812, 130.77999877929688, 412.8089904785156]})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 46.904998779296875, 'ASCommand': 'C01', 'Position': [-246.36000061035156, 135.11160278320312, 414.1863098144531], 'ClothWarpMode': 0, 'EnableInAir': True})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'InTheWaterOnetime'})
    }


    fork {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'C01', 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Biyoon'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})

            fork {
                GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Piton'})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
                Player_Event[voice].EventTriggerEmitNpcOrPlayerVoice({'WordTypePlusVariation': 'Dm_LakeHrl_0003_000'})
            }

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 600})
        Player_Event.EventPlayerMove({'WorldPos': [-241.8000030517578, 129.86000061035156, 418.32000732421875], 'IsWaitEnd': True, 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'UseAnmDriven': False, 'IsWaitEnd': False, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
    } {

        fork {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'RootType': 1, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02', 'Text2': ''})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 6.760000228881836, 'EndFNumber': 7.989999771118164, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 0, 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

            fork {
                UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LakeHylia.game__location__Location.gyml'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 500})
            } {
                Npc_Navi.EventWarpToTargetPosAndRot({'YAngle': 46.904998779296875, 'IsWaitEnd': True, 'Position': [-241.64999389648438, 131.2899932861328, 417.8599853515625], 'ClothWarpMode': -1})
            }

        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C03', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'InTheWaterMarineSnow'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'FaceFlow', 'ActorName': 'Player'})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'Foam_Sink'})
        CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0003_MarineSnow'})
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_LakeHrl_0003_FoamSink'})
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_LakeHrl_0003_Dive', 'SLinkKey': ''})
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_LakeHrl_0003_Swim', 'SLinkKey': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 387})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DM:PlayerSE下げ(初回突入デモ)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
